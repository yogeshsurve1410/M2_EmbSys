
#include "timer.h"


/*********************************************************************
* Function    : timer0_init(void);
*
* DESCRIPTION : Initializes Timer0 with 1024 prescaler.
*
* PARAMETERS  : Nothing.
*
* Return Value: Nothing.
***********************************************************************/
void timer0_init(void)
{
	    	/* Disable Timer 0 */
	    	int TCCR0 = DISABLE_MODULE_VALUE;
	    	/* Setting pre scaler */
	    	TCCR0 = (PRESCLR1_VALUE);
	    	/* Initializing the timer with zero */
	    	int TCNT0 = ZER0_INITIALIZER;
				/* Timer overflow interrupt enable*/
				int TIMSK |=(1<< int TOIE0);

	return;
}
