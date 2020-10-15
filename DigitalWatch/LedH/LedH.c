/************************************/
/* Author	: Abdullah Alsharqawi   */
/* Date		: 8/4/2018				*/
/* Version	: V01					*/
/************************************/

#include "STD_TYPES.h"
#include "Dio.h"
#include "LedH.h"

extern void LedH_voidInit(void)
{
	
}

extern void LedH_voidSetLed(LedH_name_t ledname, u8 Copy_u8LedState)
{
	if(Copy_u8LedState != 0)
	{
		Dio_WritePin(LedH_cfg[ledname].pinname, (1^LedH_cfg[ledname].mode));
	}
	else
	{
		Dio_WritePin(LedH_cfg[ledname].pinname, (0^LedH_cfg[ledname].mode));
	}
}
