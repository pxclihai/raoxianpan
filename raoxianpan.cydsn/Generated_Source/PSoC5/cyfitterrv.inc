    IF :LNOT::DEF:INCLUDED_CYFITTERRV_INC
INCLUDED_CYFITTERRV_INC EQU 1
    GET cydevicerv.inc
    GET cydevicerv_trm.inc

; ADC_ADC_SAR
ADC_ADC_SAR__CLK EQU CYREG_SAR0_CLK
ADC_ADC_SAR__CSR0 EQU CYREG_SAR0_CSR0
ADC_ADC_SAR__CSR1 EQU CYREG_SAR0_CSR1
ADC_ADC_SAR__CSR2 EQU CYREG_SAR0_CSR2
ADC_ADC_SAR__CSR3 EQU CYREG_SAR0_CSR3
ADC_ADC_SAR__CSR4 EQU CYREG_SAR0_CSR4
ADC_ADC_SAR__CSR5 EQU CYREG_SAR0_CSR5
ADC_ADC_SAR__CSR6 EQU CYREG_SAR0_CSR6
ADC_ADC_SAR__PM_ACT_CFG EQU CYREG_PM_ACT_CFG11
ADC_ADC_SAR__PM_ACT_MSK EQU 0x01
ADC_ADC_SAR__PM_STBY_CFG EQU CYREG_PM_STBY_CFG11
ADC_ADC_SAR__PM_STBY_MSK EQU 0x01
ADC_ADC_SAR__SW0 EQU CYREG_SAR0_SW0
ADC_ADC_SAR__SW2 EQU CYREG_SAR0_SW2
ADC_ADC_SAR__SW3 EQU CYREG_SAR0_SW3
ADC_ADC_SAR__SW4 EQU CYREG_SAR0_SW4
ADC_ADC_SAR__SW6 EQU CYREG_SAR0_SW6
ADC_ADC_SAR__TR0 EQU CYREG_SAR0_TR0
ADC_ADC_SAR__WRK0 EQU CYREG_SAR0_WRK0
ADC_ADC_SAR__WRK1 EQU CYREG_SAR0_WRK1

; ADC_IRQ
ADC_IRQ__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
ADC_IRQ__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
ADC_IRQ__INTC_MASK EQU 0x01
ADC_IRQ__INTC_NUMBER EQU 0
ADC_IRQ__INTC_PRIOR_NUM EQU 7
ADC_IRQ__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_0
ADC_IRQ__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
ADC_IRQ__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

; ADC_theACLK
ADC_theACLK__CFG0 EQU CYREG_CLKDIST_DCFG0_CFG0
ADC_theACLK__CFG1 EQU CYREG_CLKDIST_DCFG0_CFG1
ADC_theACLK__CFG2 EQU CYREG_CLKDIST_DCFG0_CFG2
ADC_theACLK__CFG2_SRC_SEL_MASK EQU 0x07
ADC_theACLK__INDEX EQU 0x00
ADC_theACLK__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
ADC_theACLK__PM_ACT_MSK EQU 0x01
ADC_theACLK__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
ADC_theACLK__PM_STBY_MSK EQU 0x01

; DIR
DIR__0__INTTYPE EQU CYREG_PICU0_INTTYPE2
DIR__0__MASK EQU 0x04
DIR__0__PC EQU CYREG_PRT0_PC2
DIR__0__PORT EQU 0
DIR__0__SHIFT EQU 2
DIR__AG EQU CYREG_PRT0_AG
DIR__AMUX EQU CYREG_PRT0_AMUX
DIR__BIE EQU CYREG_PRT0_BIE
DIR__BIT_MASK EQU CYREG_PRT0_BIT_MASK
DIR__BYP EQU CYREG_PRT0_BYP
DIR__CTL EQU CYREG_PRT0_CTL
DIR__DM0 EQU CYREG_PRT0_DM0
DIR__DM1 EQU CYREG_PRT0_DM1
DIR__DM2 EQU CYREG_PRT0_DM2
DIR__DR EQU CYREG_PRT0_DR
DIR__INP_DIS EQU CYREG_PRT0_INP_DIS
DIR__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
DIR__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
DIR__LCD_EN EQU CYREG_PRT0_LCD_EN
DIR__MASK EQU 0x04
DIR__PORT EQU 0
DIR__PRT EQU CYREG_PRT0_PRT
DIR__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
DIR__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
DIR__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
DIR__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
DIR__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
DIR__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
DIR__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
DIR__PS EQU CYREG_PRT0_PS
DIR__SHIFT EQU 2
DIR__SLW EQU CYREG_PRT0_SLW

; DIR_P
DIR_P__0__INTTYPE EQU CYREG_PICU0_INTTYPE4
DIR_P__0__MASK EQU 0x10
DIR_P__0__PC EQU CYREG_PRT0_PC4
DIR_P__0__PORT EQU 0
DIR_P__0__SHIFT EQU 4
DIR_P__AG EQU CYREG_PRT0_AG
DIR_P__AMUX EQU CYREG_PRT0_AMUX
DIR_P__BIE EQU CYREG_PRT0_BIE
DIR_P__BIT_MASK EQU CYREG_PRT0_BIT_MASK
DIR_P__BYP EQU CYREG_PRT0_BYP
DIR_P__CTL EQU CYREG_PRT0_CTL
DIR_P__DM0 EQU CYREG_PRT0_DM0
DIR_P__DM1 EQU CYREG_PRT0_DM1
DIR_P__DM2 EQU CYREG_PRT0_DM2
DIR_P__DR EQU CYREG_PRT0_DR
DIR_P__INP_DIS EQU CYREG_PRT0_INP_DIS
DIR_P__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
DIR_P__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
DIR_P__LCD_EN EQU CYREG_PRT0_LCD_EN
DIR_P__MASK EQU 0x10
DIR_P__PORT EQU 0
DIR_P__PRT EQU CYREG_PRT0_PRT
DIR_P__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
DIR_P__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
DIR_P__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
DIR_P__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
DIR_P__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
DIR_P__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
DIR_P__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
DIR_P__PS EQU CYREG_PRT0_PS
DIR_P__SHIFT EQU 4
DIR_P__SLW EQU CYREG_PRT0_SLW

; ENA
ENA__0__INTTYPE EQU CYREG_PICU0_INTTYPE1
ENA__0__MASK EQU 0x02
ENA__0__PC EQU CYREG_PRT0_PC1
ENA__0__PORT EQU 0
ENA__0__SHIFT EQU 1
ENA__AG EQU CYREG_PRT0_AG
ENA__AMUX EQU CYREG_PRT0_AMUX
ENA__BIE EQU CYREG_PRT0_BIE
ENA__BIT_MASK EQU CYREG_PRT0_BIT_MASK
ENA__BYP EQU CYREG_PRT0_BYP
ENA__CTL EQU CYREG_PRT0_CTL
ENA__DM0 EQU CYREG_PRT0_DM0
ENA__DM1 EQU CYREG_PRT0_DM1
ENA__DM2 EQU CYREG_PRT0_DM2
ENA__DR EQU CYREG_PRT0_DR
ENA__INP_DIS EQU CYREG_PRT0_INP_DIS
ENA__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
ENA__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
ENA__LCD_EN EQU CYREG_PRT0_LCD_EN
ENA__MASK EQU 0x02
ENA__PORT EQU 0
ENA__PRT EQU CYREG_PRT0_PRT
ENA__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
ENA__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
ENA__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
ENA__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
ENA__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
ENA__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
ENA__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
ENA__PS EQU CYREG_PRT0_PS
ENA__SHIFT EQU 1
ENA__SLW EQU CYREG_PRT0_SLW

