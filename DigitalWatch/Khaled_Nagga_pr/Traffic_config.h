/********************************************/
/* Author: Abdullah Alsharqawi              */
/* Date:   29/03/2018                       */
/* Version: V01                             */
/********************************************/
#ifndef _Traffic_CONFIG_H
#define _Traffic_CONFIG_H


#define YELLOW_TIME    (u8)5
#define GREEN_TIME     (u8)30
#define RED_TIME       (u8)30

typedef enum{
Red=0,
Yellow,
Green
}State_t;

             
#endif
