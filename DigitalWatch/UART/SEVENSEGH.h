


#ifndef	_SEVEN_SEG_H
#define	_SEVEN_SEG_H

#include "SEVENSEGH_cfg.h"

extern void SevenSeg_voidSetEnablePin(u8 Copy_u8SegNum,boolean state);

extern void SeveSeg_voidInitialize(void);

extern void SevenSeg_voidDisplayNum(u8 Copy_u8SegNum,u8 Copy_u8Num);

#endif
