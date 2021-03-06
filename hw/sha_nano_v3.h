#ifndef _CONFIG_H_
#  error "Include config.h instead of this file"
#endif

#ifndef _HW_NANO_V3_H_
#define _HW_NANO_V3_H_

#define UART_BAUD_RATE   16 // 115200 @ 16MHz
#define RINGBUF_SIZE    128

// SPI port defs
#define SPI_PORT    PORTB
#define SPI_DDR     DDRB
#define SPI_SS      2
#define SPI_MOSI    3
#define SPI_MISO    4
#define SPI_SCLK    5

// Connection to CC1101 GDO2
#define GDO2_CLK_PIN         2
#define GDO2_CLK_INT         INT0
#define GDO2_CLK_INTVECT     INT0_vect
#define GDO2_CLK_INT_ISCn0   ISC00
#define GDO2_CLK_INT_ISCn1   ISC01

// Connection to CC1101 GDO0
#define GDO0_DATA_DDR     DDRD
#define GDO0_DATA_PORT    PORTD
#define GDO0_DATA_PIN     3
#define GDO0_DATA_IN      PIND

// TTY USART
#define TTY_UDRE_VECT   USART_UDRE_vect
#define TTY_RX_VECT     USART_RX_vect

// LED
#define LED_DDR   DDRB
#define LED_PORT  PORTB
#define LED_PIN   5

#define NEEDS_MAIN
#define HAS_LED

#endif
