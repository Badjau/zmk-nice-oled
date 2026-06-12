/*
 * Copyright (c) 2024 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 *
 * Minimal HID event implementations for the PERIPHERAL side.
 *
 * The full raw_hid subsystem (usb_hid.c, hog.c, hid.c) runs only on the
 * CENTRAL because that's where the companion app connects.  However the
 * peripheral needs the ZMK_EVENT_IMPL for time_notification (and future
 * volume/weather notifications) so that screen_peripheral.c can subscribe
 * to them and the hid_fwd behavior can raise them locally.
 *
 * This file provides ONLY the event implementations – no USB/BLE/processing.
 */

#include <raw_hid/hid.h>

ZMK_EVENT_IMPL(time_notification);
ZMK_EVENT_IMPL(is_connected_notification);
