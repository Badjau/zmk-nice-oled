/*
 * Copyright (c) 2024 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 *
 * HID Split Forward – Bridges central-side HID events to peripherals.
 *
 * ── Architecture ──────────────────────────────────────────────────────
 *
 *  PRIMARY (works with stock ZMK APIs):
 *    CENTRAL:  Listens for time_notification, encodes it into a behavior
 *              binding, and calls zmk_split_central_invoke_behavior()
 *              targeting a "hid_fwd" behavior on each peripheral.
 *    PERIPHERAL:  The "hid_fwd" behavior driver decodes the payload and
 *              raises the same time_notification locally so
 *              screen_peripheral.c can draw it.
 *
 *    DT binding required (add to keymap .dts/.overlay):
 *        / {
 *            behaviors {
 *                hid_fwd: hid_fwd {
 *                    compatible = "zmk,behavior-hid-fwd";
 *                    #binding-cells = <0>;
 *                };
 *            };
 *        };
 *
 *  FALLBACK (dongle / core extension):
 *    If the behavior approach is undesirable, a new ZMK central command
 *    type ZMK_SPLIT_TRANSPORT_CENTRAL_CMD_TYPE_HID_DATA can be added to
 *    ZMK core (types.h, peripheral.c, bluetooth/central.c).  See the
 *    companion ZMK_CORE_PATCH.md document for details.
 *
 * ── Encoding ──────────────────────────────────────────────────────────
 *
 *  For TIME:  param1 = (hour) | (minute << 8) | (0xAA << 16)
 *             param2 = 0
 */

#include <zephyr/kernel.h>
#include <zephyr/device.h>
#include <zephyr/init.h>
#include <string.h>

#include <zephyr/logging/log.h>
LOG_MODULE_DECLARE(zmk, CONFIG_ZMK_LOG_LEVEL);

#include <zmk/event_manager.h>
#include <zmk/behavior.h>

#include <raw_hid/hid.h>

/* --------------------------------------------------------------------------
 * Shared constants
 * -------------------------------------------------------------------------- */

/** Magic byte in param1[23:16] identifying the HID data type. */
#define HID_FWD_MAGIC_TIME  0xAA

#define HID_FWD_BEHAVIOR_DEV_NAME "HID_FWD"

/* --------------------------------------------------------------------------
 * CENTRAL side – forward time_notification → peripheral(s)
 * -------------------------------------------------------------------------- */

#if IS_ENABLED(CONFIG_ZMK_SPLIT) && IS_ENABLED(CONFIG_ZMK_SPLIT_ROLE_CENTRAL)

#include <zmk/split/central.h>

/**
 * @brief Send encoded HID time data to every connected BLE peripheral.
 */
static void hid_split_central_forward_time(uint8_t hour, uint8_t minute) {
    /* Build a minimal behavior binding that targets the "hid_fwd" behavior
     * on the peripheral.  The behavior's binding_pressed handler will
     * decode param1 and raise time_notification locally.
     */
    struct zmk_behavior_binding binding = {
        .behavior_dev = HID_FWD_BEHAVIOR_DEV_NAME,
        .param1 = ((uint32_t)HID_FWD_MAGIC_TIME << 16) |
                  ((uint32_t)minute << 8) |
                  (uint32_t)hour,
        .param2 = 0,
    };

    struct zmk_behavior_binding_event evt = {
        .position = 0,        /* dummy position */
        .timestamp = k_uptime_get(),
    };

    for (uint8_t src = 0; src < CONFIG_ZMK_SPLIT_BLE_CENTRAL_PERIPHERALS; src++) {
        int ret = zmk_split_central_invoke_behavior(src, &binding, evt, true);
        if (ret != 0) {
            LOG_ERR("hid_split: failed to fwd time to periph %u (err %d)", src, ret);
        }
    }
}

static int hid_split_central_time_listener(const zmk_event_t *eh) {
    const struct time_notification *ev = as_time_notification(eh);
    if (ev != NULL) {
        LOG_INF("hid_split: central fwd time %02u:%02u", ev->hour, ev->minute);
        hid_split_central_forward_time(ev->hour, ev->minute);
    }
    return ZMK_EV_EVENT_BUBBLE;
}

