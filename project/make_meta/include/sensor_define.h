#ifndef __SENSOR_DEFINE_COMMON_H__
#define __SENSOR_DEFINE_COMMON_H__

struct meta_item
{
	uint32_t tag;
	int32_t len;
	uint32_t crc32;
	unsigned char data[0]; /* Just a way for get data */
};

typedef enum  {
    ALS_TYPE_NONE    = 0,
    ALS_TYPE_ANALOG  = 1,
    ALS_TYPE_DIGITAL = 2,
} eALS_TYPE;

#define GPIO_INVALID  (-1)

typedef enum {
    GPIO0_A0 = 0,
    GPIO0_A1,
    GPIO0_A2,
    GPIO0_A3,
    GPIO0_A4,
    GPIO0_A5,
    GPIO0_A6,
    GPIO0_A7,
    GPIO0_B0 = 8,
    GPIO0_B1,
    GPIO0_B2,
    GPIO0_B3,
    GPIO0_B4,
    GPIO0_B5,
    GPIO0_B6,
    GPIO0_B7,
    GPIO0_C0 = 16,
    GPIO0_C1,
    GPIO0_C2,
    GPIO0_C3,
    GPIO0_C4,
    GPIO0_C5,
    GPIO0_C6,
    GPIO0_C7,
    GPIO0_D0 = 24,
    GPIO0_D1,
    GPIO0_D2,
    GPIO0_D3,
    GPIO0_D4,
    GPIO0_D5,
    GPIO0_D6,
    GPIO0_D7,
    GPIO1_A0 = 32,
    GPIO1_A1,
    GPIO1_A2,
    GPIO1_A3,
    GPIO1_A4,
    GPIO1_A5,
    GPIO1_A6,
    GPIO1_A7,
    GPIO1_B0 = 40,
    GPIO1_B1,
    GPIO1_B2,
    GPIO1_B3,
    GPIO1_B4,
    GPIO1_B5,
    GPIO1_B6,
    GPIO1_B7,
    GPIO1_C0 = 48,
    GPIO1_C1,
    GPIO1_C2,
    GPIO1_C3,
    GPIO1_C4,
    GPIO1_C5,
    GPIO1_C6,
    GPIO1_C7,
    GPIO1_D0 = 56,
    GPIO1_D1,
    GPIO1_D2,
    GPIO1_D3,
    GPIO1_D4,
    GPIO1_D5,
    GPIO1_D6,
    GPIO1_D7,
    GPIO2_A0 = 64,
    GPIO2_A1,
    GPIO2_A2,
    GPIO2_A3,
    GPIO2_A4,
    GPIO2_A5,
    GPIO2_A6,
    GPIO2_A7,
    GPIO2_B0 = 72,
    GPIO2_B1,
    GPIO2_B2,
    GPIO2_B3,
    GPIO2_B4,
    GPIO2_B5,
    GPIO2_B6,
    GPIO2_B7,
    GPIO2_C0 = 80,
    GPIO2_C1,
    GPIO2_C2,
    GPIO2_C3,
    GPIO2_C4,
    GPIO2_C5,
    GPIO2_C6,
    GPIO2_C7,
    GPIO2_D0 = 88,
    GPIO2_D1,
    GPIO2_D2,
    GPIO2_D3,
    GPIO2_D4,
    GPIO2_D5,
    GPIO2_D6,
    GPIO2_D7,
    GPIO3_A0 = 96,
    GPIO3_A1,
    GPIO3_A2,
    GPIO3_A3,
    GPIO3_A4,
    GPIO3_A5,
    GPIO3_A6,
    GPIO3_A7,
    GPIO3_B0 = 104,
    GPIO3_B1,
    GPIO3_B2,
    GPIO3_B3,
    GPIO3_B4,
    GPIO3_B5,
    GPIO3_B6,
    GPIO3_B7,
    GPIO3_C0 = 112,
    GPIO3_C1,
    GPIO3_C2,
    GPIO3_C3,
    GPIO3_C4,
    GPIO3_C5,
    GPIO3_C6,
    GPIO3_C7,
    GPIO3_D0 = 120,
    GPIO3_D1,
    GPIO3_D2,
    GPIO3_D3,
    GPIO3_D4,
    GPIO3_D5,
    GPIO3_D6,
    GPIO3_D7,
    GPIO4_A0 = 128,
    GPIO4_A1,
    GPIO4_A2,
    GPIO4_A3,
    GPIO4_A4,
    GPIO4_A5,
    GPIO4_A6,
    GPIO4_A7,
    GPIO4_B0 = 136,
    GPIO4_B1,
    GPIO4_B2,
    GPIO4_B3,
    GPIO4_B4,
    GPIO4_B5,
    GPIO4_B6,
    GPIO4_B7,
    GPIO4_C0 = 144,
    GPIO4_C1,
    GPIO4_C2,
    GPIO4_C3,
    GPIO4_C4,
    GPIO4_C5,
    GPIO4_C6,
    GPIO4_C7,
    GPIO4_D0 = 152,
    GPIO4_D1,
    GPIO4_D2,
    GPIO4_D3,
    GPIO4_D4,
    GPIO4_D5,
    GPIO4_D6,
    GPIO4_D7,
    GPIO_NUM_MAX
} ePINCTRL_PIN;

typedef enum {
	IOMUX_FUNC0 = 0,
	IOMUX_FUNC1,
	IOMUX_FUNC2,
	IOMUX_FUNC3,
	IOMUX_FUNC4,
	IOMUX_FUNC5,
	IOMUX_FUNC6,
	IOMUX_FUNC7,
	IOMUX_FUNC8,
	IOMUX_FUNC9,
	IOMUX_FUNC10,
	IOMUX_FUNC11,
	IOMUX_FUNC12,
	IOMUX_FUNC13,
	IOMUX_FUNC14,
	IOMUX_FUNC15,
	FUNC_INVALID,
} eIOMUX_FUNC;

#endif
