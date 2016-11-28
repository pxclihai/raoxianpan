/*******************************************************************************
* File Name: PUL.c  
* Version 2.10
*
* Description:
*  This file contains API to enable firmware control of a Pins component.
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "cytypes.h"
#include "PUL.h"

/* APIs are not generated for P15[7:6] on PSoC 5 */
#if !(CY_PSOC5A &&\
	 PUL__PORT == 15 && ((PUL__MASK & 0xC0) != 0))


/*******************************************************************************
* Function Name: PUL_Write
********************************************************************************
*
* Summary:
*  Assign a new value to the digital port's data output register.  
*
* Parameters:  
*  prtValue:  The value to be assigned to the Digital Port. 
*
* Return: 
*  None
*  
*******************************************************************************/
void PUL_Write(uint8 value) 
{
    uint8 staticBits = (PUL_DR & (uint8)(~PUL_MASK));
    PUL_DR = staticBits | ((uint8)(value << PUL_SHIFT) & PUL_MASK);
}


/*******************************************************************************
* Function Name: PUL_SetDriveMode
********************************************************************************
*
* Summary:
*  Change the drive mode on the pins of the port.
* 
* Parameters:  
*  mode:  Change the pins to one of the following drive modes.
*
*  PUL_DM_STRONG     Strong Drive 
*  PUL_DM_OD_HI      Open Drain, Drives High 
*  PUL_DM_OD_LO      Open Drain, Drives Low 
*  PUL_DM_RES_UP     Resistive Pull Up 
*  PUL_DM_RES_DWN    Resistive Pull Down 
*  PUL_DM_RES_UPDWN  Resistive Pull Up/Down 
*  PUL_DM_DIG_HIZ    High Impedance Digital 
*  PUL_DM_ALG_HIZ    High Impedance Analog 
*
* Return: 
*  None
*
*******************************************************************************/
void PUL_SetDriveMode(uint8 mode) 
{
	CyPins_SetPinDriveMode(PUL_0, mode);
}


/*******************************************************************************
* Function Name: PUL_Read
********************************************************************************
*
* Summary:
*  Read the current value on the pins of the Digital Port in right justified 
*  form.
*
* Parameters:  
*  None
*
* Return: 
*  Returns the current value of the Digital Port as a right justified number
*  
* Note:
*  Macro PUL_ReadPS calls this function. 
*  
*******************************************************************************/
uint8 PUL_Read(void) 
{
    return (PUL_PS & PUL_MASK) >> PUL_SHIFT;
}


/*******************************************************************************
* Function Name: PUL_ReadDataReg
********************************************************************************
*
* Summary:
*  Read the current value assigned to a Digital Port's data output register
*
* Parameters:  
*  None 
*
* Return: 
*  Returns the current value assigned to the Digital Port's data output register
*  
*******************************************************************************/
uint8 PUL_ReadDataReg(void) 
{
    return (PUL_DR & PUL_MASK) >> PUL_SHIFT;
}


/* If Interrupts Are Enabled for this Pins component */ 
#if defined(PUL_INTSTAT) 

    /*******************************************************************************
    * Function Name: PUL_ClearInterrupt
    ********************************************************************************
    * Summary:
    *  Clears any active interrupts attached to port and returns the value of the 
    *  interrupt status register.
    *
    * Parameters:  
    *  None 
    *
    * Return: 
    *  Returns the value of the interrupt status register
    *  
    *******************************************************************************/
    uint8 PUL_ClearInterrupt(void) 
    {
        return (PUL_INTSTAT & PUL_MASK) >> PUL_SHIFT;
    }

#endif /* If Interrupts Are Enabled for this Pins component */ 

#endif /* CY_PSOC5A... */

    
/* [] END OF FILE */
