/*******************************************************************************
* File Name: ENA.h  
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

#if !defined(CY_PINS_ENA_H) /* Pins ENA_H */
#define CY_PINS_ENA_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "ENA_aliases.h"

/* Check to see if required defines such as CY_PSOC5A are available */
/* They are defined starting with cy_boot v3.0 */
#if !defined (CY_PSOC5A)
    #error Component cy_pins_v2_10 requires cy_boot v3.0 or later
#endif /* (CY_PSOC5A) */

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 ENA__PORT == 15 && ((ENA__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

void    ENA_Write(uint8 value) ;
void    ENA_SetDriveMode(uint8 mode) ;
uint8   ENA_ReadDataReg(void) ;
uint8   ENA_Read(void) ;
uint8   ENA_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define ENA_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define ENA_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define ENA_DM_RES_UP          PIN_DM_RES_UP
#define ENA_DM_RES_DWN         PIN_DM_RES_DWN
#define ENA_DM_OD_LO           PIN_DM_OD_LO
#define ENA_DM_OD_HI           PIN_DM_OD_HI
#define ENA_DM_STRONG          PIN_DM_STRONG
#define ENA_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define ENA_MASK               ENA__MASK
#define ENA_SHIFT              ENA__SHIFT
#define ENA_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define ENA_PS                     (* (reg8 *) ENA__PS)
/* Data Register */
#define ENA_DR                     (* (reg8 *) ENA__DR)
/* Port Number */
#define ENA_PRT_NUM                (* (reg8 *) ENA__PRT) 
/* Connect to Analog Globals */                                                  
#define ENA_AG                     (* (reg8 *) ENA__AG)                       
/* Analog MUX bux enable */
#define ENA_AMUX                   (* (reg8 *) ENA__AMUX) 
/* Bidirectional Enable */                                                        
#define ENA_BIE                    (* (reg8 *) ENA__BIE)
/* Bit-mask for Aliased Register Access */
#define ENA_BIT_MASK               (* (reg8 *) ENA__BIT_MASK)
/* Bypass Enable */
#define ENA_BYP                    (* (reg8 *) ENA__BYP)
/* Port wide control signals */                                                   
#define ENA_CTL                    (* (reg8 *) ENA__CTL)
/* Drive Modes */
#define ENA_DM0                    (* (reg8 *) ENA__DM0) 
#define ENA_DM1                    (* (reg8 *) ENA__DM1)
#define ENA_DM2                    (* (reg8 *) ENA__DM2) 
/* Input Buffer Disable Override */
#define ENA_INP_DIS                (* (reg8 *) ENA__INP_DIS)
/* LCD Common or Segment Drive */
#define ENA_LCD_COM_SEG            (* (reg8 *) ENA__LCD_COM_SEG)
/* Enable Segment LCD */
#define ENA_LCD_EN                 (* (reg8 *) ENA__LCD_EN)
/* Slew Rate Control */
#define ENA_SLW                    (* (reg8 *) ENA__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define ENA_PRTDSI__CAPS_SEL       (* (reg8 *) ENA__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define ENA_PRTDSI__DBL_SYNC_IN    (* (reg8 *) ENA__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define ENA_PRTDSI__OE_SEL0        (* (reg8 *) ENA__PRTDSI__OE_SEL0) 
#define ENA_PRTDSI__OE_SEL1        (* (reg8 *) ENA__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define ENA_PRTDSI__OUT_SEL0       (* (reg8 *) ENA__PRTDSI__OUT_SEL0) 
#define ENA_PRTDSI__OUT_SEL1       (* (reg8 *) ENA__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define ENA_PRTDSI__SYNC_OUT       (* (reg8 *) ENA__PRTDSI__SYNC_OUT) 


#if defined(ENA__INTSTAT)  /* Interrupt Registers */

    #define ENA_INTSTAT                (* (reg8 *) ENA__INTSTAT)
    #define ENA_SNAP                   (* (reg8 *) ENA__SNAP)

#endif /* Interrupt Registers */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_ENA_H */


/* [] END OF FILE */
