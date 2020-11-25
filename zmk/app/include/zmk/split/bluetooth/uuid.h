/*
 * Copyright (c) 2020 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#pragma once

#include <bluetooth/uuid.h>

#ifndef BT_UUID_NUM_OF_DIGITALS
#define BT_UUID_NUM_OF_DIGITALS BT_UUID_DECLARE_16(0x2909)
#endif

#define ZMK_BT_SPLIT_UUID(num) BT_UUID_128_ENCODE(num, 0x0096, 0x7107, 0xc967, 0xc5cfb1c2482a)
#define ZMK_SPLIT_BT_SERVICE_UUID ZMK_BT_SPLIT_UUID(0x00000000)
#define ZMK_SPLIT_BT_CHAR_POSITION_STATE_UUID ZMK_BT_SPLIT_UUID(0x00000001)