
#include "STD_TYPES.h"
#include "DIO.h"
#include "SEVENSEGH.h"

static void voidDisplayZero(Seg_Num_t Copy_u8SegNum);
static void voidDisplayOne(Seg_Num_t Copy_u8SegNum);
static void voidDisplayTwo(Seg_Num_t Copy_u8SegNum);
static void voidDisplayThree(Seg_Num_t Copy_u8SegNum);
static void voidDisplayFour(Seg_Num_t Copy_u8SegNum);
static void voidDisplayFive(Seg_Num_t Copy_u8SegNum);
static void voidDisplaySix(Seg_Num_t Copy_u8SegNum);
static void voidDisplaySeven(Seg_Num_t Copy_u8SegNum);
static void voidDisplayEight(Seg_Num_t Copy_u8SegNum);
static void voidDisplayNine(Seg_Num_t Copy_u8SegNum);


void voidDisplayZero(Seg_Num_t Copy_u8SegNum)
{
	for(u8 index=0;index<NumberOfSegs;index++)
	{
		if(Seg_cfg[index].SegNum== Copy_u8SegNum && Seg_cfg[index].SegNum == Seg1)
		{
			switch(Seg_cfg[index].mode)
			{
				case CommonAnode:
					DIO_voidWritePin(SEG1A,0);
					DIO_voidWritePin(SEG1B,0);
					DIO_voidWritePin(SEG1C,0);
					DIO_voidWritePin(SEG1D,0);
					DIO_voidWritePin(SEG1E,0);
					DIO_voidWritePin(SEG1F,0);
					DIO_voidWritePin(SEG1G,1);
				break;
				case CommonCathod:
					DIO_voidWritePin(SEG1A,1);
					DIO_voidWritePin(SEG1B,1);
					DIO_voidWritePin(SEG1C,1);
					DIO_voidWritePin(SEG1D,1);
					DIO_voidWritePin(SEG1E,1);
					DIO_voidWritePin(SEG1F,1);
					DIO_voidWritePin(SEG1G,0);
				break;
			}
		}
		else if(Seg_cfg[index].SegNum== Copy_u8SegNum && Seg_cfg[index].SegNum == Seg2)
		{
			switch(Seg_cfg[index].mode)
			{
				case CommonAnode:
					DIO_voidWritePin(SEG2A,0);
					DIO_voidWritePin(SEG2B,0);
					DIO_voidWritePin(SEG2C,0);
					DIO_voidWritePin(SEG2D,0);
					DIO_voidWritePin(SEG2E,0);
					DIO_voidWritePin(SEG2F,0);
					DIO_voidWritePin(SEG2G,1);
				break;
				case CommonCathod:
					DIO_voidWritePin(SEG2A,1);
					DIO_voidWritePin(SEG2B,1);
					DIO_voidWritePin(SEG2C,1);
					DIO_voidWritePin(SEG2D,1);
					DIO_voidWritePin(SEG2E,1);
					DIO_voidWritePin(SEG2F,1);
					DIO_voidWritePin(SEG2G,0);
				break;
			}
		}
	}
}

