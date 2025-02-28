/* generated pin source file - do not edit */
#include "bsp_api.h"
#include "r_ioport_api.h"
#include "r_ioport.h"

extern const ioport_extend_cfg_t  g_ioport_cfg_extend;


const ioport_pin_cfg_t g_bsp_pin_cfg_data[] = {
    {
        .pin = BSP_IO_PORT_02_PIN_4,
        .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_HIGH | (uint32_t) IOPORT_CFG_PORT_PERI | (uint32_t) IOPORT_CFG_SLEW_RATE_FAST | (uint32_t) IOPORT_PIN_P024_PFC_00_TDO)
    },
    {
        .pin = BSP_IO_PORT_02_PIN_5,
        .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_PERI | (uint32_t) IOPORT_PIN_P025_PFC_01_TDI)
    },
    {
        .pin = BSP_IO_PORT_02_PIN_6,
        .pin_cfg = ((uint32_t) IOPORT_CFG_DRIVE_HIGH | (uint32_t) IOPORT_CFG_PORT_PERI | (uint32_t) IOPORT_CFG_SLEW_RATE_FAST | (uint32_t) IOPORT_PIN_P026_PFC_00_TMS_SWDIO)
    },
    {
        .pin = BSP_IO_PORT_02_PIN_7,
        .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_PERI | (uint32_t) IOPORT_PIN_P027_PFC_00_TCK_SWCLK)
    },
    {
        .pin = BSP_IO_PORT_14_PIN_0,
        .pin_cfg = ((uint32_t) IOPORT_CFG_PORT_DIRECTION_OUTPUT_INPUT | (uint32_t) IOPORT_CFG_PORT_OUTPUT_LOW)
    },
};

const ioport_cfg_t g_bsp_pin_cfg = {
    .number_of_pins = sizeof(g_bsp_pin_cfg_data)/sizeof(ioport_pin_cfg_t),
    .p_pin_cfg_data = &g_bsp_pin_cfg_data[0],
    .p_extend = &g_ioport_cfg_extend,
};
