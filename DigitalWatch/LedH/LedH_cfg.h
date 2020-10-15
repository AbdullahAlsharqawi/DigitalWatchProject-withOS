/************************************/
/* Author	: Abdullah Alsharqawi		*/
/* Date		: 8/4/2018				*/
/* Version	: V01					*/
/************************************/

#ifndef _LEDH_CFG_H
#define _LEDH_CFG_H

#include "Dio.h"

typedef enum
{
	Led1=0,	/* Names used for calling LedH module */
	Led2,
	NumberOfLeds
}LedH_name_t;

typedef enum
{
	LedNormal=0,
	LedReverse
}LedH_mode_t;

typedef struct
{
	LedH_mode_t mode;
	Dio_pinname_t pinname;
}LedH_cfg_t;

extern const LedH_cfg_t LedH_cfg[];

#endif
