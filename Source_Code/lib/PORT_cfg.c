/******************************************************************************
 *
 * Module: PORT Driver for Initialization of Ports
 * 			(Supports ATmega8, ATmega16, ATmega32, ATmega64, ATmega128)
 *
 * File Name: PORT_cfg.c
 *
 * Description: Configuration file for PORTs Driver
 *
 * Author: Shaher Shah Abdalla Kamal
 *
 * Date: 2-12-2023
 *
 *******************************************************************************/

/* Including the .h file that contains Driver's APIs' prototypes and typedefs' declaration. */
#include "../include/PORT.h"
/* ِIncluding the .h file that contains all configurations for compilation mode, ATmega model, and pins configurations */
#include "../include/PORT_cfg.h"


#if (Compilation_Mode == Post_Compilation)

#if (ATmega_Model == ATmega8)

/* Description: Setting the pins' configuration.
 * Options:		PORT_enumPinInputEnablePullUp
 * 		or		PORT_enumPinInputDisablePullup
 * 		or		PORT_enumPinOutputHigh
 * 		or		PORT_enumPinOutputLow */

PORT_enumPinConfig_t PORT_enumPinConfigArray[ATmega8_NumofPins] =
{
		/* Port B pins Configuration */

		/* Pin 0 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 1 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 2 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 3 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 4 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 5 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 6 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 7 Configuration */
		PORT_enumPinOutputLow,

		/* Port C pins Configuration */

		/* Pin 0 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 1 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 2 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 3 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 4 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 5 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 6 Configuration */
		PORT_enumPinOutputLow,

		/* Port D pins Configuration */

		/* Pin 0 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 1 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 2 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 3 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 4 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 5 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 6 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 7 Configuration */
		PORT_enumPinOutputLow
};

#endif	/* #if (ATmega_Model == ATmega8) */

#if (ATmega_Model == ATmega16_32)

/* Description: Setting the pins' configuration.
 * Options:		PORT_enumPinInputEnablePullUp
 * 		or		PORT_enumPinInputDisablePullup
 * 		or		PORT_enumPinOutputHigh
 * 		or		PORT_enumPinOutputLow */

PORT_enumPinConfig_t PORT_enumPinConfigArray[ATmega16_32_NumofPins] =
{
		/* Port A pins Configuration */

		/* Pin 0 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 1 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 2 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 3 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 4 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 5 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 6 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 7 Configuration */
		PORT_enumPinOutputLow,

		/* Port B pins Configuration */

		/* Pin 0 Configuration */
		PORT_enumPinInputEnablePullUp,
		/* Pin 1 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 2 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 3 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 4 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 5 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 6 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 7 Configuration */
		PORT_enumPinOutputLow,

		/* Port C pins Configuration */

		/* Pin 0 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 1 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 2 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 3 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 4 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 5 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 6 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 7 Configuration */
		PORT_enumPinOutputLow,

		/* Port D pins Configuration */

		/* Pin 0 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 1 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 2 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 3 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 4 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 5 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 6 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 7 Configuration */
		PORT_enumPinOutputLow
};

#endif	/* #if (ATmega_Model == ATmega16_32) */

#if (ATmega_Model == ATmega64_128)

/* Description: Setting the pins' configuration.
 * Options:		PORT_enumPinInputEnablePullUp
 * 		or		PORT_enumPinInputDisablePullup
 * 		or		PORT_enumPinOutputHigh
 * 		or		PORT_enumPinOutputLow */

PORT_enumPinConfig_t PORT_enumPinConfigArray[ATmega64_128_NumofPins] =
{
		/* Port A pins Configuration */

		/* Pin 0 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 1 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 2 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 3 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 4 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 5 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 6 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 7 Configuration */
		PORT_enumPinOutputLow,

		/* Port B pins Configuration */

		/* Pin 0 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 1 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 2 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 3 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 4 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 5 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 6 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 7 Configuration */
		PORT_enumPinOutputLow,

		/* Port C pins Configuration */

		/* Pin 0 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 1 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 2 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 3 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 4 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 5 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 6 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 7 Configuration */
		PORT_enumPinOutputLow,

		/* Port D pins Configuration */

		/* Pin 0 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 1 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 2 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 3 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 4 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 5 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 6 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 7 Configuration */
		PORT_enumPinOutputLow,

		/* Port E pins Configuration */

		/* Pin 0 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 1 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 2 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 3 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 4 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 5 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 6 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 7 Configuration */
		PORT_enumPinOutputLow,

		/* Port F pins Configuration */

		/* Pin 0 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 1 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 2 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 3 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 4 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 5 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 6 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 7 Configuration */
		PORT_enumPinOutputLow,

		/* Port G pins Configuration */

		/* Pin 0 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 1 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 2 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 3 Configuration */
		PORT_enumPinOutputLow,
		/* Pin 4 Configuration */
		PORT_enumPinOutputLow
};

#endif	/* #if (ATmega_Model == ATmega64_128) */

#endif	/* #if (Compilation_Mode == Post_Compilation) */
