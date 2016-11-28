/*******************************************************************************
* File Name: PUL.h  
* Version 2.10
*
* Description:
*  This file containts Control Register function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_PUL_H) /* Pins PUL_H */
#define CY_PINS_PUL_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "PUL_aliases.h"

/* Check to see if required defines such as CY_PSOC5A are available */
/* They are defined starting with cy_boot v3.0 */
#if !defined (CY_PSOC5A)
    #error Component cy_pins_v2_10 requires cy_boot v3.0 or later
#endif /* (CY_PSOC5A) */

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 PUL__PORT == 15 && ((PUL__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

void    PUL_Write(uint8 value) ;
void    PUL_SetDriveMode(uint8 mode) ;
uint8   PUL_ReadDataReg(void) ;
uint8   PUL_Read(void) ;
uint8   PUL_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define PUL_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define PUL_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define PUL_DM_RES_UP          PIN_DM_RES_UP
#define PUL_DM_RES_DWN         PIN_DM_RES_DWN
#define PUL_DM_OD_LO           PIN_DM_OD_LO
#define PUL_DM_OD_HI           PIN_DM_OD_HI
#define PUL_DM_STRONG          PIN_DM_STRONG
#define PUL_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define PUL_MASK               PUL__MASK
#define PUL_SHIFT              PUL__SHIFT
#define PUL_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define PUL_PS                     (* (reg8 *) PUL__PS)
/* Data Register */
#define PUL_DR                     (* (reg8 *) PUL__DR)
/* Port Number */
#define PUL_PRT_NUM                (* (reg8 *) PUL__PRT) 
/* Connect to Analog Globals */                                                  
#define PUL_AG                     (* (reg8 *) PUL__AG)                       
/* Analog MUX bux enable */
#define PUL_AMUX                   (* (reg8 *) PUL__AMUX) 
/* Bidirectional Enable */                                                        
#define PUL_BIE                    (* (reg8 *) PUL__BIE)
/* Bit-mask for Aliased Register Access */
#define PUL_BIT_MASK               (* (reg8 *) PUL__BIT_MASK)
/* Bypass Enable */
#define PUL_BYP                    (* (reg8 *) PUL__BYP)
/* Port wide control signals */                                                   
#define PUL_CTL                    (* (reg8 *) PUL__CTL)
/* Drive Modes */
#define PUL_DM0                    (* (reg8 *) PUL__DM0) 
#define PUL_DM1                    (* (reg8 *) PUL__DM1)
#define PUL_DM2                    (* (reg8 *) PUL__DM2) 
/* Input Buffer Disable Override */
#define PUL_INP_DIS                (* (reg8 *) PUL__INP_DIS)
/* LCD Common or Segment Drive */
#define PUL_LCD_COM_SEG            (* (reg8 *) PUL__LCD_COM_SEG)
/* Enable Segment LCD */
#define PUL_LCD_EN                 (* (reg8 *) PUL__LCD_EN)
/* Slew Rate Control */
#define PUL_SLW                    (* (reg8 *) PUL__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define PUL_PRTDSI__CAPS_SEL       (* (reg8 *) PUL__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define PUL_PRTDSI__DBL_SYNC_IN    (* (reg8 *) PUL__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define PUL_PRTDSI__OE_SEL0        (* (reg8 *) PUL__PRTDSI__OE_SEL0) 
#define PUL_PRTDSI__OE_SEL1        (* (reg8 *) PUL__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define PUL_PRTDSI__OUT_SEL0       (* (reg8 *) PUL__PRTDSI__OUT_SEL0) 
#define PUL_PRTDSI__OUT_SEL1       (* (reg8 *) PUL__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define PUL_PRTDSI__SYNC_OUT       (* (reg8 *) PUL__PRTDSI__SYNC_OUT) 


#if defined(PUL__INTSTAT)  /* Interrupt Registers */

    #define PUL_INTSTAT                (* (reg8 *) PUL__INTSTAT)
    #define PUL_SNAP                   (* (reg8 *) PUL__SNAP)

#endif /* Interrupt Registers */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_PUL_H */


/* [] END OF FILE */