void voidDisplayOne(Seg_Num_t Copy_u8SegNum)
{
	for(u8 index=0;index<NumberOfSegs;index++)
	{
		if(Seg_cfg[index].SegNum== Copy_u8SegNum && Seg_cfg[index].SegNum == Seg1)
		{
			switch(Seg_cfg[index].mode)
			{
				case CommonAnode:
					DIO_voidWritePin(SEG1A,1);
					DIO_voidWritePin(SEG1B,0);
					DIO_voidWritePin(SEG1C,0);
					DIO_voidWritePin(SEG1D,1);
					DIO_voidWritePin(SEG1E,1);
					DIO_voidWritePin(SEG1F,1);
					DIO_voidWritePin(SEG1G,1);
				break;
				case CommonCathod:
					DIO_voidWritePin(SEG1A,0);
					DIO_voidWritePin(SEG1B,1);
					DIO_voidWritePin(SEG1C,1);
					DIO_voidWritePin(SEG1D,0);
					DIO_voidWritePin(SEG1E,0);
					DIO_voidWritePin(SEG1F,0);
					DIO_voidWritePin(SEG1G,0);
				break;
			}
		}
		else if(Seg_cfg[index].SegNum== Copy_u8SegNum && Seg_cfg[index].SegNum == Seg2)
		{
			switch(Seg_cfg[index].mode)
			{
				case CommonAnode:
					DIO_voidWritePin(SEG2A,1);
					DIO_voidWritePin(SEG2B,0);
					DIO_voidWritePin(SEG2C,0);
					DIO_voidWritePin(SEG2D,1);
					DIO_voidWritePin(SEG2E,1);
					DIO_voidWritePin(SEG2F,1);
					DIO_voidWritePin(SEG2G,1);
				break;
				case CommonCathod:
					DIO_voidWritePin(SEG2A,0);
					DIO_voidWritePin(SEG2B,1);
					DIO_voidWritePin(SEG2C,1);
					DIO_voidWritePin(SEG2D,0);
					DIO_voidWritePin(SEG2E,0);
					DIO_voidWritePin(SEG2F,0);
					DIO_voidWritePin(SEG2G,0);
				break;
			}
		}
	}

}

void voidDisplayTwo(Seg_Num_t Copy_u8SegNum)
{
	for(u8 index=0;index<NumberOfSegs;index++)
	{
		if(Seg_cfg[index].SegNum== Copy_u8SegNum && Seg_cfg[index].SegNum == Seg1)
		{
			switch(Seg_cfg[index].mode)
			{
				case CommonAnode:
					DIO_voidWritePin(SEG1A,0);
					DIO_voidWritePin(SEG1B,0);
					DIO_voidWritePin(SEG1C,1);
					DIO_voidWritePin(SEG1D,0);
					DIO_voidWritePin(SEG1E,0);
					DIO_voidWritePin(SEG1F,1);
					DIO_voidWritePin(SEG1G,0);
				break;
				case CommonCathod:
					DIO_voidWritePin(SEG1A,1);
					DIO_voidWritePin(SEG1B,1);
					DIO_voidWritePin(SEG1C,0);
					DIO_voidWritePin(SEG1D,1);
					DIO_voidWritePin(SEG1E,1);
					DIO_voidWritePin(SEG1F,0);
					DIO_voidWritePin(SEG1G,1);
				break;
			}
		}
		else if(Seg_cfg[index].SegNum== Copy_u8SegNum && Seg_cfg[index].SegNum == Seg2)
		{
			switch(Seg_cfg[index].mode)
			{
				case CommonAnode:
					DIO_voidWritePin(SEG2A,0);
					DIO_voidWritePin(SEG2B,0);
					DIO_voidWritePin(SEG2C,1);
					DIO_voidWritePin(SEG2D,0);
					DIO_voidWritePin(SEG2E,0);
					DIO_voidWritePin(SEG2F,1);
					DIO_voidWritePin(SEG2G,0);
				break;
				case CommonCathod:
					DIO_voidWritePin(SEG2A,1);
					DIO_voidWritePin(SEG2B,1);
					DIO_voidWritePin(SEG2C,0);
					DIO_voidWritePin(SEG2D,1);
					DIO_voidWritePin(SEG2E,1);
					DIO_voidWritePin(SEG2F,0);
					DIO_voidWritePin(SEG2G,1);
				break;
			}
		}
	}
}

