#pragma once

#include <stdint.h>

const int bloader_size = 696;
uint8_t bloader_data[696] = {
    0x01, 0xee, 0x35, 0xd0, 0x0e, 0x40, 0x33, 0xd4, 0x1e, 0x44, 0xe3, 0x60, 0x39, 0xc2, 0x33, 0xdf, 0x2e, 0x44, 0x88,
    0xb0, 0x09, 0x00, 0x25, 0xd3, 0x00, 0xe0, 0x04, 0x13, 0x09, 0xe1, 0x18, 0x41, 0x29, 0x71, 0x17, 0x13, 0x2e, 0xd1,
    0x3d, 0xd3, 0x0a, 0x20, 0x03, 0xe2, 0x10, 0x42, 0x06, 0x21, 0x06, 0x21, 0x06, 0x21, 0x05, 0x23, 0xfe, 0x73, 0xf8,
    0x8f, 0xfc, 0x71, 0x05, 0x23, 0x12, 0x60, 0xf8, 0x71, 0x12, 0x60, 0x33, 0xd1, 0x12, 0x60, 0xfe, 0xe2, 0x29, 0x20,
    0x02, 0x21, 0x32, 0xd1, 0x03, 0xe0, 0x02, 0x21, 0x23, 0xc7, 0xfe, 0xe2, 0x01, 0xe4, 0x0c, 0xe6, 0x06, 0x63, 0x32,
    0x61, 0x29, 0x21, 0x12, 0x23, 0x7f, 0xe5, 0x10, 0x45, 0x02, 0x89, 0x32, 0x61, 0x48, 0x21, 0xfa, 0x8b, 0x10, 0x46,
    0xf3, 0x8b, 0x14, 0xd2, 0x15, 0xd1, 0x22, 0x21, 0x0d, 0xd6, 0x6a, 0x46, 0x0e, 0xc7, 0x03, 0x65, 0x13, 0xd0, 0x13,
    0xd1, 0x02, 0xe4, 0x56, 0x63, 0x10, 0x43, 0x09, 0xf0, 0xfc, 0x8f, 0x08, 0x71, 0x56, 0x63, 0x10, 0x43, 0x09, 0xf0,
    0x0a, 0xf1, 0xfb, 0x8f, 0x08, 0x71, 0x10, 0x44, 0xf2, 0x8b, 0x04, 0xd7, 0x6a, 0x47, 0x71, 0xa0, 0x09, 0x00, 0x09,
    0x00, 0x00, 0x00, 0x00, 0xff, 0x01, 0x00, 0x14, 0x00, 0x01, 0x00, 0x04, 0x00, 0x20, 0x00, 0x00, 0x00, 0xe0, 0x07,
    0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0xf0, 0x03, 0x00, 0xff, 0xff, 0x1f, 0x00, 0xe4, 0x74, 0x5f, 0xa0, 0x00,
    0x00, 0x00, 0xa0, 0x00, 0x00, 0x00, 0x8c, 0xf0, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x8d, 0x3c, 0x69, 0x5f, 0xa0,
    0x08, 0x68, 0x5f, 0xa0, 0x20, 0x68, 0x5f, 0xa0, 0x14, 0x6c, 0x5f, 0xa0, 0x14, 0x74, 0x5f, 0xa0, 0x14, 0x78, 0x5f,
    0xa0, 0x34, 0x78, 0x5f, 0xa0, 0x54, 0x78, 0x5f, 0xa0, 0x74, 0x78, 0x5f, 0xa0, 0x14, 0x7c, 0x5f, 0xa0, 0x1c, 0x00,
    0xa0, 0xff, 0x2c, 0x00, 0xa0, 0xff, 0x3c, 0x00, 0xa0, 0xff, 0x44, 0x80, 0x5f, 0xa0, 0x08, 0x80, 0x5f, 0xa0, 0x10,
    0x00, 0xd0, 0xff, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0xa0, 0xe3, 0xff, 0xe2, 0x18, 0x43, 0x09, 0x42, 0x28, 0x43,
    0x01, 0x42, 0x02, 0xc7, 0x29, 0x20, 0x3b, 0x20, 0x2b, 0x40, 0x09, 0x00, 0x03, 0x4f, 0x02, 0x00, 0xf0, 0xcb, 0x0e,
    0x40, 0xf4, 0xe5, 0x28, 0x45, 0x53, 0x66, 0x20, 0x76, 0x18, 0x45, 0x18, 0x46, 0xff, 0xe3, 0x18, 0x43, 0x28, 0x43,
    0x1c, 0x73, 0x32, 0x60, 0x20, 0xc8, 0x01, 0x8d, 0x02, 0xe2, 0x01, 0xe2, 0x18, 0x42, 0x08, 0x42, 0x08, 0x42, 0x00,
    0xe1, 0xe0, 0x72, 0x23, 0x60, 0x09, 0x40, 0x08, 0x40, 0x28, 0x22, 0x16, 0x06, 0x16, 0x05, 0xf7, 0x8b, 0x09, 0x00,
    0x09, 0x00, 0x09, 0x00, 0x09, 0x00, 0x09, 0x00, 0x09, 0x00, 0x07, 0x4f, 0x0b, 0x00, 0x09, 0x00, 0x27, 0xd4, 0x28,
    0xd3, 0x42, 0x64, 0x00, 0xee, 0x30, 0x34, 0x08, 0x89, 0x26, 0xd3, 0x04, 0xee, 0x30, 0x34, 0x04, 0x89, 0x25, 0xd3,
    0x30, 0x34, 0x01, 0x89, 0x3e, 0xa0, 0x09, 0x00, 0x24, 0xc7, 0xec, 0x30, 0x02, 0x60, 0x24, 0xd1, 0x11, 0x20, 0x3e,
    0xd1, 0x18, 0x21, 0x0b, 0x89, 0x26, 0xd1, 0x22, 0xc7, 0xe3, 0x62, 0x08, 0x42, 0x2c, 0x30, 0x00, 0xe3, 0x06, 0x62,
    0x12, 0x22, 0x06, 0x62, 0x32, 0x22, 0x02, 0x62, 0x32, 0x22, 0x38, 0xd1, 0x18, 0x21, 0x26, 0x89, 0x22, 0xc7, 0xe3,
    0x62, 0x08, 0x42, 0x0c, 0x32, 0x28, 0xc7, 0xe3, 0x61, 0x08, 0x41, 0xec, 0x31, 0x0c, 0x31, 0x26, 0x64, 0x15, 0x65,
    0x51, 0x24, 0x02, 0x74, 0x15, 0x65, 0x51, 0x24, 0x26, 0x64, 0x15, 0x65, 0x51, 0x24, 0x26, 0x64, 0x15, 0x65, 0x51,
    0x24, 0x02, 0x74, 0x15, 0x65, 0x51, 0x24, 0x02, 0x74, 0x15, 0x65, 0x51, 0x24, 0x02, 0x74, 0x15, 0x65, 0x51, 0x24,
    0x26, 0x64, 0x15, 0x65, 0x51, 0x24, 0x02, 0x74, 0x15, 0x65, 0x51, 0x24, 0x02, 0x74, 0x15, 0x65, 0x51, 0x24, 0x21,
    0xd0, 0x2b, 0x40, 0xfa, 0x04, 0xcc, 0x07, 0x00, 0xac, 0x31, 0x2e, 0x30, 0x30, 0x31, 0x2e, 0x30, 0x31, 0x31, 0x2e,
    0x30, 0x32, 0x48, 0x98, 0x02, 0xac, 0x48, 0xd4, 0x02, 0xac, 0x00, 0xe0, 0x00, 0x00, 0x00, 0xe7, 0x0e, 0xac, 0x90,
    0x43, 0x01, 0xac, 0xd4, 0x84, 0x06, 0xac, 0x52, 0xb8, 0x5e, 0x3f, 0x80, 0xcd, 0x0e, 0xac, 0x44, 0x4f, 0x01, 0xac,
    0x38, 0xb8, 0x06, 0xac, 0x6a, 0x01, 0x01, 0xac, 0xe2, 0x3b, 0x02, 0xac, 0xf8, 0x3b, 0x02, 0xac, 0x0a, 0x3c, 0x02,
    0xac, 0x30, 0x02, 0x01, 0xac, 0x10, 0x77, 0x02, 0xac, 0x28, 0x77, 0x02, 0xac, 0x3a, 0x77, 0x02, 0xac, 0x09, 0x00,
    0x09, 0x00, 0x09, 0x00, 0x10, 0xd3, 0x32, 0x60, 0x08, 0x20, 0x41, 0x8b, 0x01, 0xe0, 0x02, 0x23, 0x09, 0x00, 0x09,
    0x00, 0x09, 0x00, 0x09, 0x00, 0x2d, 0xd3, 0x32, 0x60, 0x08, 0x20, 0x1f, 0x8b, 0x01, 0xe0, 0x02, 0x23, 0x09, 0x00,
    0x20, 0x01, 0x00, 0xac, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

typedef struct bloader_cfg {
    uint32_t enable_wide;
    uint32_t enable_3d;
} bloader_cfg_t;