; ENA_P
ENA_P__0__INTTYPE EQU CYREG_PICU0_INTTYPE6
ENA_P__0__MASK EQU 0x40
ENA_P__0__PC EQU CYREG_PRT0_PC6
ENA_P__0__PORT EQU 0
ENA_P__0__SHIFT EQU 6
ENA_P__AG EQU CYREG_PRT0_AG
ENA_P__AMUX EQU CYREG_PRT0_AMUX
ENA_P__BIE EQU CYREG_PRT0_BIE
ENA_P__BIT_MASK EQU CYREG_PRT0_BIT_MASK
ENA_P__BYP EQU CYREG_PRT0_BYP
ENA_P__CTL EQU CYREG_PRT0_CTL
ENA_P__DM0 EQU CYREG_PRT0_DM0
ENA_P__DM1 EQU CYREG_PRT0_DM1
ENA_P__DM2 EQU CYREG_PRT0_DM2
ENA_P__DR EQU CYREG_PRT0_DR
ENA_P__INP_DIS EQU CYREG_PRT0_INP_DIS
ENA_P__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
ENA_P__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
ENA_P__LCD_EN EQU CYREG_PRT0_LCD_EN
ENA_P__MASK EQU 0x40
ENA_P__PORT EQU 0
ENA_P__PRT EQU CYREG_PRT0_PRT
ENA_P__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
ENA_P__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
ENA_P__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
ENA_P__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
ENA_P__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
ENA_P__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
ENA_P__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
ENA_P__PS EQU CYREG_PRT0_PS
ENA_P__SHIFT EQU 6
ENA_P__SLW EQU CYREG_PRT0_SLW

; PUL
PUL__0__INTTYPE EQU CYREG_PICU0_INTTYPE3
PUL__0__MASK EQU 0x08
PUL__0__PC EQU CYREG_PRT0_PC3
PUL__0__PORT EQU 0
PUL__0__SHIFT EQU 3
PUL__AG EQU CYREG_PRT0_AG
PUL__AMUX EQU CYREG_PRT0_AMUX
PUL__BIE EQU CYREG_PRT0_BIE
PUL__BIT_MASK EQU CYREG_PRT0_BIT_MASK
PUL__BYP EQU CYREG_PRT0_BYP
PUL__CTL EQU CYREG_PRT0_CTL
PUL__DM0 EQU CYREG_PRT0_DM0
PUL__DM1 EQU CYREG_PRT0_DM1
PUL__DM2 EQU CYREG_PRT0_DM2
PUL__DR EQU CYREG_PRT0_DR
PUL__INP_DIS EQU CYREG_PRT0_INP_DIS
PUL__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
PUL__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
PUL__LCD_EN EQU CYREG_PRT0_LCD_EN
PUL__MASK EQU 0x08
PUL__PORT EQU 0
PUL__PRT EQU CYREG_PRT0_PRT
PUL__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
PUL__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
PUL__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
PUL__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
PUL__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
PUL__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
PUL__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
PUL__PS EQU CYREG_PRT0_PS
PUL__SHIFT EQU 3
PUL__SLW EQU CYREG_PRT0_SLW

; PUL_P
PUL_P__0__INTTYPE EQU CYREG_PICU0_INTTYPE5
PUL_P__0__MASK EQU 0x20
PUL_P__0__PC EQU CYREG_PRT0_PC5
PUL_P__0__PORT EQU 0
PUL_P__0__SHIFT EQU 5
PUL_P__AG EQU CYREG_PRT0_AG
PUL_P__AMUX EQU CYREG_PRT0_AMUX
PUL_P__BIE EQU CYREG_PRT0_BIE
PUL_P__BIT_MASK EQU CYREG_PRT0_BIT_MASK
PUL_P__BYP EQU CYREG_PRT0_BYP
PUL_P__CTL EQU CYREG_PRT0_CTL
PUL_P__DM0 EQU CYREG_PRT0_DM0
PUL_P__DM1 EQU CYREG_PRT0_DM1
PUL_P__DM2 EQU CYREG_PRT0_DM2
PUL_P__DR EQU CYREG_PRT0_DR
PUL_P__INP_DIS EQU CYREG_PRT0_INP_DIS
PUL_P__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
PUL_P__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
PUL_P__LCD_EN EQU CYREG_PRT0_LCD_EN
PUL_P__MASK EQU 0x20
PUL_P__PORT EQU 0
PUL_P__PRT EQU CYREG_PRT0_PRT
PUL_P__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
PUL_P__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
PUL_P__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
PUL_P__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
PUL_P__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
PUL_P__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
PUL_P__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
PUL_P__PS EQU CYREG_PRT0_PS
PUL_P__SHIFT EQU 5
PUL_P__SLW EQU CYREG_PRT0_SLW

