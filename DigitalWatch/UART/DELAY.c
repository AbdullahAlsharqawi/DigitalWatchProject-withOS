#include "STD_TYPES.h"
#include "DELAY.h"
void Delay_ms(u32 value)
{
	u32 i=0;
	u32 count=((value*1000000)-(zm)) / (125+(mm));
	for(;i<count;i++)
	{
		asm("NOP");
	}

}
