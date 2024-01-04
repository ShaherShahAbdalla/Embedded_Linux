 /******************************************************************************
 *
 * Module: Digital Input Output (DIO) for ATmega32
 *
 * File Name: DIO.h
 *
 * Description: Driver's APIs' prototypes and typedefs' declaration.
 *
 * Author: Shaher Shah Abdalla Kamal
 *
 * Date: created 27-11-2023, edited 4-12-2023
 *
 *******************************************************************************/

#ifndef DIO_H_
#define DIO_H_

/* System clock declaration to be used in the delay function */
#define F_CPU	1000000UL

/* ِIncluding the .h file that contains typedefs for the primitive data types */
#include "std_types.h"

/****************************************************************************************/
/*									Macros Declaration									*/
/****************************************************************************************/

/* Macros for ATmega model */
#define ATmega8					0
#define ATmega16_32				1
#define ATmega64_128			2

/****************************************************************************************/
/*								User-defined Declaration								*/
/****************************************************************************************/

/**
 *@brief : The Error List Type
 */
typedef enum
{
	/**
	 *@brief : Everything OK, Function had Performed Correctly.
	 */
	DIO_enumOk = 0,
	/**
	 *@brief : NULL Pointer is passed.
	 */
	DIO_enumNullPointer,
	/**
	 *@brief : Select Port Not exist!.
	 */
	DIO_enumWrongPort,
	/**
	 *@brief : Select Pin Not exist!.
	 */
	DIO_enumWrongPin,
	/**
	 *@brief : Select Configuration type Not Found.
	 */
	DIO_enumWrongConfig,
	/**
	 *@brief : Select Logic state Not Found.
	 */
	DIO_enumWrongLogicState,
	/**
	 *@brief : Trying to write in a pin that already configured as an input pin.
	 */
	DIO_enumTryingToWriteInInputPin,
	/**
	 *@brief : Trying to write in a port that already configured as an input port.
	 */
	DIO_enumTryingToWriteInInputPort,
	/**
	 *@brief : Trying to read from a pin that already configured as an output pin.
	 */
	DIO_enumTryingToReadFromOutputPin,
	/**
	 *@brief : Trying to read from a port that already configured as an output port.
	 */
	DIO_enumTryingToReadFromOutputPort

}DIO_enumError_t;

/**
 *@brief :  The Configuration Type of Ports to be Input or Output !
 */
typedef enum
{
	/**
	 *@brief : Select Port Configuration to be Input.
	 */
	DIO_enumPortConfigInput = 0,
	/**
	 *@brief : Disable the internal pull up resistance for the whole port.
	 */
	DIO_enumPortConfigInputDisablingInternalPU = 0,
	/**
	 *@brief : Enable the internal pull up resistance for the whole port.
	 */
	DIO_enumPortConfigInputEnablingInternalPU = 0xFF,
	/**
	 *@brief : Select Port Configuration to be Output.
	 */
	DIO_enumPortConfigOutput = 0xFF
}DIO_enumPortConfig_t;

/**
 *@brief :  Logic State Type : HIGH (5V) or LOW (0V)
 */
typedef enum
{
	DIO_enumPinLogicLow = 0,
	DIO_enumPinLogicHigh
}DIO_enumPinLogicState_t;

/**
 *@brief :  Logic State Type : HIGH (5V) or LOW (0V), but this is done for the whole pins of the port
 */
typedef enum
{
	DIO_enumPortLogicLow = 0,
	DIO_enumPortLogicHigh = 0xFF
}DIO_enumPortLogicState_t;

/**
 *@brief : The ports Type of the AVR Atmega32
 */
typedef enum
{
	DIO_enumPortA = 0,
	DIO_enumPortB,
	DIO_enumPortC,
	DIO_enumPortD,
	DIO_enumPortE,
	DIO_enumPortF,
	DIO_enumPortG
}DIO_enumPorts_t;

/**
 *@brief :  Pins Type
 */
typedef enum
{
	DIO_enumPin0 = 0,
	DIO_enumPin1,
	DIO_enumPin2,
	DIO_enumPin3,
	DIO_enumPin4,
	DIO_enumPin5,
	DIO_enumPin6,
	DIO_enumPin7
}DIO_enumPins_t;

/****************************************************************************************/
/*									Functions' Prototypes								*/
/****************************************************************************************/

/**
 *@brief  : Function to Set the Pins to be Logic HIGH  or Logic LOW.
 *@param  : Port Number,Pin Number,Logic State(HIGH/LOW).
 *@return : Error State.
 */
DIO_enumError_t DIO_enumSetPin(DIO_enumPorts_t Copy_enumPortNum, DIO_enumPins_t Copy_enumPinNum, DIO_enumPinLogicState_t Copy_enumPinLogicState);

/**
 *@brief : Function to Set the whole Port(8 pins) at one time to be Logic HIGH  or Logic LOW.
 *@param : Port Number,Logic State(HIGH/LOW).
 *@return: Error State.
 */
DIO_enumError_t DIO_enumSetPort(DIO_enumPorts_t Copy_enumPortNum, uint8 Copy_enumPortLogicState);

/**
 *@brief  : Function to Read the Logic State of the Pin (Is it HIGH or LOW).
 *@param  : Port Number,Pin Number, Pointer points to unsigned char passed by address (to return the value of pin state).
 *@return : Error State.
 */
DIO_enumError_t DIO_enumReadPinState(DIO_enumPorts_t Copy_enumPortNum, DIO_enumPins_t Copy_enumPinNum, DIO_enumPinLogicState_t* Add_Pu8PinValue);

/**
 *@brief  : Function to Read the Logic State of the Port (Is it HIGH or LOW).
 *@param  : Port Number, Pointer points to unsigned char passed by address (to return the value of port state).
 *@return : Error State.
 */
DIO_enumError_t DIO_enumReadPortState(DIO_enumPorts_t Copy_enumPortNum, DIO_enumPortLogicState_t* Add_Pu8PortValue);

/**
 *@brief  : Function to toggle the logic state of the pin.
 *@param  : Port Number & Pin Number.
 *@return : Error State.
 */
DIO_enumError_t DIO_enumTogglePinState(DIO_enumPorts_t Copy_enumPortNum, DIO_enumPins_t Copy_enumPinNum);

/*
 * Description :
 * This Function Provide a delay in millieseconds
 * You shall define the F_CPU before using it or it will be a default value of 1Mhz
 */
void DIO_DelayMs(uint32 Copy_u32TimeMs);

#endif /* DIO_H_ */