; PWM_1_PWMUDB
PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB05_06_ACTL
PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_CONTROL_REG EQU CYREG_B0_UDB05_06_CTL
PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_COUNT_REG EQU CYREG_B0_UDB05_06_CTL
PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_COUNT_CONTROL_REG EQU CYREG_B0_UDB05_06_CTL
PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_COUNT_COUNT_REG EQU CYREG_B0_UDB05_06_CTL
PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_MASK_MASK_REG EQU CYREG_B0_UDB05_06_MSK
PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_MASK_PERIOD_REG EQU CYREG_B0_UDB05_06_MSK
PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_PERIOD_MASK_REG EQU CYREG_B0_UDB05_06_MSK
PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_PERIOD_PERIOD_REG EQU CYREG_B0_UDB05_06_MSK
PWM_1_PWMUDB_genblk1_ctrlreg__7__MASK EQU 0x80
PWM_1_PWMUDB_genblk1_ctrlreg__7__POS EQU 7
PWM_1_PWMUDB_genblk1_ctrlreg__CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB05_ACTL
PWM_1_PWMUDB_genblk1_ctrlreg__CONTROL_REG EQU CYREG_B0_UDB05_CTL
PWM_1_PWMUDB_genblk1_ctrlreg__CONTROL_ST_REG EQU CYREG_B0_UDB05_ST_CTL
PWM_1_PWMUDB_genblk1_ctrlreg__COUNT_REG EQU CYREG_B0_UDB05_CTL
PWM_1_PWMUDB_genblk1_ctrlreg__COUNT_ST_REG EQU CYREG_B0_UDB05_ST_CTL
PWM_1_PWMUDB_genblk1_ctrlreg__MASK EQU 0x80
PWM_1_PWMUDB_genblk1_ctrlreg__MASK_CTL_AUX_CTL_REG EQU CYREG_B0_UDB05_MSK_ACTL
PWM_1_PWMUDB_genblk1_ctrlreg__PER_CTL_AUX_CTL_REG EQU CYREG_B0_UDB05_MSK_ACTL
PWM_1_PWMUDB_genblk1_ctrlreg__PERIOD_REG EQU CYREG_B0_UDB05_MSK
PWM_1_PWMUDB_genblk8_stsreg__0__MASK EQU 0x01
PWM_1_PWMUDB_genblk8_stsreg__0__POS EQU 0
PWM_1_PWMUDB_genblk8_stsreg__1__MASK EQU 0x02
PWM_1_PWMUDB_genblk8_stsreg__1__POS EQU 1
PWM_1_PWMUDB_genblk8_stsreg__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B0_UDB05_06_ACTL
PWM_1_PWMUDB_genblk8_stsreg__16BIT_STATUS_REG EQU CYREG_B0_UDB05_06_ST
PWM_1_PWMUDB_genblk8_stsreg__2__MASK EQU 0x04
PWM_1_PWMUDB_genblk8_stsreg__2__POS EQU 2
PWM_1_PWMUDB_genblk8_stsreg__3__MASK EQU 0x08
PWM_1_PWMUDB_genblk8_stsreg__3__POS EQU 3
PWM_1_PWMUDB_genblk8_stsreg__MASK EQU 0x0F
PWM_1_PWMUDB_genblk8_stsreg__MASK_REG EQU CYREG_B0_UDB05_MSK
PWM_1_PWMUDB_genblk8_stsreg__MASK_ST_AUX_CTL_REG EQU CYREG_B0_UDB05_MSK_ACTL
PWM_1_PWMUDB_genblk8_stsreg__PER_ST_AUX_CTL_REG EQU CYREG_B0_UDB05_MSK_ACTL
PWM_1_PWMUDB_genblk8_stsreg__STATUS_AUX_CTL_REG EQU CYREG_B0_UDB05_ACTL
PWM_1_PWMUDB_genblk8_stsreg__STATUS_CNT_REG EQU CYREG_B0_UDB05_ST_CTL
PWM_1_PWMUDB_genblk8_stsreg__STATUS_CONTROL_REG EQU CYREG_B0_UDB05_ST_CTL
PWM_1_PWMUDB_genblk8_stsreg__STATUS_REG EQU CYREG_B0_UDB05_ST
PWM_1_PWMUDB_sP16_pwmdp_u0__16BIT_A0_REG EQU CYREG_B0_UDB04_05_A0
PWM_1_PWMUDB_sP16_pwmdp_u0__16BIT_A1_REG EQU CYREG_B0_UDB04_05_A1
PWM_1_PWMUDB_sP16_pwmdp_u0__16BIT_D0_REG EQU CYREG_B0_UDB04_05_D0
PWM_1_PWMUDB_sP16_pwmdp_u0__16BIT_D1_REG EQU CYREG_B0_UDB04_05_D1
PWM_1_PWMUDB_sP16_pwmdp_u0__16BIT_DP_AUX_CTL_REG EQU CYREG_B0_UDB04_05_ACTL
PWM_1_PWMUDB_sP16_pwmdp_u0__16BIT_F0_REG EQU CYREG_B0_UDB04_05_F0
PWM_1_PWMUDB_sP16_pwmdp_u0__16BIT_F1_REG EQU CYREG_B0_UDB04_05_F1
PWM_1_PWMUDB_sP16_pwmdp_u0__A0_A1_REG EQU CYREG_B0_UDB04_A0_A1
PWM_1_PWMUDB_sP16_pwmdp_u0__A0_REG EQU CYREG_B0_UDB04_A0
PWM_1_PWMUDB_sP16_pwmdp_u0__A1_REG EQU CYREG_B0_UDB04_A1
PWM_1_PWMUDB_sP16_pwmdp_u0__D0_D1_REG EQU CYREG_B0_UDB04_D0_D1
PWM_1_PWMUDB_sP16_pwmdp_u0__D0_REG EQU CYREG_B0_UDB04_D0
PWM_1_PWMUDB_sP16_pwmdp_u0__D1_REG EQU CYREG_B0_UDB04_D1
PWM_1_PWMUDB_sP16_pwmdp_u0__DP_AUX_CTL_REG EQU CYREG_B0_UDB04_ACTL
PWM_1_PWMUDB_sP16_pwmdp_u0__F0_F1_REG EQU CYREG_B0_UDB04_F0_F1
PWM_1_PWMUDB_sP16_pwmdp_u0__F0_REG EQU CYREG_B0_UDB04_F0
PWM_1_PWMUDB_sP16_pwmdp_u0__F1_REG EQU CYREG_B0_UDB04_F1
PWM_1_PWMUDB_sP16_pwmdp_u0__MSK_DP_AUX_CTL_REG EQU CYREG_B0_UDB04_MSK_ACTL
PWM_1_PWMUDB_sP16_pwmdp_u0__PER_DP_AUX_CTL_REG EQU CYREG_B0_UDB04_MSK_ACTL
PWM_1_PWMUDB_sP16_pwmdp_u1__16BIT_A0_REG EQU CYREG_B0_UDB05_06_A0
PWM_1_PWMUDB_sP16_pwmdp_u1__16BIT_A1_REG EQU CYREG_B0_UDB05_06_A1
PWM_1_PWMUDB_sP16_pwmdp_u1__16BIT_D0_REG EQU CYREG_B0_UDB05_06_D0
PWM_1_PWMUDB_sP16_pwmdp_u1__16BIT_D1_REG EQU CYREG_B0_UDB05_06_D1
PWM_1_PWMUDB_sP16_pwmdp_u1__16BIT_DP_AUX_CTL_REG EQU CYREG_B0_UDB05_06_ACTL
PWM_1_PWMUDB_sP16_pwmdp_u1__16BIT_F0_REG EQU CYREG_B0_UDB05_06_F0
PWM_1_PWMUDB_sP16_pwmdp_u1__16BIT_F1_REG EQU CYREG_B0_UDB05_06_F1
PWM_1_PWMUDB_sP16_pwmdp_u1__A0_A1_REG EQU CYREG_B0_UDB05_A0_A1
PWM_1_PWMUDB_sP16_pwmdp_u1__A0_REG EQU CYREG_B0_UDB05_A0
PWM_1_PWMUDB_sP16_pwmdp_u1__A1_REG EQU CYREG_B0_UDB05_A1
PWM_1_PWMUDB_sP16_pwmdp_u1__D0_D1_REG EQU CYREG_B0_UDB05_D0_D1
PWM_1_PWMUDB_sP16_pwmdp_u1__D0_REG EQU CYREG_B0_UDB05_D0
PWM_1_PWMUDB_sP16_pwmdp_u1__D1_REG EQU CYREG_B0_UDB05_D1
PWM_1_PWMUDB_sP16_pwmdp_u1__DP_AUX_CTL_REG EQU CYREG_B0_UDB05_ACTL
PWM_1_PWMUDB_sP16_pwmdp_u1__F0_F1_REG EQU CYREG_B0_UDB05_F0_F1
PWM_1_PWMUDB_sP16_pwmdp_u1__F0_REG EQU CYREG_B0_UDB05_F0
PWM_1_PWMUDB_sP16_pwmdp_u1__F1_REG EQU CYREG_B0_UDB05_F1
PWM_1_PWMUDB_sP16_pwmdp_u1__MSK_DP_AUX_CTL_REG EQU CYREG_B0_UDB05_MSK_ACTL
PWM_1_PWMUDB_sP16_pwmdp_u1__PER_DP_AUX_CTL_REG EQU CYREG_B0_UDB05_MSK_ACTL

