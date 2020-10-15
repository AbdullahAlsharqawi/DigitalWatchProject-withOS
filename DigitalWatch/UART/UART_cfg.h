

#ifndef	_UART_CFG_H
#define _UART_CFG_H


typedef enum
{
	BR_2400=2400,
	BR_4800=4800,
	BR_9600=9600,
	BR_14400=14400,
	BR_19200=19200,
	BR_28800=28800,
	BR_38400=38400,
	BR_57600=57600,
	BR_76800=76800,
	BR_115200=115200,
	BR_230400=230400,
	BR_250000=250000,
	BR_500000=500000,
	BR_1000000=1000000
}UART_BR_t;

typedef enum
{
	Data_Len_5,
	Data_Len_6,
	Data_Len_7,
	Data_Len_8,
	Data_Len_9
}UART_DATA_LEN_t;

typedef enum
{
	Parity_none,
	Parity_even,
	Parity_odd
}UART_PARTITY_t;

typedef enum
{
	STOP_Len_1,
	STOP_Len_2
}UART_STOP_LEN_t;


typedef struct
{
	UART_BR_t 			baudRate;
	UART_DATA_LEN_t		dataLen;
	UART_PARTITY_t 		parity;
	UART_STOP_LEN_t		StopLen;
}UART_cfg_t;


extern const UART_cfg_t uart_cfg[];

#endif
