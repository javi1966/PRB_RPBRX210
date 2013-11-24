/***********************************************************************/
/*                                                                     */
/*  FILE        :PRB_RPBRX210.c                                        */
/*  DATE        :Wed, Jul 18, 2012                                     */
/*  DESCRIPTION :Main Program                                          */
/*  CPU TYPE    :RX210                                                 */
/*                                                                     */
/*  This file is generated by Renesas Project Generator (Ver.4.53).    */
/*  NOTE:THIS IS A TYPICAL EXAMPLE.                                    */
/*                                                                     */
/***********************************************************************/
#include    <machine.h> 
#include    "iodefine.h"                 


//#include "typedefine.h"
#ifdef __cplusplus
//#include <ios>                        // Remove the comment when you use ios
//_SINT ios_base::Init::init_cnt;       // Remove the comment when you use ios
#endif

void main(void);
#ifdef __cplusplus
extern "C" {
void abort(void);
}
#endif

//********************* DEFINE's *********************************




#define  LED0_PDR    PORT1.PDR.BIT.B7
#define  LED0        PORT1.PODR.BIT.B7
#define  LED0_ON     PORT1.PODR.BIT.B7 = 0
#define  LED0_OFF    PORT1.PODR.BIT.B7 = 1
#define  LED1_PDR    PORT1.PDR.BIT.B6
#define  LED1        PORT1.PODR.BIT.B6
#define  LED1_ON     PORT1.PODR.BIT.B6 = 0
#define  LED1_OFF    PORT1.PODR.BIT.B6 = 1
#define  LED2_PDR    PORT1.PDR.BIT.B5
#define  LED2        PORT1.PODR.BIT.B5
#define  LED2_ON     PORT1.PODR.BIT.B5 = 0
#define  LED2_OFF    PORT1.PODR.BIT.B5 = 1
#define  SW1_PDR     PORT3.PDR.BIT.B1
#define  SW1         PORT3.PIDR.BIT.B1

//************************** GLOBALES ***********************
unsigned char bFlag = 0;
//***************************** INT's *************************

#pragma interrupt (Excep_TMR0_OVI0(vect=176))
void Excep_TMR0_OVI0(void);

#pragma interrupt (Excep_TMR2_OVI2(vect=182))
void Excep_TMR2_OVI2(void);

#pragma interrupt (intMTU1ovf(vect=121))
void intMTU1ovf(void);


void Excep_TMR0_OVI0(void)
{
  
  
  
  LED0 ^= 1 ; //aprox 1 seg
  
 
}

//*************************************************
void Excep_TMR2_OVI2(void)
{
  static unsigned char	 count=0;
  
  if(++count == 63)  //aprox 500ms
  {
    LED2 ^= 1 ;
	count=0;
  }		
	
}

//******************************************************
void intMTU1ovf(void)
{
	
 static unsigned char cnt=0;
 
 if(++cnt == 20)  //aprox 100ms
  {
    LED1 ^= 1 ;   //2 seg
	cnt=0;
  }		
}	
//*******************************************************

//Cambia Duty Cycle
void CambiaDT_TMR1(unsigned char ratio)
{
	unsigned char reg = 0U;
	
	if (ratio > 100U)
	{
		ratio = 100U;
	}
	
	reg = TMR1.TCORA;
	reg = (reg + 1) * ratio / 100U;
	TMR1.TCORB = (unsigned char)reg;
}		





//*******************************************************************************