; PWM_P_PWMUDB
PWM_P_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB04_05_ACTL
PWM_P_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_CONTROL_REG EQU CYREG_B0_UDB04_05_CTL
PWM_P_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_COUNT_REG EQU CYREG_B0_UDB04_05_CTL
PWM_P_PWMUDB_genblk1_ctrlreg__16BIT_COUNT_CONTROL_REG EQU CYREG_B0_UDB04_05_CTL
PWM_P_PWMUDB_genblk1_ctrlreg__16BIT_COUNT_COUNT_REG EQU CYREG_B0_UDB04_05_CTL
PWM_P_PWMUDB_genblk1_ctrlreg__16BIT_MASK_MASK_REG EQU CYREG_B0_UDB04_05_MSK
PWM_P_PWMUDB_genblk1_ctrlreg__16BIT_MASK_PERIOD_REG EQU CYREG_B0_UDB04_05_MSK
PWM_P_PWMUDB_genblk1_ctrlreg__16BIT_PERIOD_MASK_REG EQU CYREG_B0_UDB04_05_MSK
PWM_P_PWMUDB_genblk1_ctrlreg__16BIT_PERIOD_PERIOD_REG EQU CYREG_B0_UDB04_05_MSK
PWM_P_PWMUDB_genblk1_ctrlreg__7__MASK EQU 0x80
PWM_P_PWMUDB_genblk1_ctrlreg__7__POS EQU 7
PWM_P_PWMUDB_genblk1_ctrlreg__CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB04_ACTL
PWM_P_PWMUDB_genblk1_ctrlreg__CONTROL_REG EQU CYREG_B0_UDB04_CTL
PWM_P_PWMUDB_genblk1_ctrlreg__CONTROL_ST_REG EQU CYREG_B0_UDB04_ST_CTL
PWM_P_PWMUDB_genblk1_ctrlreg__COUNT_REG EQU CYREG_B0_UDB04_CTL
PWM_P_PWMUDB_genblk1_ctrlreg__COUNT_ST_REG EQU CYREG_B0_UDB04_ST_CTL
PWM_P_PWMUDB_genblk1_ctrlreg__MASK EQU 0x80
PWM_P_PWMUDB_genblk1_ctrlreg__MASK_CTL_AUX_CTL_REG EQU CYREG_B0_UDB04_MSK_ACTL
PWM_P_PWMUDB_genblk1_ctrlreg__PER_CTL_AUX_CTL_REG EQU CYREG_B0_UDB04_MSK_ACTL
PWM_P_PWMUDB_genblk1_ctrlreg__PERIOD_REG EQU CYREG_B0_UDB04_MSK
PWM_P_PWMUDB_genblk8_stsreg__0__MASK EQU 0x01
PWM_P_PWMUDB_genblk8_stsreg__0__POS EQU 0
PWM_P_PWMUDB_genblk8_stsreg__1__MASK EQU 0x02
PWM_P_PWMUDB_genblk8_stsreg__1__POS EQU 1
PWM_P_PWMUDB_genblk8_stsreg__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B0_UDB03_04_ACTL
PWM_P_PWMUDB_genblk8_stsreg__16BIT_STATUS_REG EQU CYREG_B0_UDB03_04_ST
PWM_P_PWMUDB_genblk8_stsreg__2__MASK EQU 0x04
PWM_P_PWMUDB_genblk8_stsreg__2__POS EQU 2
PWM_P_PWMUDB_genblk8_stsreg__3__MASK EQU 0x08
PWM_P_PWMUDB_genblk8_stsreg__3__POS EQU 3
PWM_P_PWMUDB_genblk8_stsreg__MASK EQU 0x0F
PWM_P_PWMUDB_genblk8_stsreg__MASK_REG EQU CYREG_B0_UDB03_MSK
PWM_P_PWMUDB_genblk8_stsreg__STATUS_AUX_CTL_REG EQU CYREG_B0_UDB03_ACTL
PWM_P_PWMUDB_genblk8_stsreg__STATUS_REG EQU CYREG_B0_UDB03_ST
PWM_P_PWMUDB_sP16_pwmdp_u0__16BIT_A0_REG EQU CYREG_B0_UDB02_03_A0
PWM_P_PWMUDB_sP16_pwmdp_u0__16BIT_A1_REG EQU CYREG_B0_UDB02_03_A1
PWM_P_PWMUDB_sP16_pwmdp_u0__16BIT_D0_REG EQU CYREG_B0_UDB02_03_D0
PWM_P_PWMUDB_sP16_pwmdp_u0__16BIT_D1_REG EQU CYREG_B0_UDB02_03_D1
PWM_P_PWMUDB_sP16_pwmdp_u0__16BIT_DP_AUX_CTL_REG EQU CYREG_B0_UDB02_03_ACTL
PWM_P_PWMUDB_sP16_pwmdp_u0__16BIT_F0_REG EQU CYREG_B0_UDB02_03_F0
PWM_P_PWMUDB_sP16_pwmdp_u0__16BIT_F1_REG EQU CYREG_B0_UDB02_03_F1
PWM_P_PWMUDB_sP16_pwmdp_u0__A0_A1_REG EQU CYREG_B0_UDB02_A0_A1
PWM_P_PWMUDB_sP16_pwmdp_u0__A0_REG EQU CYREG_B0_UDB02_A0
PWM_P_PWMUDB_sP16_pwmdp_u0__A1_REG EQU CYREG_B0_UDB02_A1
PWM_P_PWMUDB_sP16_pwmdp_u0__D0_D1_REG EQU CYREG_B0_UDB02_D0_D1
PWM_P_PWMUDB_sP16_pwmdp_u0__D0_REG EQU CYREG_B0_UDB02_D0
PWM_P_PWMUDB_sP16_pwmdp_u0__D1_REG EQU CYREG_B0_UDB02_D1
PWM_P_PWMUDB_sP16_pwmdp_u0__DP_AUX_CTL_REG EQU CYREG_B0_UDB02_ACTL
PWM_P_PWMUDB_sP16_pwmdp_u0__F0_F1_REG EQU CYREG_B0_UDB02_F0_F1
PWM_P_PWMUDB_sP16_pwmdp_u0__F0_REG EQU CYREG_B0_UDB02_F0
PWM_P_PWMUDB_sP16_pwmdp_u0__F1_REG EQU CYREG_B0_UDB02_F1
PWM_P_PWMUDB_sP16_pwmdp_u1__16BIT_A0_REG EQU CYREG_B0_UDB03_04_A0
PWM_P_PWMUDB_sP16_pwmdp_u1__16BIT_A1_REG EQU CYREG_B0_UDB03_04_A1
PWM_P_PWMUDB_sP16_pwmdp_u1__16BIT_D0_REG EQU CYREG_B0_UDB03_04_D0
PWM_P_PWMUDB_sP16_pwmdp_u1__16BIT_D1_REG EQU CYREG_B0_UDB03_04_D1
PWM_P_PWMUDB_sP16_pwmdp_u1__16BIT_DP_AUX_CTL_REG EQU CYREG_B0_UDB03_04_ACTL
PWM_P_PWMUDB_sP16_pwmdp_u1__16BIT_F0_REG EQU CYREG_B0_UDB03_04_F0
PWM_P_PWMUDB_sP16_pwmdp_u1__16BIT_F1_REG EQU CYREG_B0_UDB03_04_F1
PWM_P_PWMUDB_sP16_pwmdp_u1__A0_A1_REG EQU CYREG_B0_UDB03_A0_A1
PWM_P_PWMUDB_sP16_pwmdp_u1__A0_REG EQU CYREG_B0_UDB03_A0
PWM_P_PWMUDB_sP16_pwmdp_u1__A1_REG EQU CYREG_B0_UDB03_A1
PWM_P_PWMUDB_sP16_pwmdp_u1__D0_D1_REG EQU CYREG_B0_UDB03_D0_D1
PWM_P_PWMUDB_sP16_pwmdp_u1__D0_REG EQU CYREG_B0_UDB03_D0
PWM_P_PWMUDB_sP16_pwmdp_u1__D1_REG EQU CYREG_B0_UDB03_D1
PWM_P_PWMUDB_sP16_pwmdp_u1__DP_AUX_CTL_REG EQU CYREG_B0_UDB03_ACTL
PWM_P_PWMUDB_sP16_pwmdp_u1__F0_F1_REG EQU CYREG_B0_UDB03_F0_F1
PWM_P_PWMUDB_sP16_pwmdp_u1__F0_REG EQU CYREG_B0_UDB03_F0
PWM_P_PWMUDB_sP16_pwmdp_u1__F1_REG EQU CYREG_B0_UDB03_F1

