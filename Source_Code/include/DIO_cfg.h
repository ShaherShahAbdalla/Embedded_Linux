/******************************************************************************
 *
 * Module: Digital Input Output (DIO) for ATmega32
 *
 * File Name: DIO_cfg.h
 *
 * Description: Configuration file for DIO Driver
 *
 * Author: Shaher Shah Abdalla Kamal
 *
 * Date: 2-12-2023
 *
 *******************************************************************************/

#ifndef DIO_CFG_H_
#define DIO_CFG_H_

/* Including the .h file that contains Driver's APIs' prototypes and typedefs' declaration. */
//#include "./DIO.h"


/****************************************************************************************/
/*							Configuration Macros Declaration							*/
/****************************************************************************************/

/* Description: Choose the ATmega model you work on.
 * Options:		ATmega8
 * 		or		ATmega16_32
 * 		or		ATmega64_128 */
#define ATmega_Model			ATmega16_32


#endif /* 01_MCAL_00_DIO_DRIVER_DIO_CFG_H_ */
