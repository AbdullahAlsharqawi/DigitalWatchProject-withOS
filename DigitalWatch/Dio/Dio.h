/************************************/
/* Author	: Abdullah Alsharqawi		*/
/* Date		: 1/4/2018				*/
/* Version	: V02					*/
/************************************/
#ifndef _DIO_H
#define _DIO_H

#include "STD_TYPES.h"
#include "Dio_cfg.h"

extern void Dio_Init(void);

extern void Dio_WritePin(Dio_pinname_t pinname, u8 value);

extern bool Dio_ReadPin(Dio_pinname_t pinname);

#endif
