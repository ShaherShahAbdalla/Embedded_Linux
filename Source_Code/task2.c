 /******************************************************************************
 *
 * File Name: main.c
 *
 * Description: Testing the PORT & DIO drivers in (Counter through LEDs and push button (Task #2)).
 *
 * Author: Shaher Shah Abdalla Kamal
 *
 * Date: 27-11-2023
 *
 *******************************************************************************/

#define F_CPU 1000000UL

#include "DIO.h"
#include "PORT.h"

int main (void)
{
	/* Initialization */

	PORT_vidInit();

	uint8 counter = 0;
	uint8 flag = 0;
	DIO_enumPinLogicState_t value;
	DIO_enumError_t error_state = -1;
    while (1)
    {
    	/* Read the error state when reading the value of the pin which the button is connected to */
        error_state = DIO_enumReadPinState(DIO_enumPortB, DIO_enumPin0, &value);
        /* If the function works properly and exits after assigning the value of the pin in "value" */
        if (error_state == DIO_enumOk)
        {
        	/* Check if the button is pressed or not, and since it is connected with pull up resistance,
        	 * so when it is pressed the value of the button will be LOW, so we will check on the LOW state */
            if (value == DIO_enumPinLogicLow)
            {
                /* Button is pressed */
                DIO_DelayMs(30);
                /* Re-check to ensure that it is  real pressing not a noise or something */
                if (DIO_enumReadPinState(DIO_enumPortB, DIO_enumPin0, &value) == DIO_enumOk && value == DIO_enumPinLogicLow)
                {
                    /* Properly de-bounced button press */
                    if (flag == 0)
                    {
                        /* Code to update LEDs */
                        if (counter == 15)
                        {
                            counter = 0;
                        }
                        else
                        {
                            counter++;
                        }
                        /* Show the counter value through the LEDs */
                        DIO_enumSetPort(DIO_enumPortA, counter);
                        flag = 1;
                    }
                }
            }
            else
            {
                /* Button is released */
                flag = 0;
            }
        }
        else
        {
        	/* Do Nothing */
        }
    }

    return 0;
}
