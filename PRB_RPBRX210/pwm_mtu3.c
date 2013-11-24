#include "iodefine.h"
#include "pwm_mtu3.h"


void initPWM_MTU0()
{
	
	MSTP(MTU0) = 0;                 //enable MTU3
	MTU0.TCR.BIT.CCLR  =2 ;          //TCNT cleared by TGRB compare match/input capture
	MTU0.TCR.BIT.TPSC  =1 ;          //PCLK/4
	MTU0.TCR.BIT.CKEG  =0 ;          //rising edge
	
	MTU0.TMDR.BIT.MD   =3 ;          //PWM 2
	MTU0.TIORH.BIT.IOA =2 ;          //ini a 0 ,match a 1 TGRA
	MTU0.TGRB          = 0x55;       //Period
	MTU0.TGRA          = 0x45;       //Duty cicle
	
	
	MTU0.TIER.BIT.TGIEB = 1;         // INT cada periodo
	IEN(MTU0,TGIB0)     = 1; 
	IPR(MTU0,TGIB0)     = 1;         // prioridad baja
	MTU.TSTR.BIT.CST0   = 1;          // Start TCNT
	
	MPC.PWPR.BIT.B0WI = 0;   //pone P34 dedicado a MTIOC0B
    MPC.PWPR.BIT.PFSWE = 1;
    MPC.P34PFS.BIT.PSEL=1;  
    PORT3.PMR.BIT.B4 = 1;
	
	
}
//*****************************************************************
//Cambia Duty Cycle
void CambiaDT_MTU0(unsigned char ratio)
{
	unsigned char reg = 0U;
	
	if (ratio > 100U)
	{
		ratio = 100U;
	}
	
	reg = MTU0.TGRB;
	reg = (reg + 1) * ratio / 100U;
	MTU0.TGRA = (unsigned char)reg;
}		
//**************************************************************************
#pragma interrupt MTU0Interrupt(vect=VECT_MTU0_TGIB0)
void MTU0Interrupt(void)
{
	static int count=0;
	count++;
	/*
    if (globalBeepDuration > 0) globalBeepDuration--;

// Fade out quickly
    if (globalBeepDuration == 4) MTU8.TGRA = 10;
    else if (globalBeepDuration == 1) MTU8.TGRA = 0;
    else if (globalBeepDuration == 0)
    {
        MTU8.TGRA = 0;    
        MTUB.TSTR.BIT.CST2 = 0;
    }
	
	*/
}	