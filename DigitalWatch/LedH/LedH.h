/************************************/
/* Author	: Abdullah Alsharqawi		*/
/* Date		: 8/4/2018				*/
/* Version	: V01					*/
/************************************/

#ifndef _LEDH_H
#define _LEDH_H

#include "LedH_cfg.h"

extern void LedH_voidInit(void);

extern void LedH_voidSetLed(LedH_name_t ledname, u8 Copy_u8LedState);

#endif
