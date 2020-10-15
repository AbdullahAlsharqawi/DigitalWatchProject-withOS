#ifndef UART_REG_H
#define UART_REG_H

#define UBRRH    *((u8*)0x40)
#define UBRRL	 *((u8*)0x29)
#define UCSRB	 *((u8*)0x2A)
#define UCSRC	 *((u8*)0x40)
#define UCSRA	 *((u8*)0x2B)
#define UDR		 *((u8*)0x2C)

#endif
