/**********************************************/
/*    Name:Abdullah Alsharqawi                */
/*    Date: 25/MAR/2018                       */
/*    OS Version: 1                           */
/**********************************************/

#ifdef _OS_CONFIG_H
#define _OS_CONFIG_H



#define OS_u8TASKS_NUMBER            2
#define OS_u8SET_REGISTER            100
#define OS_u16MAX_OVERFLOW           30

typedef struct
{
	void (*pf) (void);
	u16 periodicity;
}OS_cfg_t;


const OS_cfg_t OS_cfg[];

#endif