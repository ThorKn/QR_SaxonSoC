#ifndef SOC_H
#define SOC_H
#define SYSTEM_PLIC_SYSTEM_CORES_0_EXTERNAL_INTERRUPT 0
#define SYSTEM_PLIC_SYSTEM_CORES_0_EXTERNAL_SUPERVISOR_INTERRUPT 1
#define SYSTEM_PLIC_SYSTEM_CORES_1_EXTERNAL_INTERRUPT 2
#define SYSTEM_PLIC_SYSTEM_CORES_1_EXTERNAL_SUPERVISOR_INTERRUPT 3
#define SYSTEM_PLIC_SYSTEM_GPIO_A_INTERRUPTS_5 4
#define SYSTEM_PLIC_SYSTEM_GPIO_A_INTERRUPTS_6 5
#define SYSTEM_PLIC_SYSTEM_GPIO_A_INTERRUPTS_7 6
#define SYSTEM_PLIC_SYSTEM_GPIO_A_INTERRUPTS_8 7
#define SYSTEM_PLIC_SYSTEM_GPIO_A_INTERRUPTS_9 8
#define SYSTEM_PLIC_SYSTEM_GPIO_A_INTERRUPTS_18 9
#define SYSTEM_PLIC_SYSTEM_GPIO_A_INTERRUPTS_19 10
#define SYSTEM_PLIC_SYSTEM_GPIO_A_INTERRUPTS_20 11
#define SYSTEM_PLIC_SYSTEM_GPIO_A_INTERRUPTS_21 12
#define SYSTEM_PLIC_SYSTEM_UART_A_INTERRUPT 1
#define SYSTEM_PLIC_SYSTEM_I2C_INTERRUPT 17
#define SYSTEM_PLIC_SYSTEM_USB_A_CTRL_INTERRUPT 16
#define SYSTEM_PLIC_SYSTEM_DMA_VGA_CHANNEL_INTERRUPT 14
#define SYSTEM_PLIC_SYSTEM_DMA_AUDIO_OUT_CHANNEL_INTERRUPT 15
#define SYSTEM_CLINT_HZ 100000000
#define SYSTEM_UART_A_PARAMETER_UART_CTRL_CONFIG_DATA_WIDTH_MAX 8
#define SYSTEM_UART_A_PARAMETER_UART_CTRL_CONFIG_CLOCK_DIVIDER_WIDTH 12
#define SYSTEM_UART_A_PARAMETER_UART_CTRL_CONFIG_PRE_SAMPLING_SIZE 1
#define SYSTEM_UART_A_PARAMETER_UART_CTRL_CONFIG_SAMPLING_SIZE 3
#define SYSTEM_UART_A_PARAMETER_UART_CTRL_CONFIG_POST_SAMPLING_SIZE 1
#define SYSTEM_UART_A_PARAMETER_UART_CTRL_CONFIG_CTS_GEN 0
#define SYSTEM_UART_A_PARAMETER_UART_CTRL_CONFIG_RTS_GEN 0
#define SYSTEM_UART_A_PARAMETER_UART_CTRL_CONFIG_RX_SAMPLE_PER_BIT 5
#define SYSTEM_UART_A_PARAMETER_INIT_CONFIG_BAUDRATE 115200
#define SYSTEM_UART_A_PARAMETER_INIT_CONFIG_DATA_LENGTH 7
#define SYSTEM_UART_A_PARAMETER_INIT_CONFIG_PARITY NONE
#define SYSTEM_UART_A_PARAMETER_INIT_CONFIG_STOP ONE
#define SYSTEM_UART_A_PARAMETER_BUS_CAN_WRITE_CLOCK_DIVIDER_CONFIG 0
#define SYSTEM_UART_A_PARAMETER_BUS_CAN_WRITE_FRAME_CONFIG 0
#define SYSTEM_UART_A_PARAMETER_TX_FIFO_DEPTH 128
#define SYSTEM_UART_A_PARAMETER_RX_FIFO_DEPTH 128
#define SYSTEM_RAM_A_SIZE 8192
#define SYSTEM_CORES_0_CFU 0
#define SYSTEM_CORES_0_FPU 1
#define SYSTEM_CORES_0_MMU 1
#define SYSTEM_CORES_0_ICACHE_WAYS 2
#define SYSTEM_CORES_0_ICACHE_SIZE 8192
#define SYSTEM_CORES_0_BYTES_PER_LINE 64
#define SYSTEM_CORES_0_DCACHE_WAYS 2
#define SYSTEM_CORES_0_DCACHE_SIZE 8192
#define SYSTEM_CORES_0_BYTES_PER_LINE 64
#define SYSTEM_CORES_0_SUPERVISOR 1
#define SYSTEM_CORES_1_CFU 0
#define SYSTEM_CORES_1_FPU 1
#define SYSTEM_CORES_1_MMU 1
#define SYSTEM_CORES_1_ICACHE_WAYS 2
#define SYSTEM_CORES_1_ICACHE_SIZE 8192
#define SYSTEM_CORES_1_BYTES_PER_LINE 64
#define SYSTEM_CORES_1_DCACHE_WAYS 2
#define SYSTEM_CORES_1_DCACHE_SIZE 8192
#define SYSTEM_CORES_1_BYTES_PER_LINE 64
#define SYSTEM_CORES_1_SUPERVISOR 1
#define SYSTEM_CORES_0_D_BUS 0x0
#define SYSTEM_FABRIC_D_BUS_COHERENT_BMB 0x0
#define SYSTEM_FABRIC_EXCLUSIVE_MONITOR_INPUT 0x0
#define SYSTEM_FABRIC_EXCLUSIVE_MONITOR_OUTPUT 0x0
#define SYSTEM_FABRIC_INVALIDATION_MONITOR_INPUT 0x0
#define SYSTEM_FABRIC_INVALIDATION_MONITOR_OUTPUT 0x0
#define SYSTEM_FABRIC_D_BUS_BMB 0x0
#define SYSTEM_BMB_PERIPHERAL_BMB 0x10000000
#define SYSTEM_BMB_PERIPHERAL_BMB_SIZE 0x1000000
#define SYSTEM_PLIC_CTRL 0x10c00000
#define SYSTEM_PLIC_CTRL_SIZE 0x400000
#define SYSTEM_CLINT_CTRL 0x10b00000
#define SYSTEM_CLINT_CTRL_SIZE 0x10000
#define SYSTEM_GPIO_A_CTRL 0x10000000
#define SYSTEM_GPIO_A_CTRL_SIZE 0x100
#define SYSTEM_UART_A_CTRL 0x10010000
#define SYSTEM_UART_A_CTRL_SIZE 0x40
#define SYSTEM_SPI_A_CTRL 0x10020000
#define SYSTEM_SPI_A_CTRL_SIZE 0x1000
#define SYSTEM_I2C_CTRL 0x10030000
#define SYSTEM_I2C_CTRL_SIZE 0x100
#define SYSTEM_DMA_CTRL 0x10080000
#define SYSTEM_DMA_CTRL_SIZE 0x10000
#define SYSTEM_VGA_CTRL 0x10090000
#define SYSTEM_VGA_CTRL_SIZE 0x100
#define SYSTEM_AUDIO_OUT_CTRL 0x10094000
#define SYSTEM_AUDIO_OUT_CTRL_SIZE 0x1000
#define SYSTEM_USB_A_CTRL_CTRL 0x100a0000
#define SYSTEM_USB_A_CTRL_CTRL_SIZE 0x1000
#define SYSTEM_PLL_RECONFIG_CTRL 0x10091000
#define SYSTEM_PLL_RECONFIG_CTRL_SIZE 0x1000
#define SYSTEM_RAM_A_CTRL 0x10a00000
#define SYSTEM_RAM_A_CTRL_SIZE 0x2000
#define SDRAM_DOMAIN_BMB_CC_BMB 0x10100000
#define SDRAM_DOMAIN_BMB_CC_BMB_SIZE 0x2000
#define SDRAM_DOMAIN_PHY_A_CTRL 0x10101000
#define SDRAM_DOMAIN_PHY_A_CTRL_SIZE 0x1000
#define SYSTEM_SDRAM_A_CTRL 0x10100000
#define SYSTEM_SDRAM_A_CTRL_SIZE 0x1000
#define SYSTEM_SDRAM_A0_BMB 0x80000000
#define SYSTEM_SDRAM_A0_BMB_SIZE 0x10000000
#endif