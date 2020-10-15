#ifndef  UART_CFG_H
#define	 UART_CFG_H

typedef enum
{
	BR_9600=9600,
	BR_19200=19200,
	BR_115200=115200,
	BR_14400=14400,
	BR_230400=230400
}UART_BR_t;

typedef enum
{
	PC_Even=0,
	PC_Odd,
	PC_None
}UART_PC_t;

typedef enum 
{
	Data_5=0,
	Data_6,
	Data_7,
	Data_8,
	Data_9
}UART_DataLength_t;

typedef enum
{
	Stop_1=0,
	Stop_2
}UART_StopLength_t;

typedef struct 
{
	UART_BR_t              Baude_Rate;
	UART_DataLength_t      Data_Length;
	UART_PC_t              Parity_Check;
	UART_StopLength_t      Stop_Length;
}UART_CFG_t;

extern const UART_CFG_t UART_CFG [];

#endif
 	
