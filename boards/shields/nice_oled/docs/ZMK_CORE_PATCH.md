# ZMK Core Extension – Custom HID Data Command Type

This document describes the **alternative approach** for forwarding HID data
(time, volume, weather) from the central to peripheral halves of a ZMK split
keyboard.  Unlike the primary (behavior-based) approach in `hid_split_forward.c`,
this method adds a **dedicated central command type** to ZMK core, which is
cleaner and more efficient but requires forking/patching ZMK.

## Overview

Currently ZMK's split transport defines these central→peripheral command types:

```c
// app/include/zmk/split/transport/types.h
enum zmk_split_transport_central_command_type {
    ZMK_SPLIT_TRANSPORT_CENTRAL_CMD_TYPE_POLL_EVENTS,
    ZMK_SPLIT_TRANSPORT_CENTRAL_CMD_TYPE_INVOKE_BEHAVIOR,
    ZMK_SPLIT_TRANSPORT_CENTRAL_CMD_TYPE_SET_PHYSICAL_LAYOUT,
    ZMK_SPLIT_TRANSPORT_CENTRAL_CMD_TYPE_SET_HID_INDICATORS,
};
```

We add one more:

```c
    ZMK_SPLIT_TRANSPORT_CENTRAL_CMD_TYPE_HID_DATA,
```

## Required ZMK Core Changes

### 1. `app/include/zmk/split/transport/types.h`

Add the new enum value and payload struct:

```c
// Add to the enum:
    ZMK_SPLIT_TRANSPORT_CENTRAL_CMD_TYPE_HID_DATA,

// Add to the union inside struct zmk_split_transport_central_command:
        struct {
            uint8_t hid_type;   // _TIME=0xAA, _VOLUME, _WEATHER, etc.
            uint8_t data[8];    // payload – hour, minute for TIME
        } hid_data;
```

### 2. `app/src/split/peripheral.c`

Handle the new command type in `zmk_split_transport_peripheral_command_handler()`:

```c
#if IS_ENABLED(CONFIG_ZMK_SPLIT_PERIPHERAL_HID_DATA)
    case ZMK_SPLIT_TRANSPORT_CENTRAL_CMD_TYPE_HID_DATA: {
        return zmk_split_peripheral_hid_data_handler(cmd.data.hid_data.hid_type,
                                                     cmd.data.hid_data.data);
    }
#endif
```

### 3. `app/src/split/bluetooth/central.c`

Allow the new command type through the BLE transport:

```c
// In split_central_bt_send_command():
    case ZMK_SPLIT_TRANSPORT_CENTRAL_CMD_TYPE_HID_DATA:   // <-- add this
    case ZMK_SPLIT_TRANSPORT_CENTRAL_CMD_TYPE_SET_HID_INDICATORS:
    case ZMK_SPLIT_TRANSPORT_CENTRAL_CMD_TYPE_SET_PHYSICAL_LAYOUT:
    case ZMK_SPLIT_TRANSPORT_CENTRAL_CMD_TYPE_INVOKE_BEHAVIOR:
```

### 4. `app/src/split/wired/central.c`

Same addition to the wired transport handler:

```c
// In get_payload_data_size():
    case ZMK_SPLIT_TRANSPORT_CENTRAL_CMD_TYPE_HID_DATA:
        return sizeof(cmd->data.hid_data);
```

### 5. New Kconfig

```kconfig
# In app/Kconfig or a new Kconfig file:
config ZMK_SPLIT_PERIPHERAL_HID_DATA
    bool "Enable HID data forwarding to split peripherals"
    default n
```

### 6. New function (in split module or shield)

```c
// app/include/zmk/split/central.h  (or shield-specific header)
int zmk_split_central_send_hid_data(uint8_t source, uint8_t hid_type,
                                    const uint8_t *data, uint8_t len);
```

Implementation calls `active_transport->api->send_command()` with the new type.

## Shield Module Changes (if using core extension)

Replace `hid_split_forward.c` with a simpler version that calls
`zmk_split_central_send_hid_data()` instead of `zmk_split_central_invoke_behavior()`.

The peripheral handler `zmk_split_peripheral_hid_data_handler()` is defined in the
shield module and raises the appropriate ZMK events (`time_notification`, etc.).

## Dongle-Based Alternative

If neither the behavior approach nor a ZMK core patch is acceptable, a dedicated
**BLE dongle** can act as a proxy:

1. A small MCU (e.g., nRF52840 dongle) connects to the central keyboard's
   Raw HID BLE service.
2. The dongle receives HID reports from the host and forwards them to the
   peripheral via a separate BLE connection or a custom GATT characteristic.
3. The peripheral's `screen_peripheral.c` subscribes to the dongle's
   characteristic and updates the display.

This approach keeps ZMK core unchanged but requires additional hardware and
firmware for the dongle.