; Rx_net
Rx_net__0__INTTYPE EQU CYREG_PICU3_INTTYPE3
Rx_net__0__MASK EQU 0x08
Rx_net__0__PC EQU CYREG_PRT3_PC3
Rx_net__0__PORT EQU 3
Rx_net__0__SHIFT EQU 3
Rx_net__AG EQU CYREG_PRT3_AG
Rx_net__AMUX EQU CYREG_PRT3_AMUX
Rx_net__BIE EQU CYREG_PRT3_BIE
Rx_net__BIT_MASK EQU CYREG_PRT3_BIT_MASK
Rx_net__BYP EQU CYREG_PRT3_BYP
Rx_net__CTL EQU CYREG_PRT3_CTL
Rx_net__DM0 EQU CYREG_PRT3_DM0
Rx_net__DM1 EQU CYREG_PRT3_DM1
Rx_net__DM2 EQU CYREG_PRT3_DM2
Rx_net__DR EQU CYREG_PRT3_DR
Rx_net__INP_DIS EQU CYREG_PRT3_INP_DIS
Rx_net__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU3_BASE
Rx_net__LCD_COM_SEG EQU CYREG_PRT3_LCD_COM_SEG
Rx_net__LCD_EN EQU CYREG_PRT3_LCD_EN
Rx_net__MASK EQU 0x08
Rx_net__PORT EQU 3
Rx_net__PRT EQU CYREG_PRT3_PRT
Rx_net__PRTDSI__CAPS_SEL EQU CYREG_PRT3_CAPS_SEL
Rx_net__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT3_DBL_SYNC_IN
Rx_net__PRTDSI__OE_SEL0 EQU CYREG_PRT3_OE_SEL0
Rx_net__PRTDSI__OE_SEL1 EQU CYREG_PRT3_OE_SEL1
Rx_net__PRTDSI__OUT_SEL0 EQU CYREG_PRT3_OUT_SEL0
Rx_net__PRTDSI__OUT_SEL1 EQU CYREG_PRT3_OUT_SEL1
Rx_net__PRTDSI__SYNC_OUT EQU CYREG_PRT3_SYNC_OUT
Rx_net__PS EQU CYREG_PRT3_PS
Rx_net__SHIFT EQU 3
Rx_net__SLW EQU CYREG_PRT3_SLW

; Tx_net
Tx_net__0__INTTYPE EQU CYREG_PICU3_INTTYPE4
Tx_net__0__MASK EQU 0x10
Tx_net__0__PC EQU CYREG_PRT3_PC4
Tx_net__0__PORT EQU 3
Tx_net__0__SHIFT EQU 4
Tx_net__AG EQU CYREG_PRT3_AG
Tx_net__AMUX EQU CYREG_PRT3_AMUX
Tx_net__BIE EQU CYREG_PRT3_BIE
Tx_net__BIT_MASK EQU CYREG_PRT3_BIT_MASK
Tx_net__BYP EQU CYREG_PRT3_BYP
Tx_net__CTL EQU CYREG_PRT3_CTL
Tx_net__DM0 EQU CYREG_PRT3_DM0
Tx_net__DM1 EQU CYREG_PRT3_DM1
Tx_net__DM2 EQU CYREG_PRT3_DM2
Tx_net__DR EQU CYREG_PRT3_DR
Tx_net__INP_DIS EQU CYREG_PRT3_INP_DIS
Tx_net__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU3_BASE
Tx_net__LCD_COM_SEG EQU CYREG_PRT3_LCD_COM_SEG
Tx_net__LCD_EN EQU CYREG_PRT3_LCD_EN
Tx_net__MASK EQU 0x10
Tx_net__PORT EQU 3
Tx_net__PRT EQU CYREG_PRT3_PRT
Tx_net__PRTDSI__CAPS_SEL EQU CYREG_PRT3_CAPS_SEL
Tx_net__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT3_DBL_SYNC_IN
Tx_net__PRTDSI__OE_SEL0 EQU CYREG_PRT3_OE_SEL0
Tx_net__PRTDSI__OE_SEL1 EQU CYREG_PRT3_OE_SEL1
Tx_net__PRTDSI__OUT_SEL0 EQU CYREG_PRT3_OUT_SEL0
Tx_net__PRTDSI__OUT_SEL1 EQU CYREG_PRT3_OUT_SEL1
Tx_net__PRTDSI__SYNC_OUT EQU CYREG_PRT3_SYNC_OUT
Tx_net__PS EQU CYREG_PRT3_PS
Tx_net__SHIFT EQU 4
Tx_net__SLW EQU CYREG_PRT3_SLW

; BATTERY
BATTERY__0__INTTYPE EQU CYREG_PICU2_INTTYPE5
BATTERY__0__MASK EQU 0x20
BATTERY__0__PC EQU CYREG_PRT2_PC5
BATTERY__0__PORT EQU 2
BATTERY__0__SHIFT EQU 5
BATTERY__AG EQU CYREG_PRT2_AG
BATTERY__AMUX EQU CYREG_PRT2_AMUX
BATTERY__BIE EQU CYREG_PRT2_BIE
BATTERY__BIT_MASK EQU CYREG_PRT2_BIT_MASK
BATTERY__BYP EQU CYREG_PRT2_BYP
BATTERY__CTL EQU CYREG_PRT2_CTL
BATTERY__DM0 EQU CYREG_PRT2_DM0
BATTERY__DM1 EQU CYREG_PRT2_DM1
BATTERY__DM2 EQU CYREG_PRT2_DM2
BATTERY__DR EQU CYREG_PRT2_DR
BATTERY__INP_DIS EQU CYREG_PRT2_INP_DIS
BATTERY__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU2_BASE
BATTERY__LCD_COM_SEG EQU CYREG_PRT2_LCD_COM_SEG
BATTERY__LCD_EN EQU CYREG_PRT2_LCD_EN
BATTERY__MASK EQU 0x20
BATTERY__PORT EQU 2
BATTERY__PRT EQU CYREG_PRT2_PRT
BATTERY__PRTDSI__CAPS_SEL EQU CYREG_PRT2_CAPS_SEL
BATTERY__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT2_DBL_SYNC_IN
BATTERY__PRTDSI__OE_SEL0 EQU CYREG_PRT2_OE_SEL0
BATTERY__PRTDSI__OE_SEL1 EQU CYREG_PRT2_OE_SEL1
BATTERY__PRTDSI__OUT_SEL0 EQU CYREG_PRT2_OUT_SEL0
BATTERY__PRTDSI__OUT_SEL1 EQU CYREG_PRT2_OUT_SEL1
BATTERY__PRTDSI__SYNC_OUT EQU CYREG_PRT2_SYNC_OUT
BATTERY__PS EQU CYREG_PRT2_PS
BATTERY__SHIFT EQU 5
BATTERY__SLW EQU CYREG_PRT2_SLW

; Clock_1
Clock_1__CFG0 EQU CYREG_CLKDIST_DCFG1_CFG0
Clock_1__CFG1 EQU CYREG_CLKDIST_DCFG1_CFG1
Clock_1__CFG2 EQU CYREG_CLKDIST_DCFG1_CFG2
Clock_1__CFG2_SRC_SEL_MASK EQU 0x07
Clock_1__INDEX EQU 0x01
Clock_1__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
Clock_1__PM_ACT_MSK EQU 0x02
Clock_1__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
Clock_1__PM_STBY_MSK EQU 0x02

; Timer_1_TimerHW
Timer_1_TimerHW__CAP0 EQU CYREG_TMR0_CAP0
Timer_1_TimerHW__CAP1 EQU CYREG_TMR0_CAP1
Timer_1_TimerHW__CFG0 EQU CYREG_TMR0_CFG0
Timer_1_TimerHW__CFG1 EQU CYREG_TMR0_CFG1
Timer_1_TimerHW__CFG2 EQU CYREG_TMR0_CFG2
Timer_1_TimerHW__CNT_CMP0 EQU CYREG_TMR0_CNT_CMP0
Timer_1_TimerHW__CNT_CMP1 EQU CYREG_TMR0_CNT_CMP1
Timer_1_TimerHW__PER0 EQU CYREG_TMR0_PER0
Timer_1_TimerHW__PER1 EQU CYREG_TMR0_PER1
Timer_1_TimerHW__PM_ACT_CFG EQU CYREG_PM_ACT_CFG3
Timer_1_TimerHW__PM_ACT_MSK EQU 0x01
Timer_1_TimerHW__PM_STBY_CFG EQU CYREG_PM_STBY_CFG3
Timer_1_TimerHW__PM_STBY_MSK EQU 0x01
Timer_1_TimerHW__RT0 EQU CYREG_TMR0_RT0
Timer_1_TimerHW__RT1 EQU CYREG_TMR0_RT1
Timer_1_TimerHW__SR0 EQU CYREG_TMR0_SR0

