

#ifndef _DIO_CFG_H
#define _DIO_CFG_H



typedef enum
{
	LED1=0,
	LED2,
	SEG1A,
	SEG1B,
	SEG1C,
	SEG1D,
	SEG1E,
	SEG1F,
	SEG1G,
	SEG2A,
	SEG2B,
	SEG2C,
	SEG2D,
	SEG2E,
	SEG2F,
	SEG2G,
	PC0,
	PC1,
	PC2,
	PC3,
	PC4,
	PC5,
	PC6,
	PC7,
	PD0,
	PD1,
	PD2,
	PD3,
	PD4,
	PD5,
	PD6,
	PD7
}DIO_PinNAme_t;

typedef enum
{
	InputWithoutPullUpResistancor=0,
	InputWithPullUpResistancor,
	Output
}DIO_PinMode_t;

/*
typedef enum
{	
	PA,
	PB,
	PC,
	PD
}DIO_Port_t;

*/

typedef struct
{
	DIO_PinNAme_t PinName;
	DIO_PinMode_t PinMode;
/*	DIO_Port_t	  Port;
	u8	 		  PinNumber; */
}DIO_cfg_t;

extern const DIO_cfg_t DIO_cfg[];

#endif