void voidDisplayThree(Seg_Num_t Copy_u8SegNum)
{
	for(u8 index=0;index<NumberOfSegs;index++)
	{
		if(Seg_cfg[index].SegNum== Copy_u8SegNum && Seg_cfg[index].SegNum == Seg1)
		{
			switch(Seg_cfg[index].mode)
			{
				case CommonAnode:
					DIO_voidWritePin(SEG1A,0);
					DIO_voidWritePin(SEG1B,0);
					DIO_voidWritePin(SEG1C,0);
					DIO_voidWritePin(SEG1D,0);
					DIO_voidWritePin(SEG1E,1);
					DIO_voidWritePin(SEG1F,1);
					DIO_voidWritePin(SEG1G,0);
				break;
				case CommonCathod:
					DIO_voidWritePin(SEG1A,1);
					DIO_voidWritePin(SEG1B,1);
					DIO_voidWritePin(SEG1C,1);
					DIO_voidWritePin(SEG1D,1);
					DIO_voidWritePin(SEG1E,0);
					DIO_voidWritePin(SEG1F,0);
					DIO_voidWritePin(SEG1G,1);
				break;
			}
		}
		else if(Seg_cfg[index].SegNum== Copy_u8SegNum && Seg_cfg[index].SegNum == Seg2)
		{
			switch(Seg_cfg[index].mode)
			{
				case CommonAnode:
					DIO_voidWritePin(SEG2A,0);
					DIO_voidWritePin(SEG2B,0);
					DIO_voidWritePin(SEG2C,0);
					DIO_voidWritePin(SEG2D,0);
					DIO_voidWritePin(SEG2E,1);
					DIO_voidWritePin(SEG2F,1);
					DIO_voidWritePin(SEG2G,0);
				break;
				case CommonCathod:
					DIO_voidWritePin(SEG2A,1);
					DIO_voidWritePin(SEG2B,1);
					DIO_voidWritePin(SEG2C,1);
					DIO_voidWritePin(SEG2D,1);
					DIO_voidWritePin(SEG2E,0);
					DIO_voidWritePin(SEG2F,0);
					DIO_voidWritePin(SEG2G,1);
				break;
			}
		}
	}
}

void voidDisplayFour(Seg_Num_t Copy_u8SegNum)
{
	for(u8 index=0;index<NumberOfSegs;index++)
	{
		if(Seg_cfg[index].SegNum== Copy_u8SegNum && Seg_cfg[index].SegNum == Seg1)
		{
			switch(Seg_cfg[index].mode)
			{
				case CommonAnode:
					DIO_voidWritePin(SEG1A,1);
					DIO_voidWritePin(SEG1B,0);
					DIO_voidWritePin(SEG1C,0);
					DIO_voidWritePin(SEG1D,1);
					DIO_voidWritePin(SEG1E,1);
					DIO_voidWritePin(SEG1F,0);
					DIO_voidWritePin(SEG1G,0);
				break;
				case CommonCathod:
					DIO_voidWritePin(SEG1A,0);
					DIO_voidWritePin(SEG1B,1);
					DIO_voidWritePin(SEG1C,1);
					DIO_voidWritePin(SEG1D,0);
					DIO_voidWritePin(SEG1E,0);
					DIO_voidWritePin(SEG1F,1);
					DIO_voidWritePin(SEG1G,1);
				break;
			}
		}
		else if(Seg_cfg[index].SegNum== Copy_u8SegNum && Seg_cfg[index].SegNum == Seg2)
		{
			switch(Seg_cfg[index].mode)
			{
				case CommonAnode:
					DIO_voidWritePin(SEG2A,1);
					DIO_voidWritePin(SEG2B,0);
					DIO_voidWritePin(SEG2C,0);
					DIO_voidWritePin(SEG2D,1);
					DIO_voidWritePin(SEG2E,1);
					DIO_voidWritePin(SEG2F,0);
					DIO_voidWritePin(SEG2G,0);
				break;
				case CommonCathod:
					DIO_voidWritePin(SEG2A,0);
					DIO_voidWritePin(SEG2B,1);
					DIO_voidWritePin(SEG2C,1);
					DIO_voidWritePin(SEG2D,0);
					DIO_voidWritePin(SEG2E,0);
					DIO_voidWritePin(SEG2F,1);
					DIO_voidWritePin(SEG2G,1);
				break;
			}
		}
	}
}