ZMK_LISTENER(hid_split_central, hid_split_central_time_listener);
ZMK_SUBSCRIPTION(hid_split_central, time_notification);

#endif /* CENTRAL (SPLIT + ROLE_CENTRAL) */

/* --------------------------------------------------------------------------
 * PERIPHERAL side – "hid_fwd" behavior driver
 *
 * This driver is instantiated via BEHAVIOR_DT_INST_DEFINE and
 * must match the devicetree compatible "zmk,behavior-hid-fwd".
 * -------------------------------------------------------------------------- */

#if IS_ENABLED(CONFIG_ZMK_SPLIT) && !IS_ENABLED(CONFIG_ZMK_SPLIT_ROLE_CENTRAL)

/* DT compat: zmk,behavior-hid-fwd */
#define DT_DRV_COMPAT zmk_behavior_hid_fwd
#include <drivers/behavior.h>

static int hid_fwd_binding_pressed(struct zmk_behavior_binding *binding,
                                   struct zmk_behavior_binding_event event) {
    uint8_t magic = (binding->param1 >> 16) & 0xFF;

    switch (magic) {
    case HID_FWD_MAGIC_TIME: {
        uint8_t hour   = (binding->param1) & 0xFF;
        uint8_t minute = (binding->param1 >> 8) & 0xFF;
        LOG_INF("hid_fwd: periph rx time %02u:%02u", hour, minute);
        raise_time_notification((struct time_notification){.hour = hour, .minute = minute});
        break;
    }
    default:
        LOG_WRN("hid_fwd: unknown magic 0x%02X", magic);
        break;
    }

    return ZMK_BEHAVIOR_OPAQUE;
}

static int hid_fwd_binding_released(struct zmk_behavior_binding *binding,
                                    struct zmk_behavior_binding_event event) {
    return ZMK_BEHAVIOR_OPAQUE;
}

static const struct behavior_driver_api hid_fwd_driver_api = {
    .locality = BEHAVIOR_LOCALITY_EVENT_SOURCE,
    .binding_pressed  = hid_fwd_binding_pressed,
    .binding_released = hid_fwd_binding_released,
};

static int hid_fwd_init(const struct device *dev) {
    LOG_INF("hid_fwd behavior driver initialized, device name: %s", dev->name);
    return 0;
}

/* Direct instantiation – if the DT node is missing, BEHAVIOR_DT_INST_DEFINE
 * produces a compile error. No silent failures. */

BEHAVIOR_DT_INST_DEFINE(0, hid_fwd_init, NULL, NULL, NULL,
                        POST_KERNEL, CONFIG_KERNEL_INIT_PRIORITY_DEFAULT,
                        &hid_fwd_driver_api);

#endif /* PERIPHERAL */

/* --------------------------------------------------------------------------
 * Subsystem init – runs on both central and peripheral
 * -------------------------------------------------------------------------- */

static int hid_split_forward_init(const struct device *dev) {
#if IS_ENABLED(CONFIG_ZMK_SPLIT) && !IS_ENABLED(CONFIG_ZMK_SPLIT_ROLE_CENTRAL)
    /* Comprehensive diagnostic: dump all registered behaviors */
    LOG_INF("=== Behavior registry dump START ===");
    int count = 0;
    int found = 0;
    STRUCT_SECTION_FOREACH(zmk_behavior_ref, ref) {
        const char *name = ref->device ? ref->device->name : "(null device)";
        LOG_INF("  [%d] name='%s' ready=%d", count, name,
                ref->device ? device_is_ready(ref->device) : 0);
        if (ref->device && strcmp(ref->device->name, HID_FWD_BEHAVIOR_DEV_NAME) == 0) {
            found = 1;
            LOG_INF("  >>> hid_fwd FOUND at index %d", count);
        }
        count++;
    }
    LOG_INF("=== Behavior registry dump END: %d behaviors, hid_fwd %s ===",
            count, found ? "FOUND" : "NOT FOUND");
    if (!found) {
        LOG_ERR("CRITICAL: hid_fwd behavior NOT in registry – DT node missing from peripheral build?");
    }
#endif
    LOG_DBG("hid_split_forward subsystem ready");
    return 0;
}

SYS_INIT(hid_split_forward_init, APPLICATION, CONFIG_APPLICATION_INIT_PRIORITY);
