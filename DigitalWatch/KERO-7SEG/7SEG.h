/****************************************************/
/* Author	: Abdullah Alsharqawi						*/
/* Date		: 26/1/2018								*/
/* Version	: V01									*/
/****************************************************/
#ifndef _7SEG_INT_H
#define _7SEG_INT_H

/* Comment: Index for 7-Segment modes				*/
#define SEG_u8_COMMON_ANODE				13
#define SEG_u8_COMMON_CATHODE			14

/* Comment: 7-Segment codes decimal number			*/
#define SEG_u8_CODE_NUM_0				0b11000000	//0b11111100
#define SEG_u8_CODE_NUM_1				0b11111001	//0b01100000
#define SEG_u8_CODE_NUM_2				0b10100100	//0b11011010
#define SEG_u8_CODE_NUM_3				0b10110000	//0b11110010
#define SEG_u8_CODE_NUM_4				0b10011001	//0b01100110
#define SEG_u8_CODE_NUM_5				0b10010010	//0b10110110
#define SEG_u8_CODE_NUM_6				0b10000010	//0b10111110
#define SEG_u8_CODE_NUM_7				0b11111000	//0b11100000
#define SEG_u8_CODE_NUM_8				0b10000000	//0b11111110
#define SEG_u8_CODE_NUM_9				0b10011000	//0b11100110

/* Comment: 7-Segment decimal number values			*/
#define SEG_u8_VALUE_0			0
#define SEG_u8_VALUE_1			1
#define SEG_u8_VALUE_2			2
#define SEG_u8_VALUE_3			3
#define SEG_u8_VALUE_4			4
#define SEG_u8_VALUE_5			5
#define SEG_u8_VALUE_6			6
#define SEG_u8_VALUE_7			7
#define SEG_u8_VALUE_8			8
#define SEG_u8_VALUE_9			9

/* Comment: Segment name and position mapping		*/
#define SEG_u8_A_SEG			SEG_u8_TOP_SEG_DIO_PIN
#define SEG_u8_B_SEG			SEG_u8_UR_SEG_DIO_PIN
#define SEG_u8_C_SEG			SEG_u8_LR_SEG_DIO_PIN
#define SEG_u8_D_SEG			SEG_u8_BOT_SEG_DIO_PIN
#define SEG_u8_E_SEG			SEG_u8_LL_SEG_DIO_PIN
#define SEG_u8_F_SEG			SEG_u8_UL_SEG_DIO_PIN
#define SEG_u8_G_SEG			SEG_u8_MID_SEG_DIO_PIN
#define SEG_u8_H_SEG			SEG_u8_DP_SEG_DIO_PIN

/* Comment: Indices of first and last segments		*/
#define SEG_u8_FIRST_SEGMENT		0
#define SEG_u8_LAST_SEGMENT			7

/* Comment: Either 7SEG_u8_COMMON_ANODE or			*/
/* 			7SEG_u8_COMMON_CATHODE					*/
#define SEG_u8_MODE			SEG_u8_COMMON_ANODE



/****************************************************/
/* Description: This function shall display  		*/
/* 				a number to the 7- Segment			*/
/****************************************************/
void SEG_voidDispNum(u8 Copy_u8DispNum);
extern void SEG_Task(void);
extern void SEG_Init(void);


#endif