void voidDisplayFive(Seg_Num_t Copy_u8SegNum)
{
	for(u8 index=0;index<NumberOfSegs;index++)
	{
		if(Seg_cfg[index].SegNum== Copy_u8SegNum && Seg_cfg[index].SegNum == Seg1)
		{
			switch(Seg_cfg[index].mode)
			{
				case CommonAnode:
					DIO_voidWritePin(SEG1A,0);
					DIO_voidWritePin(SEG1B,1);
					DIO_voidWritePin(SEG1C,0);
					DIO_voidWritePin(SEG1D,0);
					DIO_voidWritePin(SEG1E,1);
					DIO_voidWritePin(SEG1F,0);
					DIO_voidWritePin(SEG1G,0);
				break;
				case CommonCathod:
					DIO_voidWritePin(SEG1A,1);
					DIO_voidWritePin(SEG1B,0);
					DIO_voidWritePin(SEG1C,1);
					DIO_voidWritePin(SEG1D,1);
					DIO_voidWritePin(SEG1E,0);
					DIO_voidWritePin(SEG1F,1);
					DIO_voidWritePin(SEG1G,1);
				break;
			}
		}
		else if(Seg_cfg[index].SegNum== Copy_u8SegNum && Seg_cfg[index].SegNum == Seg2)
		{
			switch(Seg_cfg[index].mode)
			{
				case CommonAnode:
					DIO_voidWritePin(SEG2A,0);
					DIO_voidWritePin(SEG2B,1);
					DIO_voidWritePin(SEG2C,0);
					DIO_voidWritePin(SEG2D,0);
					DIO_voidWritePin(SEG2E,1);
					DIO_voidWritePin(SEG2F,0);
					DIO_voidWritePin(SEG2G,0);
				break;
				case CommonCathod:
					DIO_voidWritePin(SEG2A,1);
					DIO_voidWritePin(SEG2B,0);
					DIO_voidWritePin(SEG2C,1);
					DIO_voidWritePin(SEG2D,1);
					DIO_voidWritePin(SEG2E,0);
					DIO_voidWritePin(SEG2F,1);
					DIO_voidWritePin(SEG2G,1);
				break;
			}
		}
	}
}

void voidDisplaySix(Seg_Num_t Copy_u8SegNum)
{
	for(u8 index=0;index<NumberOfSegs;index++)
	{
		if(Seg_cfg[index].SegNum== Copy_u8SegNum && Seg_cfg[index].SegNum == Seg1)
		{
			switch(Seg_cfg[index].mode)
			{
				case CommonAnode:
					DIO_voidWritePin(SEG1A,0);
					DIO_voidWritePin(SEG1B,1);
					DIO_voidWritePin(SEG1C,0);
					DIO_voidWritePin(SEG1D,0);
					DIO_voidWritePin(SEG1E,0);
					DIO_voidWritePin(SEG1F,0);
					DIO_voidWritePin(SEG1G,0);
				break;
				case CommonCathod:
					DIO_voidWritePin(SEG1A,1);
					DIO_voidWritePin(SEG1B,0);
					DIO_voidWritePin(SEG1C,1);
					DIO_voidWritePin(SEG1D,1);
					DIO_voidWritePin(SEG1E,1);
					DIO_voidWritePin(SEG1F,1);
					DIO_voidWritePin(SEG1G,1);
				break;
			}
		}
		else if(Seg_cfg[index].SegNum== Copy_u8SegNum && Seg_cfg[index].SegNum == Seg2)
		{
			switch(Seg_cfg[index].mode)
			{
				case CommonAnode:
					DIO_voidWritePin(SEG2A,0);
					DIO_voidWritePin(SEG2B,1);
					DIO_voidWritePin(SEG2C,0);
					DIO_voidWritePin(SEG2D,0);
					DIO_voidWritePin(SEG2E,0);
					DIO_voidWritePin(SEG2F,0);
					DIO_voidWritePin(SEG2G,0);
				break;
				case CommonCathod:
					DIO_voidWritePin(SEG2A,1);
					DIO_voidWritePin(SEG2B,0);
					DIO_voidWritePin(SEG2C,1);
					DIO_voidWritePin(SEG2D,1);
					DIO_voidWritePin(SEG2E,1);
					DIO_voidWritePin(SEG2F,1);
					DIO_voidWritePin(SEG2G,1);
				break;
			}
		}
	}
}

