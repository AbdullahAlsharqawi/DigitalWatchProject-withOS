/****************************************************/
/* Author	: Abdullah Alsharqawi					*/
/* Date		: 26/1/2018								*/
/* Version	: V01									*/
/****************************************************/

#include "std_types.h"
#include "BIT_MATH.h"
#include "DIO_int.h"


#include "7SEG.h"


/* Comment: This array carries pins connected		*/
/*			to the 7-Segment						*/
const u8 SEG_u8ConnectedPins[8] = {SEG_u8_A_SEG, SEG_u8_B_SEG, SEG_u8_C_SEG, SEG_u8_D_SEG,
									SEG_u8_E_SEG, SEG_u8_F_SEG, SEG_u8_G_SEG, SEG_u8_H_SEG};

									
/* Comment: This array carries the 7-Segment		*/
/*			codes that show numbers from 0 to 9		*/

const u8 SEG_u8DispNumCodes[10] = {SEG_u8_CODE_NUM_0, SEG_u8_CODE_NUM_1, SEG_u8_CODE_NUM_2, SEG_u8_CODE_NUM_3,
									SEG_u8_CODE_NUM_4, SEG_u8_CODE_NUM_5, SEG_u8_CODE_NUM_6, SEG_u8_CODE_NUM_7,
									SEG_u8_CODE_NUM_8, SEG_u8_CODE_NUM_9};

									
/****************************************************/
/* Description: This function shall display  		*/
/* 				a number to the 7- Segment			*/
/****************************************************/
void SEG_voidDispNum(u8 Copy_u8DispNum)
{
	DIO_voidSetPinValue(DIO_u8_PIN_12,DIO_u8_HIGH);
	u8 Local_u8SegmentIdx;
	
	u8 Local_u8DispNumCode = SEG_u8DispNumCodes[Copy_u8DispNum];
	
	switch(SEG_u8_MODE)
	{
		case SEG_u8_COMMON_ANODE:
			for(Local_u8SegmentIdx = SEG_u8_FIRST_SEGMENT; Local_u8SegmentIdx <= SEG_u8_LAST_SEGMENT; Local_u8SegmentIdx++)
			{
				if( GETBIT( Local_u8DispNumCode, Local_u8SegmentIdx) )
				{
					DIO_voidSetPinValue(SEG_u8ConnectedPins[Local_u8SegmentIdx], DIO_u8_HIGH);
				}
				else
				{
					DIO_voidSetPinValue(SEG_u8ConnectedPins[Local_u8SegmentIdx], DIO_u8_LOW);
				}
			}
			break;
		case SEG_u8_COMMON_CATHODE:
			for(Local_u8SegmentIdx = SEG_u8_FIRST_SEGMENT; Local_u8SegmentIdx <= SEG_u8_LAST_SEGMENT; Local_u8SegmentIdx++)
			{
				if( GETBIT( Local_u8DispNumCode, Local_u8SegmentIdx) )
				{
					DIO_voidSetPinValue(SEG_u8ConnectedPins[Local_u8SegmentIdx], DIO_u8_LOW);
				}
				else
				{
					DIO_voidSetPinValue(SEG_u8ConnectedPins[Local_u8SegmentIdx], DIO_u8_HIGH);
				}
			}
		break;
		default:
		break;
	}
}

extern void SEG_Task(void)
{

}
extern void SEG_Init(void)
{

}
