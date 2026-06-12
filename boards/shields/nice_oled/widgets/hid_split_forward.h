/*
 * Copyright (c) 2024 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 *
 * HID Split Forward – bridges central-side HID events (time, volume, weather)
 * to the peripheral half of a ZMK split keyboard via the split transport.
 *
 * Architecture:
 *   CENTRAL:  hid.c raises time_notification  →  hid_split_forward.c listens,
 *             encodes the payload, and sends it to the peripheral using
 *             zmk_split_central_invoke_behavior() with a special "hid_fwd"
 *             behavior.
 *
 *   PERIPHERAL: The "hid_fwd" behavior handler (registered locally) decodes
 *               the parameters and raises the same time_notification event,
 *               which screen_peripheral.c subscribes to and draws.
 *
 * Fallback (if no split transport available):
 *   A dongle-based approach can be used: the central sends HID data over a
 *   dedicated BLE GATT characteristic to a "dongle" device that acts as a
 *   proxy to the peripheral display.
 */

#pragma once

#include <zephyr/kernel.h>

/**
 * @brief Initialize the HID split forward subsystem.
 *
 * On CENTRAL: registers a listener for time_notification events
 * and forwards them to all connected peripherals.
 *
 * On PERIPHERAL: initializes the "hid_fwd" behavior handler that
 * receives forwarded HID data from the central.
 *
 * @return 0 on success, negative errno on failure.
 */
int zmk_hid_split_forward_init(void);
