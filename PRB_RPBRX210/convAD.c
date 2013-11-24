#include "iodefine.h"
#include "convAD.h"

//*********************************************************************

void initAD(void)
{
	MSTP(S12AD) = 0x00;               //enable AD
	S12AD.ADCSR.BIT.ADCS = 0x00;      //single scan mode
	S12AD.ADCSR.BIT.TRGE = 0x00;      //SW trigger
	S12AD.ADCER.BIT.ADRFMT = 0x00;    //LSB end
	S12AD.ADANSA.BIT.ANSA0 = 1;       //ANSA000
	S12AD.ADCSR.BIT.ADIE = 0x00;      //DIsable INT
	MPC.P40PFS.BIT.ASEL = 1;          //Port 4.0 ANA
	PORT4.PMR.BIT.B0 = 1;             //Desabilita P4.0
	
	
	
}

//***********************************************************************
unsigned char valorAD()
{
	

	
   S12AD.ADCSR.BIT.ADST = 1;  //AD ON	
	
   while (S12AD.ADCSR.BIT.ADST );
   
   return  (unsigned char)((S12AD.ADDR0 * (MAX - MIN + 1) / 4096) + MIN);
   
   
	
}		