; UART_net_BUART
UART_net_BUART_sRX_RxBitCounter__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_B1_UDB07_08_ACTL
UART_net_BUART_sRX_RxBitCounter__16BIT_CONTROL_CONTROL_REG EQU CYREG_B1_UDB07_08_CTL
UART_net_BUART_sRX_RxBitCounter__16BIT_CONTROL_COUNT_REG EQU CYREG_B1_UDB07_08_CTL
UART_net_BUART_sRX_RxBitCounter__16BIT_COUNT_CONTROL_REG EQU CYREG_B1_UDB07_08_CTL
UART_net_BUART_sRX_RxBitCounter__16BIT_COUNT_COUNT_REG EQU CYREG_B1_UDB07_08_CTL
UART_net_BUART_sRX_RxBitCounter__16BIT_MASK_MASK_REG EQU CYREG_B1_UDB07_08_MSK
UART_net_BUART_sRX_RxBitCounter__16BIT_MASK_PERIOD_REG EQU CYREG_B1_UDB07_08_MSK
UART_net_BUART_sRX_RxBitCounter__16BIT_PERIOD_MASK_REG EQU CYREG_B1_UDB07_08_MSK
UART_net_BUART_sRX_RxBitCounter__16BIT_PERIOD_PERIOD_REG EQU CYREG_B1_UDB07_08_MSK
UART_net_BUART_sRX_RxBitCounter__CONTROL_AUX_CTL_REG EQU CYREG_B1_UDB07_ACTL
UART_net_BUART_sRX_RxBitCounter__CONTROL_REG EQU CYREG_B1_UDB07_CTL
UART_net_BUART_sRX_RxBitCounter__CONTROL_ST_REG EQU CYREG_B1_UDB07_ST_CTL
UART_net_BUART_sRX_RxBitCounter__COUNT_REG EQU CYREG_B1_UDB07_CTL
UART_net_BUART_sRX_RxBitCounter__COUNT_ST_REG EQU CYREG_B1_UDB07_ST_CTL
UART_net_BUART_sRX_RxBitCounter__MASK_CTL_AUX_CTL_REG EQU CYREG_B1_UDB07_MSK_ACTL
UART_net_BUART_sRX_RxBitCounter__PER_CTL_AUX_CTL_REG EQU CYREG_B1_UDB07_MSK_ACTL
UART_net_BUART_sRX_RxBitCounter__PERIOD_REG EQU CYREG_B1_UDB07_MSK
UART_net_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B1_UDB07_08_ACTL
UART_net_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_REG EQU CYREG_B1_UDB07_08_ST
UART_net_BUART_sRX_RxBitCounter_ST__MASK_REG EQU CYREG_B1_UDB07_MSK
UART_net_BUART_sRX_RxBitCounter_ST__MASK_ST_AUX_CTL_REG EQU CYREG_B1_UDB07_MSK_ACTL
UART_net_BUART_sRX_RxBitCounter_ST__PER_ST_AUX_CTL_REG EQU CYREG_B1_UDB07_MSK_ACTL
UART_net_BUART_sRX_RxBitCounter_ST__STATUS_AUX_CTL_REG EQU CYREG_B1_UDB07_ACTL
UART_net_BUART_sRX_RxBitCounter_ST__STATUS_CNT_REG EQU CYREG_B1_UDB07_ST_CTL
UART_net_BUART_sRX_RxBitCounter_ST__STATUS_CONTROL_REG EQU CYREG_B1_UDB07_ST_CTL
UART_net_BUART_sRX_RxBitCounter_ST__STATUS_REG EQU CYREG_B1_UDB07_ST
UART_net_BUART_sRX_RxShifter_u0__16BIT_A0_REG EQU CYREG_B1_UDB04_05_A0
UART_net_BUART_sRX_RxShifter_u0__16BIT_A1_REG EQU CYREG_B1_UDB04_05_A1
UART_net_BUART_sRX_RxShifter_u0__16BIT_D0_REG EQU CYREG_B1_UDB04_05_D0
UART_net_BUART_sRX_RxShifter_u0__16BIT_D1_REG EQU CYREG_B1_UDB04_05_D1
UART_net_BUART_sRX_RxShifter_u0__16BIT_DP_AUX_CTL_REG EQU CYREG_B1_UDB04_05_ACTL
UART_net_BUART_sRX_RxShifter_u0__16BIT_F0_REG EQU CYREG_B1_UDB04_05_F0
UART_net_BUART_sRX_RxShifter_u0__16BIT_F1_REG EQU CYREG_B1_UDB04_05_F1
UART_net_BUART_sRX_RxShifter_u0__A0_A1_REG EQU CYREG_B1_UDB04_A0_A1
UART_net_BUART_sRX_RxShifter_u0__A0_REG EQU CYREG_B1_UDB04_A0
UART_net_BUART_sRX_RxShifter_u0__A1_REG EQU CYREG_B1_UDB04_A1
UART_net_BUART_sRX_RxShifter_u0__D0_D1_REG EQU CYREG_B1_UDB04_D0_D1
UART_net_BUART_sRX_RxShifter_u0__D0_REG EQU CYREG_B1_UDB04_D0
UART_net_BUART_sRX_RxShifter_u0__D1_REG EQU CYREG_B1_UDB04_D1
UART_net_BUART_sRX_RxShifter_u0__DP_AUX_CTL_REG EQU CYREG_B1_UDB04_ACTL
UART_net_BUART_sRX_RxShifter_u0__F0_F1_REG EQU CYREG_B1_UDB04_F0_F1
UART_net_BUART_sRX_RxShifter_u0__F0_REG EQU CYREG_B1_UDB04_F0
UART_net_BUART_sRX_RxShifter_u0__F1_REG EQU CYREG_B1_UDB04_F1
UART_net_BUART_sRX_RxSts__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B1_UDB04_05_ACTL
UART_net_BUART_sRX_RxSts__16BIT_STATUS_REG EQU CYREG_B1_UDB04_05_ST
UART_net_BUART_sRX_RxSts__3__MASK EQU 0x08
UART_net_BUART_sRX_RxSts__3__POS EQU 3
UART_net_BUART_sRX_RxSts__4__MASK EQU 0x10
UART_net_BUART_sRX_RxSts__4__POS EQU 4
UART_net_BUART_sRX_RxSts__5__MASK EQU 0x20
UART_net_BUART_sRX_RxSts__5__POS EQU 5
UART_net_BUART_sRX_RxSts__MASK EQU 0x38
UART_net_BUART_sRX_RxSts__MASK_REG EQU CYREG_B1_UDB04_MSK
UART_net_BUART_sRX_RxSts__STATUS_AUX_CTL_REG EQU CYREG_B1_UDB04_ACTL
UART_net_BUART_sRX_RxSts__STATUS_REG EQU CYREG_B1_UDB04_ST
UART_net_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A0_REG EQU CYREG_B0_UDB06_07_A0
UART_net_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A1_REG EQU CYREG_B0_UDB06_07_A1
UART_net_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D0_REG EQU CYREG_B0_UDB06_07_D0
UART_net_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D1_REG EQU CYREG_B0_UDB06_07_D1
UART_net_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_DP_AUX_CTL_REG EQU CYREG_B0_UDB06_07_ACTL
UART_net_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F0_REG EQU CYREG_B0_UDB06_07_F0
UART_net_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F1_REG EQU CYREG_B0_UDB06_07_F1
UART_net_BUART_sTX_sCLOCK_TxBitClkGen__A0_A1_REG EQU CYREG_B0_UDB06_A0_A1
UART_net_BUART_sTX_sCLOCK_TxBitClkGen__A0_REG EQU CYREG_B0_UDB06_A0
UART_net_BUART_sTX_sCLOCK_TxBitClkGen__A1_REG EQU CYREG_B0_UDB06_A1
UART_net_BUART_sTX_sCLOCK_TxBitClkGen__D0_D1_REG EQU CYREG_B0_UDB06_D0_D1
UART_net_BUART_sTX_sCLOCK_TxBitClkGen__D0_REG EQU CYREG_B0_UDB06_D0
UART_net_BUART_sTX_sCLOCK_TxBitClkGen__D1_REG EQU CYREG_B0_UDB06_D1
UART_net_BUART_sTX_sCLOCK_TxBitClkGen__DP_AUX_CTL_REG EQU CYREG_B0_UDB06_ACTL
UART_net_BUART_sTX_sCLOCK_TxBitClkGen__F0_F1_REG EQU CYREG_B0_UDB06_F0_F1
UART_net_BUART_sTX_sCLOCK_TxBitClkGen__F0_REG EQU CYREG_B0_UDB06_F0
UART_net_BUART_sTX_sCLOCK_TxBitClkGen__F1_REG EQU CYREG_B0_UDB06_F1
UART_net_BUART_sTX_TxShifter_u0__16BIT_A0_REG EQU CYREG_B0_UDB07_08_A0
UART_net_BUART_sTX_TxShifter_u0__16BIT_A1_REG EQU CYREG_B0_UDB07_08_A1
UART_net_BUART_sTX_TxShifter_u0__16BIT_D0_REG EQU CYREG_B0_UDB07_08_D0
UART_net_BUART_sTX_TxShifter_u0__16BIT_D1_REG EQU CYREG_B0_UDB07_08_D1
UART_net_BUART_sTX_TxShifter_u0__16BIT_DP_AUX_CTL_REG EQU CYREG_B0_UDB07_08_ACTL
UART_net_BUART_sTX_TxShifter_u0__16BIT_F0_REG EQU CYREG_B0_UDB07_08_F0
UART_net_BUART_sTX_TxShifter_u0__16BIT_F1_REG EQU CYREG_B0_UDB07_08_F1
UART_net_BUART_sTX_TxShifter_u0__A0_A1_REG EQU CYREG_B0_UDB07_A0_A1
UART_net_BUART_sTX_TxShifter_u0__A0_REG EQU CYREG_B0_UDB07_A0
UART_net_BUART_sTX_TxShifter_u0__A1_REG EQU CYREG_B0_UDB07_A1
UART_net_BUART_sTX_TxShifter_u0__D0_D1_REG EQU CYREG_B0_UDB07_D0_D1
UART_net_BUART_sTX_TxShifter_u0__D0_REG EQU CYREG_B0_UDB07_D0
UART_net_BUART_sTX_TxShifter_u0__D1_REG EQU CYREG_B0_UDB07_D1
UART_net_BUART_sTX_TxShifter_u0__DP_AUX_CTL_REG EQU CYREG_B0_UDB07_ACTL
UART_net_BUART_sTX_TxShifter_u0__F0_F1_REG EQU CYREG_B0_UDB07_F0_F1
UART_net_BUART_sTX_TxShifter_u0__F0_REG EQU CYREG_B0_UDB07_F0
UART_net_BUART_sTX_TxShifter_u0__F1_REG EQU CYREG_B0_UDB07_F1
UART_net_BUART_sTX_TxSts__0__MASK EQU 0x01
UART_net_BUART_sTX_TxSts__0__POS EQU 0
UART_net_BUART_sTX_TxSts__1__MASK EQU 0x02
UART_net_BUART_sTX_TxSts__1__POS EQU 1
UART_net_BUART_sTX_TxSts__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B0_UDB07_08_ACTL
UART_net_BUART_sTX_TxSts__16BIT_STATUS_REG EQU CYREG_B0_UDB07_08_ST
UART_net_BUART_sTX_TxSts__2__MASK EQU 0x04
UART_net_BUART_sTX_TxSts__2__POS EQU 2
UART_net_BUART_sTX_TxSts__3__MASK EQU 0x08
UART_net_BUART_sTX_TxSts__3__POS EQU 3
UART_net_BUART_sTX_TxSts__MASK EQU 0x0F
UART_net_BUART_sTX_TxSts__MASK_REG EQU CYREG_B0_UDB07_MSK
UART_net_BUART_sTX_TxSts__STATUS_AUX_CTL_REG EQU CYREG_B0_UDB07_ACTL
UART_net_BUART_sTX_TxSts__STATUS_REG EQU CYREG_B0_UDB07_ST

