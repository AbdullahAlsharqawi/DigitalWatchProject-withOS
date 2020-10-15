#ifndef  UART_H
#define	 UART_H

#include "UART_CFG.h"

extern void UART_Init (void);

extern void UART_Transmit (u8* data, u16 length);

extern void UART_Receive (u8* data, u16 *length);

#endif  