void main(void)
{
  int i;
  unsigned char valor;
  unsigned char cnt=0;	
	
   //Configura reloj a 32Mhz
           SYSTEM.HOCOPCR.BYTE = 0x00;   //Power on
           SYSTEM.HOCOCR.BYTE  = 0x00;   //HOCO ON
           SYSTEM.HOCOCR2.BYTE = 0x00;   //32Mhz
		   
           for(i=0; i<100; i++)                        
           {
            nop();
           }
	  
            //Todo a 32Mhz
           /* Set Peripheral Module Clock D  */
            SYSTEM.SCKCR.BIT.PCKD     = 0;
            /* Set Peripheral Module Clock B  */
            SYSTEM.SCKCR.BIT.PCKB     = 0;
            /* Set External Bus Clock to  */
            SYSTEM.SCKCR.BIT.BCK     = 0;
            /* Set System Clock to x  */
            SYSTEM.SCKCR.BIT.ICK     = 0;
            /* Set FlashIF Clock to x  */
            SYSTEM.SCKCR.BIT.FCK     = 0;
			
		
			
			while( SYSTEM.OPCCR.BIT.OPCMTSF == 1 );
			
		    SYSTEM.OPCCR.BIT.OPCM = 0x00; 
			SYSTEM.SCKCR3.WORD = 0x0100;   //HOCO on
			
			/* Enable access to System Registers */
           SYSTEM.PRCR.WORD = 0xA503;  
		   //LED0_PDR  = 1;  //Salidas  
		  // LED0      = 1;
		   LED1_PDR  = 1;    
		   LED1      = 1;
		   LED2_PDR  = 1;    
		   LED2      = 1;
		   SW1_PDR   = 0; //Entrada 
		   
		  
		  //Configura Timer0 y Timer 1 16bits
		    
		  /*
		  MSTP(TMR0) = 0;          //Activate TMR0,TMR1 unit
		  MSTP(TMR1) = 0; 
		  TMR1.TCCR.BIT.CSS = 1;   // 1/16Mhz * 65536 * 1/2???= aprox 1 Seg.
		  TMR1.TCCR.BIT.CKS = 1;  // PCLK/2
		  TMR0.TCCR.BIT.CSS = 3;  //cada TMR1 overflow
		  TMR0.TCR.BIT.CCLR = 1;
		  TMR0.TCR.BIT.OVIE = 1;
		  
		  IEN(TMR0,OVI0) = 1;	   //enable INT
		  IPR(TMR0,OVI0) = 2;      //prioridad 2
		  ICU.IR[176].BIT.IR = 0;  //flag a 0
		  
		  */
		  //Configura Timer 2 , 8 bits.
		  MSTP(TMR2) = 0;
		  TMR2.TCCR.BIT.CSS = 2;  // 255 * 1/32Mhz * 1/2?? 
	      TMR2.TCR.BIT.OVIE = 1; 
		  IEN(TMR2,OVI2) = 1;	   //enable INT
		  IPR(TMR2,OVI2) = 3;      //prioridad 3
		  ICU.IR[182].BIT.IR = 0;  //flag a 0 
		  
		  //Configura TMR1 para PWM
		 	  
		  MSTP(TMR1) = 0; //Activate TMR1 unit
		  TMR1.TCCR.BIT.CSS = 1;
		  TMR1.TCCR.BIT.CKS = 3;
		  TMR1.TCR.BIT.CCLR = 1;
		  TMR1.TCSR.BIT.OSA = 2;   
		  TMR1.TCSR.BIT.OSB = 1;
		  TMR1.TCORA = 0x55;      //Periodo
		  TMR1.TCORB = 0x05;      // Duty Cycle
		  
		  MPC.PWPR.BIT.B0WI = 0;  //pone P17 dedicado a TMO1
          MPC.PWPR.BIT.PFSWE = 1;
	      MPC.P17PFS.BIT.PSEL=5;  
		  PORT1.PMR.BIT.B7 = 1;
		 
		 //*************************
		 //Configura MTU1 free run con INT
		 
		 MSTP(MTU1) = 0;                  //habilita
		 MTU1.TCR.BIT.TPSC  = 0 ;          //PCLK
	     MTU1.TCR.BIT.CKEG  = 0 ;          //rising edge
		 MTU1.TCR.BIT.CCLR  = 1 ;          //TGRA
		 MTU1.TGRA          = 3225;
		 
		 MTU1.TIER.BIT.TGIEA = 1;         // INT ovf
		 IEN(MTU1,TGIA1) = 1;
	     IPR(MTU1,TGIA1)     = 7;         // prioridad baja
	     MTU.TSTR.BIT.CST1   = 1;          // Start TCNT
		         
		 
		 //**************************** 
		  initAD();
		  initPWM_MTU0();
		  
		  	
      while(1)
	  {
		  if(SW1 == 0)
		  {
		    cnt += 5;
			if(cnt > 99)
			    cnt=0;
			delay_ms(500);
			/* Disable Interrupts */
             
		  }
		  
		  valor=valorAD();
		  CambiaDT_TMR1(valor);
		  CambiaDT_MTU0(cnt); 
		 // delay_ms(1000);
		  
	  }//fin while	  			
   
   
}




//*****************************************************************************

#ifdef __cplusplus
void abort(void)
{

}
#endif