; UART_net_IntClock
UART_net_IntClock__CFG0 EQU CYREG_CLKDIST_DCFG2_CFG0
UART_net_IntClock__CFG1 EQU CYREG_CLKDIST_DCFG2_CFG1
UART_net_IntClock__CFG2 EQU CYREG_CLKDIST_DCFG2_CFG2
UART_net_IntClock__CFG2_SRC_SEL_MASK EQU 0x07
UART_net_IntClock__INDEX EQU 0x02
UART_net_IntClock__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
UART_net_IntClock__PM_ACT_MSK EQU 0x04
UART_net_IntClock__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
UART_net_IntClock__PM_STBY_MSK EQU 0x04

; isr_timer
isr_timer__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
isr_timer__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
isr_timer__INTC_MASK EQU 0x04
isr_timer__INTC_NUMBER EQU 2
isr_timer__INTC_PRIOR_NUM EQU 7
isr_timer__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_2
isr_timer__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
isr_timer__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

; isr_rx_net
isr_rx_net__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
isr_rx_net__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
isr_rx_net__INTC_MASK EQU 0x02
isr_rx_net__INTC_NUMBER EQU 1
isr_rx_net__INTC_PRIOR_NUM EQU 7
isr_rx_net__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_1
isr_rx_net__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
isr_rx_net__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

; isr_tx_net
isr_tx_net__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
isr_tx_net__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
isr_tx_net__INTC_MASK EQU 0x08
isr_tx_net__INTC_NUMBER EQU 3
isr_tx_net__INTC_PRIOR_NUM EQU 7
isr_tx_net__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_3
isr_tx_net__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
isr_tx_net__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

