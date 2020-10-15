/**********************************************/
/*    Name:Abdullah Alsharqawi                */
/*    Date: 25/MAR/2018                       */
/*    OS Version: 1                           */
/**********************************************/
#include "STD_types.h"
#include "BIT_math.h"
#include "DIO_init.h"
#include "OS.h"


static u16 CurrentTick=0;
static u16 OV_Counter=0;

/************Application*******************************/
void led1()
{
	
}
void led2()
{
	
}


/*******************************************************/


extern void OS_voidInitialize(void)
{
	currentTick=0;
	OV_Counter=0;
	TIM0_voidSetRegister(RTO_u8_SET_REGISTER);
	TIM0_voidSetCallBack(ISR);
}


extern void OS_voidStart(void)
{
	static u8 i=0;
	while(1)
	{
		for(i=0;i<OS_u8TASKS_NUMBER;i++)
		{
			if(CurrentTick % OS_cfg[i].periodicity == 0)
			{
				OS_cfg[i].pf();
			}
		}
	}
}

void ISR(void)
{
		OV_Counter++;
	if(OV_Counter==RTO_u16_MAX_OVERFLOW)
	{
		OV_Counter=0;
		TIM0_voidSetRegister(RTO_u8_SET_REGISTER);
		currentTick++;
		scheduler();
	}
}