void voidDisplaySeven(Seg_Num_t Copy_u8SegNum)
{
	for(u8 index=0;index<NumberOfSegs;index++)
	{
		if(Seg_cfg[index].SegNum== Copy_u8SegNum && Seg_cfg[index].SegNum == Seg1)
		{
			switch(Seg_cfg[index].mode)
			{
				case CommonAnode:
					DIO_voidWritePin(SEG1A,0);
					DIO_voidWritePin(SEG1B,0);
					DIO_voidWritePin(SEG1C,0);
					DIO_voidWritePin(SEG1D,1);
					DIO_voidWritePin(SEG1E,1);
					DIO_voidWritePin(SEG1F,1);
					DIO_voidWritePin(SEG1G,1);
				break;
				case CommonCathod:
					DIO_voidWritePin(SEG1A,1);
					DIO_voidWritePin(SEG1B,1);
					DIO_voidWritePin(SEG1C,1);
					DIO_voidWritePin(SEG1D,0);
					DIO_voidWritePin(SEG1E,0);
					DIO_voidWritePin(SEG1F,0);
					DIO_voidWritePin(SEG1G,0);
				break;
			}
		}
		else if(Seg_cfg[index].SegNum== Copy_u8SegNum && Seg_cfg[index].SegNum == Seg2)
		{
			switch(Seg_cfg[index].mode)
			{
				case CommonAnode:
					DIO_voidWritePin(SEG2A,0);
					DIO_voidWritePin(SEG2B,0);
					DIO_voidWritePin(SEG2C,0);
					DIO_voidWritePin(SEG2D,1);
					DIO_voidWritePin(SEG2E,1);
					DIO_voidWritePin(SEG2F,1);
					DIO_voidWritePin(SEG2G,1);
				break;
				case CommonCathod:
					DIO_voidWritePin(SEG2A,1);
					DIO_voidWritePin(SEG2B,1);
					DIO_voidWritePin(SEG2C,1);
					DIO_voidWritePin(SEG2D,0);
					DIO_voidWritePin(SEG2E,0);
					DIO_voidWritePin(SEG2F,0);
					DIO_voidWritePin(SEG2G,0);
				break;
			}
		}
	}
}

void voidDisplayEight(Seg_Num_t Copy_u8SegNum)
{
	for(u8 index=0;index<NumberOfSegs;index++)
	{
		if(Seg_cfg[index].SegNum== Copy_u8SegNum && Seg_cfg[index].SegNum == Seg1)
		{
			switch(Seg_cfg[index].mode)
			{
				case CommonAnode:
					DIO_voidWritePin(SEG1A,0);
					DIO_voidWritePin(SEG1B,0);
					DIO_voidWritePin(SEG1C,0);
					DIO_voidWritePin(SEG1D,0);
					DIO_voidWritePin(SEG1E,0);
					DIO_voidWritePin(SEG1F,0);
					DIO_voidWritePin(SEG1G,0);
				break;
				case CommonCathod:
					DIO_voidWritePin(SEG1A,1);
					DIO_voidWritePin(SEG1B,1);
					DIO_voidWritePin(SEG1C,1);
					DIO_voidWritePin(SEG1D,1);
					DIO_voidWritePin(SEG1E,1);
					DIO_voidWritePin(SEG1F,1);
					DIO_voidWritePin(SEG1G,1);
				break;
			}
		}
		else if(Seg_cfg[index].SegNum== Copy_u8SegNum && Seg_cfg[index].SegNum == Seg2)
		{
			switch(Seg_cfg[index].mode)
			{
				case CommonAnode:
					DIO_voidWritePin(SEG2A,0);
					DIO_voidWritePin(SEG2B,0);
					DIO_voidWritePin(SEG2C,0);
					DIO_voidWritePin(SEG2D,0);
					DIO_voidWritePin(SEG2E,0);
					DIO_voidWritePin(SEG2F,0);
					DIO_voidWritePin(SEG2G,0);
				break;
				case CommonCathod:
					DIO_voidWritePin(SEG2A,1);
					DIO_voidWritePin(SEG2B,1);
					DIO_voidWritePin(SEG2C,1);
					DIO_voidWritePin(SEG2D,1);
					DIO_voidWritePin(SEG2E,1);
					DIO_voidWritePin(SEG2F,1);
					DIO_voidWritePin(SEG2G,1);
				break;
			}
		}
	}
}