; Miscellaneous
BCLK__BUS_CLK__HZ EQU 24000000
BCLK__BUS_CLK__KHZ EQU 24000
BCLK__BUS_CLK__MHZ EQU 24
CYDEV_CHIP_DIE_LEOPARD EQU 1
CYDEV_CHIP_DIE_PANTHER EQU 18
CYDEV_CHIP_DIE_PSOC4A EQU 10
CYDEV_CHIP_DIE_PSOC5LP EQU 17
CYDEV_CHIP_DIE_TMA4 EQU 2
CYDEV_CHIP_DIE_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_PSOC3 EQU 1
CYDEV_CHIP_FAMILY_PSOC4 EQU 2
CYDEV_CHIP_FAMILY_PSOC5 EQU 3
CYDEV_CHIP_FAMILY_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_USED EQU CYDEV_CHIP_FAMILY_PSOC5
CYDEV_CHIP_JTAG_ID EQU 0x2E133069
CYDEV_CHIP_MEMBER_3A EQU 1
CYDEV_CHIP_MEMBER_4A EQU 10
CYDEV_CHIP_MEMBER_4C EQU 15
CYDEV_CHIP_MEMBER_4D EQU 6
CYDEV_CHIP_MEMBER_4E EQU 4
CYDEV_CHIP_MEMBER_4F EQU 11
CYDEV_CHIP_MEMBER_4G EQU 2
CYDEV_CHIP_MEMBER_4H EQU 9
CYDEV_CHIP_MEMBER_4I EQU 14
CYDEV_CHIP_MEMBER_4J EQU 7
CYDEV_CHIP_MEMBER_4K EQU 8
CYDEV_CHIP_MEMBER_4L EQU 13
CYDEV_CHIP_MEMBER_4M EQU 12
CYDEV_CHIP_MEMBER_4N EQU 5
CYDEV_CHIP_MEMBER_4U EQU 3
CYDEV_CHIP_MEMBER_5A EQU 17
CYDEV_CHIP_MEMBER_5B EQU 16
CYDEV_CHIP_MEMBER_UNKNOWN EQU 0
CYDEV_CHIP_MEMBER_USED EQU CYDEV_CHIP_MEMBER_5B
CYDEV_CHIP_DIE_EXPECT EQU CYDEV_CHIP_MEMBER_USED
CYDEV_CHIP_DIE_ACTUAL EQU CYDEV_CHIP_DIE_EXPECT
CYDEV_CHIP_REV_LEOPARD_ES1 EQU 0
CYDEV_CHIP_REV_LEOPARD_ES2 EQU 1
CYDEV_CHIP_REV_LEOPARD_ES3 EQU 3
CYDEV_CHIP_REV_LEOPARD_PRODUCTION EQU 3
CYDEV_CHIP_REV_PANTHER_ES0 EQU 0
CYDEV_CHIP_REV_PANTHER_ES1 EQU 1
CYDEV_CHIP_REV_PANTHER_PRODUCTION EQU 1
CYDEV_CHIP_REV_PSOC4A_ES0 EQU 17
CYDEV_CHIP_REV_PSOC4A_PRODUCTION EQU 17
CYDEV_CHIP_REV_PSOC5LP_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5LP_PRODUCTION EQU 0
CYDEV_CHIP_REV_TMA4_ES EQU 17
CYDEV_CHIP_REV_TMA4_ES2 EQU 33
CYDEV_CHIP_REV_TMA4_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_3A_ES1 EQU 0
CYDEV_CHIP_REVISION_3A_ES2 EQU 1
CYDEV_CHIP_REVISION_3A_ES3 EQU 3
CYDEV_CHIP_REVISION_3A_PRODUCTION EQU 3
CYDEV_CHIP_REVISION_4A_ES0 EQU 17
CYDEV_CHIP_REVISION_4A_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4C_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4D_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4E_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256K EQU 0
CYDEV_CHIP_REVISION_4G_ES EQU 17
CYDEV_CHIP_REVISION_4G_ES2 EQU 33
CYDEV_CHIP_REVISION_4G_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4H_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4I_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4J_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4K_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4L_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4M_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4N_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4U_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_5A_ES0 EQU 0
CYDEV_CHIP_REVISION_5A_ES1 EQU 1
CYDEV_CHIP_REVISION_5A_PRODUCTION EQU 1
CYDEV_CHIP_REVISION_5B_ES0 EQU 0
CYDEV_CHIP_REVISION_5B_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_USED EQU CYDEV_CHIP_REVISION_5B_PRODUCTION
CYDEV_CHIP_REV_EXPECT EQU CYDEV_CHIP_REVISION_USED
CYDEV_CONFIG_FASTBOOT_ENABLED EQU 1
CYDEV_CONFIG_UNUSED_IO_AllowButWarn EQU 0
CYDEV_CONFIG_UNUSED_IO EQU CYDEV_CONFIG_UNUSED_IO_AllowButWarn
CYDEV_CONFIG_UNUSED_IO_AllowWithInfo EQU 1
CYDEV_CONFIG_UNUSED_IO_Disallowed EQU 2
CYDEV_CONFIGURATION_COMPRESSED EQU 1
CYDEV_CONFIGURATION_DMA EQU 0
CYDEV_CONFIGURATION_ECC EQU 1
CYDEV_CONFIGURATION_IMOENABLED EQU CYDEV_CONFIG_FASTBOOT_ENABLED
CYDEV_CONFIGURATION_MODE_COMPRESSED EQU 0
CYDEV_CONFIGURATION_MODE EQU CYDEV_CONFIGURATION_MODE_COMPRESSED
CYDEV_CONFIGURATION_MODE_DMA EQU 2
CYDEV_CONFIGURATION_MODE_UNCOMPRESSED EQU 1
CYDEV_DEBUG_ENABLE_MASK EQU 0x20
CYDEV_DEBUG_ENABLE_REGISTER EQU CYREG_MLOGIC_DEBUG
CYDEV_DEBUGGING_DPS_Disable EQU 3
CYDEV_DEBUGGING_DPS_JTAG_4 EQU 1
CYDEV_DEBUGGING_DPS_JTAG_5 EQU 0
CYDEV_DEBUGGING_DPS_SWD EQU 2
CYDEV_DEBUGGING_DPS_SWD_SWV EQU 6
CYDEV_DEBUGGING_DPS EQU CYDEV_DEBUGGING_DPS_SWD_SWV
CYDEV_DEBUGGING_ENABLE EQU 1
CYDEV_DEBUGGING_XRES EQU 0
CYDEV_DMA_CHANNELS_AVAILABLE EQU 24
CYDEV_ECC_ENABLE EQU 0
CYDEV_HEAP_SIZE EQU 0x80
CYDEV_INSTRUCT_CACHE_ENABLED EQU 1
CYDEV_INTR_RISING EQU 0x0000000B
CYDEV_IS_EXPORTING_CODE EQU 0
CYDEV_IS_IMPORTING_CODE EQU 0
CYDEV_PROJ_TYPE EQU 0
CYDEV_PROJ_TYPE_BOOTLOADER EQU 1
CYDEV_PROJ_TYPE_LAUNCHER EQU 5
CYDEV_PROJ_TYPE_LOADABLE EQU 2
CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER EQU 4
CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER EQU 3
CYDEV_PROJ_TYPE_STANDARD EQU 0
CYDEV_PROTECTION_ENABLE EQU 0
CYDEV_STACK_SIZE EQU 0x0800
CYDEV_USE_BUNDLED_CMSIS EQU 1
CYDEV_VARIABLE_VDDA EQU 0
CYDEV_VDDA_MV EQU 5000
CYDEV_VDDD_MV EQU 5000
CYDEV_VDDIO0_MV EQU 5000
CYDEV_VDDIO1_MV EQU 5000
CYDEV_VDDIO2_MV EQU 5000
CYDEV_VDDIO3_MV EQU 5000
CYDEV_VIO0_MV EQU 5000
CYDEV_VIO1_MV EQU 5000
CYDEV_VIO2_MV EQU 5000
CYDEV_VIO3_MV EQU 5000
CYIPBLOCK_ARM_CM3_VERSION EQU 0
CYIPBLOCK_P3_ANAIF_VERSION EQU 0
CYIPBLOCK_P3_CAPSENSE_VERSION EQU 0
CYIPBLOCK_P3_COMP_VERSION EQU 0
CYIPBLOCK_P3_DMA_VERSION EQU 0
CYIPBLOCK_P3_DRQ_VERSION EQU 0
CYIPBLOCK_P3_EMIF_VERSION EQU 0
CYIPBLOCK_P3_I2C_VERSION EQU 0
CYIPBLOCK_P3_LCD_VERSION EQU 0
CYIPBLOCK_P3_LPF_VERSION EQU 0
CYIPBLOCK_P3_PM_VERSION EQU 0
CYIPBLOCK_P3_TIMER_VERSION EQU 0
CYIPBLOCK_P3_USB_VERSION EQU 0
CYIPBLOCK_P3_VIDAC_VERSION EQU 0
CYIPBLOCK_P3_VREF_VERSION EQU 0
CYIPBLOCK_S8_GPIO_VERSION EQU 0
CYIPBLOCK_S8_IRQ_VERSION EQU 0
CYIPBLOCK_S8_SAR_VERSION EQU 0
CYIPBLOCK_S8_SIO_VERSION EQU 0
CYIPBLOCK_S8_UDB_VERSION EQU 0
DMA_CHANNELS_USED__MASK0 EQU 0x00000000
CYDEV_BOOTLOADER_ENABLE EQU 0
    ENDIF
    END
