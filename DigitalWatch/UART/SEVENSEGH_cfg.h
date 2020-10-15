

#ifndef _SEVENSEGH_CFG_H
#define _SEVENSEGH_CFG_H



typedef enum
{
	ZERO=0,
	ONE,
	TWO,
	THREE,
	FOUR,
	FIVE,
	SIX,
	SEVEN,
	EIGHT,
	NINE
}NUMBER_T;



typedef enum
{
	Seg1=0,
	Seg2
}Seg_Num_t;

typedef enum
{
	CommonAnode=0,
	CommonCathod
}mode_t;

typedef struct
{
	Seg_Num_t SegNum;
	mode_t 	  mode;
}Seg_cfg_t;


extern const Seg_cfg_t Seg_cfg[];

extern u8 NumberOfSegs;
#endif
