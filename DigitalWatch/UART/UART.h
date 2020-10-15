

#ifndef	_UART_H
#define _UART_H

#include "UART_cfg.h"

extern void UART_voidInitialize(void);

extern void UART_voidTransmitData(u8 *Copy_u8DataPTR , u16 Copy_u16DataLen);

extern boolean UART_booleanReceiveData(u8 *Copy_u8DataPTR , u16 Copy_u16DataLen);

#endif
