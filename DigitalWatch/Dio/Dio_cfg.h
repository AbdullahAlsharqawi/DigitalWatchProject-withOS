/************************************/
/* Author	: Abdullah Alsharqawi			*/
/* Date		: 1/4/2018				*/
/* Version	: V02					*/
/************************************/
#ifndef _DIO_CFG_H
#define _DIO_CFG_H

typedef enum
{
	InputWithInternalPUR=0,
	InputWithoutInternalPUR,
	Output
}Dio_mode_t;

typedef enum
{
	PA=0,
	PB,
	PC,
	PD
}Dio_port_t;

typedef enum
{
	PA0=0,      /*PA0*/
	PA1,        /*PA1*/
	PA2,        /*PA2*/
	PA3,        /*PA3*/
	PA4,        /*PA4*/
	PA5,        /*PA5*/
	PA6,        /*PA6*/
	PA7,        /*PA7*/
	
	PB0,        /*PB0*/
	PB1,        /*PB1*/
	PB2,        /*PB2*/
	PB3,        /*PB3*/
	PB4,        /*PB4*/
	PB5,        /*PB5*/
	PB6,        /*PB6*/
	PB7,        /*PB7*/
	
	PC0,        /*PC0*/
	PC1,        /*PC1*/
	PC2,        /*PC2*/
	PC3,        /*PC3*/
	PC4,        /*PC4*/
	PC5,        /*PC5*/
	PC6,        /*PC6*/
	PC7,        /*PC7*/
	
	PD0,        /*PD0*/
	PD1,        /*PD1*/
	PD2,        /*PD2*/
	PD3,        /*PD3*/
	PD4,        /*PD4*/
	PD5,        /*PD5*/
	PD6,        /*PD6*/
	PD7,		/*PD7*/
	NumberOfPins
}Dio_pinname_t;

/*typedef struct
{
	Dio_pinname_t	pinname;
	Dio_mode_t		mode;
	Dio_port_t		port;
	u8				pin;
}Dio_cfg_t;*/

/*extern const Dio_cfg_t Dio_cgf[];*/
extern const Dio_mode_t Dio_cfg[];

#endif