void voidDisplayNine(Seg_Num_t Copy_u8SegNum)
{
	for(u8 index=0;index<NumberOfSegs;index++)
	{
		if(Seg_cfg[index].SegNum== Copy_u8SegNum && Seg_cfg[index].SegNum == Seg1)
		{
			switch(Seg_cfg[index].mode)
			{
				case CommonAnode:
					DIO_voidWritePin(SEG1A,0);
					DIO_voidWritePin(SEG1B,0);
					DIO_voidWritePin(SEG1C,0);
					DIO_voidWritePin(SEG1D,0);
					DIO_voidWritePin(SEG1E,1);
					DIO_voidWritePin(SEG1F,0);
					DIO_voidWritePin(SEG1G,0);
				break;
				case CommonCathod:
					DIO_voidWritePin(SEG1A,1);
					DIO_voidWritePin(SEG1B,1);
					DIO_voidWritePin(SEG1C,1);
					DIO_voidWritePin(SEG1D,1);
					DIO_voidWritePin(SEG1E,0);
					DIO_voidWritePin(SEG1F,1);
					DIO_voidWritePin(SEG1G,1);
				break;
			}
		}
		else if(Seg_cfg[index].SegNum== Copy_u8SegNum && Seg_cfg[index].SegNum == Seg2)
		{
			switch(Seg_cfg[index].mode)
			{
				case CommonAnode:
					DIO_voidWritePin(SEG2A,0);
					DIO_voidWritePin(SEG2B,0);
					DIO_voidWritePin(SEG2C,0);
					DIO_voidWritePin(SEG2D,0);
					DIO_voidWritePin(SEG2E,1);
					DIO_voidWritePin(SEG2F,0);
					DIO_voidWritePin(SEG2G,0);
				break;
				case CommonCathod:
					DIO_voidWritePin(SEG2A,1);
					DIO_voidWritePin(SEG2B,1);
					DIO_voidWritePin(SEG2C,1);
					DIO_voidWritePin(SEG2D,1);
					DIO_voidWritePin(SEG2E,0);
					DIO_voidWritePin(SEG2F,1);
					DIO_voidWritePin(SEG2G,1);
				break;
			}
		}
	}
}



extern void SeveSeg_voidInitialize(void)
{
	for(u8 index=0;index<NumberOfSegs;index++)
	{
		voidDisplayZero(Seg_cfg[index].SegNum);
	}
}

void SevenSeg_voidDisplayNum(Seg_Num_t Copy_u8SegNum,NUMBER_T Copy_u8Num)
{
	switch(Copy_u8Num)
	{
		case ZERO:
			voidDisplayZero(Copy_u8SegNum);
		break;
		case ONE:
			voidDisplayOne(Copy_u8SegNum);
		break;
		case TWO:
			voidDisplayTwo(Copy_u8SegNum);
		break;
		case THREE:
			voidDisplayThree(Copy_u8SegNum);
		break;
		case FOUR:
			voidDisplayFour(Copy_u8SegNum);
		break;
		case FIVE:
			voidDisplayFive(Copy_u8SegNum);
		break;
		case SIX:
			voidDisplaySix(Copy_u8SegNum);
		break;
		case SEVEN:
			voidDisplaySeven(Copy_u8SegNum);
		break;
		case EIGHT:
			voidDisplayEight(Copy_u8SegNum);
		break;
		case NINE:
			voidDisplayNine(Copy_u8SegNum);
		break;
	}
}



