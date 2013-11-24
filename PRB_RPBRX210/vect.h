/***********************************************************************/
/*                                                                     */
/*  FILE        :vect.h                                                */
/*  DATE        :Wed, Jul 18, 2012                                     */
/*  DESCRIPTION :Definition of Vector                                  */
/*  CPU TYPE    :RX210                                                 */
/*                                                                     */
/*  This file is generated by Renesas Project Generator (Ver.4.53).    */
/*  NOTE:THIS IS A TYPICAL EXAMPLE.                                    */
/*                                                                     */
/***********************************************************************/
/************************************************************************
*
* Device     : RX/RX200/RX210
*
* File Name  : vect.h
*
* Abstract   : Definition of Vector.
*
* History    : 0.10  (2010-10-06)  [Hardware Manual Revision : 0.11] 
*            : 0.11  (2011-06-20)  [Hardware Manual Revision : 0.50]
*
* NOTE       : THIS IS A TYPICAL EXAMPLE.
*
*  Copyright (C) 2010 (2011) Renesas Electronics Corporation.
*  and Renesas Solutions Corp.
*
********************************************************************+++*/

// Exception(Supervisor Instruction)
#pragma interrupt (Excep_SuperVisorInst)
void Excep_SuperVisorInst(void);

// Exception(Undefined Instruction)
#pragma interrupt (Excep_UndefinedInst)
void Excep_UndefinedInst(void);

// Exception(Floating Point)
#pragma interrupt (Excep_FloatingPoint)
void Excep_FloatingPoint(void);

// NMI
#pragma interrupt (NonMaskableInterrupt)
void NonMaskableInterrupt(void);

// Dummy
#pragma interrupt (Dummy)
void Dummy(void);

// BRK
#pragma interrupt (Excep_BRK(vect=0))
void Excep_BRK(void);

// vector  1 reserved
// vector  2 reserved
// vector  3 reserved
// vector  4 reserved
// vector  5 reserved
// vector  6 reserved
// vector  7 reserved
// vector  8 reserved
// vector  9 reserved
// vector 10 reserved
// vector 11 reserved
// vector 12 reserved
// vector 13 reserved
// vector 14 reserved
// vector 15 reserved

// BUSERR
#pragma interrupt (Excep_BUSERR(vect=16))
void Excep_BUSERR(void);

// vector 17 reserved
// vector 18 reserved
// vector 19 reserved
// vector 20 reserved

// FCU_FCUERR
#pragma interrupt (Excep_FCU_FCUERR(vect=21))
void Excep_FCU_FCUERR(void);

// vector 22 reserved

// FCU_FRDYI
#pragma interrupt (Excep_FCU_FRDYI(vect=23))
void Excep_FCU_FRDYI(void);

// vector 24 reserved
// vector 25 reserved
// vector 26 reserved

// ICU_SWINT
#pragma interrupt (Excep_ICU_SWINT(vect=27))
void Excep_ICU_SWINT(void);

// CMTU0_CMT0
#pragma interrupt (Excep_CMTU0_CMT0(vect=28))
void Excep_CMTU0_CMT0(void);

// CMTU0_CMT1
#pragma interrupt (Excep_CMTU0_CMT1(vect=29))
void Excep_CMTU0_CMT1(void);

// CMTU1_CMT2
#pragma interrupt (Excep_CMTU1_CMT2(vect=30))
void Excep_CMTU1_CMT2(void);

// CMTU1_CMT3
#pragma interrupt (Excep_CMTU1_CMT3(vect=31))
void Excep_CMTU1_CMT3(void);

// CAC_FERRF
#pragma interrupt (Excep_CAC_FERRF(vect=32))
void Excep_CAC_FERRF(void);

// CAC_MENDF
#pragma interrupt (Excep_CAC_MENDF(vect=33))
void Excep_CAC_MENDF(void);

// CAC_OVFF
#pragma interrupt (Excep_CAC_OVFF(vect=34))
void Excep_CAC_OVFF(void);

// vector 35 reserved
// vector 36 reserved
// vector 37 reserved
// vector 38 reserved
// vector 39 reserved
// vector 40 reserved
// vector 41 reserved
// vector 42 reserved
// vector 43 reserved

// RSPI0_SPEI0
#pragma interrupt (Excep_RSPI0_SPEI0(vect=44))
void Excep_RSPI0_SPEI0(void);

// RSPI0_SPRI0
#pragma interrupt (Excep_RSPI0_SPRI0(vect=45))
void Excep_RSPI0_SPRI0(void);

// RSPI0_SPTI0
#pragma interrupt (Excep_RSPI0_SPTI0(vect=46))
void Excep_RSPI0_SPTI0(void);

// RSPI0_SPII0
#pragma interrupt (Excep_RSPI0_SPII0(vect=47))
void Excep_RSPI0_SPII0(void);

// vector 48 reserved
// vector 49 reserved
// vector 50 reserved
// vector 51 reserved
// vector 52 reserved
// vector 53 reserved
// vector 54 reserved
// vector 55 reserved
// vector 56 reserved

// DOC_DOPCF
#pragma interrupt (Excep_DOC_DOPCF(vect=57))
void Excep_DOC_DOPCF(void);

// COMPB1
#pragma interrupt (Excep_COMPB1(vect=58))
void Excep_COMPB1(void);

// COMPB2
#pragma interrupt (Excep_COMPB2(vect=59))
void Excep_COMPB2(void);

// vector 60 reserved
// vector 61 reserved
// vector 62 reserved

// RTC_COUNTUP
#pragma interrupt (Excep_RTC_COUNTUP(vect=63))
void Excep_RTC_COUNTUP(void);

// IRQ0
#pragma interrupt (Excep_IRQ0(vect=64))
void Excep_IRQ0(void);

// IRQ1
#pragma interrupt (Excep_IRQ1(vect=65))
void Excep_IRQ1(void);

// IRQ2
#pragma interrupt (Excep_IRQ2(vect=66))
void Excep_IRQ2(void);

// IRQ3
#pragma interrupt (Excep_IRQ3(vect=67))
void Excep_IRQ3(void);

// IRQ4
#pragma interrupt (Excep_IRQ4(vect=68))
void Excep_IRQ4(void);

// IRQ5
#pragma interrupt (Excep_IRQ5(vect=69))
void Excep_IRQ5(void);

// IRQ6
#pragma interrupt (Excep_IRQ6(vect=70))
void Excep_IRQ6(void);

// IRQ7
#pragma interrupt (Excep_IRQ7(vect=71))
void Excep_IRQ7(void);

// vector 72 reserved
// vector 73 reserved
// vector 74 reserved
// vector 75 reserved
// vector 76 reserved
// vector 77 reserved
// vector 78 reserved
// vector 79 reserved
// vector 80 reserved
// vector 81 reserved
// vector 82 reserved
// vector 83 reserved
// vector 84 reserved
// vector 85 reserved
// vector 86 reserved
// vector 87 reserved

// LVD1
#pragma interrupt (Excep_LVD1(vect=88))
void Excep_LVD1(void);

// LVD2
#pragma interrupt (Excep_LVD2(vect=89))
void Excep_LVD2(void);

// vector 90 reserved
// vector 91 reserved


// RTC_ALARM
#pragma interrupt (Excep_RTC_ALARM(vect=92))
void Excep_RTC_ALARM(void);

// RTC_PRD
#pragma interrupt (Excep_RTC_PRD(vect=93))
void Excep_RTC_PRD(void);

// vector 94 reserved
// vector 95 reserved
// vector 96 reserved
// vector 97 reserved

// AD0_ADI0
#pragma interrupt (Excep_AD0_ADI0(vect=98))
void Excep_AD0_ADI0(void);

// vector 99 reserved
// vector 100 reserved
// vector 101 reserved

// S12AD0_S12ADI0
#pragma interrupt (Excep_S12AD0_S12ADI0(vect=102))
void Excep_S12AD0_S12ADI0(void);

// S12AD0_GBADI
#pragma interrupt (Excep_S12AD0_GBADI(vect=103))
void Excep_S12AD0_GBADI(void);

// vector 104 reserved
// vector 105 reserved

// ELC_ELSR18I
#pragma interrupt (Excep_ELC_ELSR18I(vect=106))
void Excep_ELC_ELSR18I(void);

// ELC_ELSR19I
#pragma interrupt (Excep_ELC_ELSR19I(vect=107))
void Excep_ELC_ELSR19I(void);

// vector 108 reserved
// vector 109 reserved
// vector 110 reserved
// vector 111 reserved
// vector 112 reserved
// vector 113 reserved

// MTU20_TGIA0
#pragma interrupt (Excep_MTU20_TGIA0(vect=114))
void Excep_MTU20_TGIA0(void);

// MTU20_TGIB0
#pragma interrupt (Excep_MTU20_TGIB0(vect=115))
void Excep_MTU20_TGIB0(void);

// MTU20_TGIC0
#pragma interrupt (Excep_MTU20_TGIC0(vect=116))
void Excep_MTU20_TGIC0(void);

// MTU20_TGID0
#pragma interrupt (Excep_MTU20_TGID0(vect=117))
void Excep_MTU20_TGID0(void);

// MTU20_TGIV0
#pragma interrupt (Excep_MTU20_TGIV0(vect=118))
void Excep_MTU20_TGIV0(void);

// MTU20_TGIE0
#pragma interrupt (Excep_MTU20_TGIE0(vect=119))
void Excep_MTU20_TGIE0(void);

// MTU20_TGIF0
#pragma interrupt (Excep_MTU20_TGIF0(vect=120))
void Excep_MTU20_TGIF0(void);

// MTU21_TGIA1
#pragma interrupt (Excep_MTU21_TGIA1(vect=121))
void Excep_MTU21_TGIA1(void);

// MTU21_TGIB1
#pragma interrupt (Excep_MTU21_TGIB1(vect=122))
void Excep_MTU21_TGIB1(void);

// MTU21_TGIV1
#pragma interrupt (Excep_MTU21_TGIV1(vect=123))
void Excep_MTU21_TGIV1(void);

// MTU21_TGIU1
#pragma interrupt (Excep_MTU21_TGIU1(vect=124))
void Excep_MTU21_TGIU1(void);

// MTU22_TGIA2
#pragma interrupt (Excep_MTU22_TGIA2(vect=125))
void Excep_MTU22_TGIA2(void);

// MTU22_TGIB2
#pragma interrupt (Excep_MTU22_TGIB2(vect=126))
void Excep_MTU22_TGIB2(void);

// MTU22_TGIV2
#pragma interrupt (Excep_MTU22_TGIV2(vect=127))
void Excep_MTU22_TGIV2(void);

// MTU22_TGIU2
#pragma interrupt (Excep_MTU22_TGIU2(vect=128))
void Excep_MTU22_TGIU2(void);

// MTU23_TGIA3
#pragma interrupt (Excep_MTU23_TGIA3(vect=129))
void Excep_MTU23_TGIA3(void);

// MTU23_TGIB3
#pragma interrupt (Excep_MTU23_TGIB3(vect=130))
void Excep_MTU23_TGIB3(void);

// MTU23_TGIC3
#pragma interrupt (Excep_MTU23_TGIC3(vect=131))
void Excep_MTU23_TGIC3(void);

// MTU23_TGID3
#pragma interrupt (Excep_MTU23_TGID3(vect=132))
void Excep_MTU23_TGID3(void);

// MTU23_TGIV3
#pragma interrupt (Excep_MTU23_TGIV3(vect=133))
void Excep_MTU23_TGIV3(void);

// MTU24_TGIA4
#pragma interrupt (Excep_MTU24_TGIA4(vect=134))
void Excep_MTU24_TGIA4(void);

// MTU24_TGIB4
#pragma interrupt (Excep_MTU24_TGIB4(vect=135))
void Excep_MTU24_TGIB4(void);

// MTU24_TGIC4
#pragma interrupt (Excep_MTU24_TGIC4(vect=136))
void Excep_MTU24_TGIC4(void);

// MTU24_TGID4
#pragma interrupt (Excep_MTU24_TGID4(vect=137))
void Excep_MTU24_TGID4(void);

// MTU24_TGIV4
#pragma interrupt (Excep_MTU24_TGIV4(vect=138))
void Excep_MTU24_TGIV4(void);

// MTU25_TGIU5
#pragma interrupt (Excep_MTU25_TGIU5(vect=139))
void Excep_MTU25_TGIU5(void);

// MTU25_TGIV5
#pragma interrupt (Excep_MTU25_TGIV5(vect=140))
void Excep_MTU25_TGIV5(void);

// MTU25_TGIW5
#pragma interrupt (Excep_MTU25_TGIW5(vect=141))
void Excep_MTU25_TGIW5(void);

// vector 142 reserved
// vector 143 reserved
// vector 144 reserved
// vector 145 reserved
// vector 146 reserved
// vector 147 reserved
// vector 148 reserved
// vector 149 reserved
// vector 150 reserved
// vector 151 reserved
// vector 152 reserved
// vector 153 reserved
// vector 154 reserved
// vector 155 reserved
// vector 156 reserved
// vector 157 reserved
// vector 158 reserved
// vector 159 reserved
// vector 160 reserved
// vector 161 reserved
// vector 162 reserved
// vector 163 reserved
// vector 164 reserved
// vector 165 reserved
// vector 166 reserved
// vector 167 reserved
// vector 168 reserved
// vector 169 reserved

// POE2_OEI1
#pragma interrupt (Excep_POE2_OEI1(vect=170))
void Excep_POE2_OEI1(void);

// POE2_OEI2
#pragma interrupt (Excep_POE2_OEI2(vect=171))
void Excep_POE2_OEI2(void);

// vector 172 reserved
// vector 173 reserved

// TMR0_CMIA0
#pragma interrupt (Excep_TMR0_CMIA0(vect=174))
void Excep_TMR0_CMIA0(void);

// TMR0_CMIB0
#pragma interrupt (Excep_TMR0_CMIB0(vect=175))
void Excep_TMR0_CMIB0(void);

// TMR0_OVI0
#pragma interrupt (Excep_TMR0_OVI0(vect=176))
void Excep_TMR0_OVI0(void);

// TMR1_CMIA1
#pragma interrupt (Excep_TMR1_CMIA1(vect=177))
void Excep_TMR1_CMIA1(void);

// TMR1_CMIB1
#pragma interrupt (Excep_TMR1_CMIB1(vect=178))
void Excep_TMR1_CMIB1(void);

// TMR1_OVI1
#pragma interrupt (Excep_TMR1_OVI1(vect=179))
void Excep_TMR1_OVI1(void);

// TMR2_CMIA2
#pragma interrupt (Excep_TMR2_CMIA2(vect=180))
void Excep_TMR2_CMIA2(void);

// TMR2_CMIB2
#pragma interrupt (Excep_TMR2_CMIB2(vect=181))
void Excep_TMR2_CMIB2(void);

// TMR2_OVI2
#pragma interrupt (Excep_TMR2_OVI2(vect=182))
void Excep_TMR2_OVI2(void);

// TMR3_CMIA3
#pragma interrupt (Excep_TMR3_CMIA3(vect=183))
void Excep_TMR3_CMIA3(void);

// TMR3_CMIB3
#pragma interrupt (Excep_TMR3_CMIB3(vect=184))
void Excep_TMR3_CMIB3(void);

// TMR3_OVI3
#pragma interrupt (Excep_TMR3_OVI3(vect=185))
void Excep_TMR3_OVI3(void);

// vector 186 reserved
// vector 187 reserved
// vector 188 reserved
// vector 189 reserved
// vector 190 reserved
// vector 191 reserved
// vector 192 reserved
// vector 193 reserved
// vector 194 reserved
// vector 195 reserved
// vector 196 reserved
// vector 197 reserved

// DMAC_DMAC0I
#pragma interrupt (Excep_DMAC_DMAC0I(vect=198))
void Excep_DMAC_DMAC0I(void);

// DMAC_DMAC1I
#pragma interrupt (Excep_DMAC_DMAC1I(vect=199))
void Excep_DMAC_DMAC1I(void);

// DMAC_DMAC2I
#pragma interrupt (Excep_DMAC_DMAC2I(vect=200))
void Excep_DMAC_DMAC2I(void);

// DMAC_DMAC3I
#pragma interrupt (Excep_DMAC_DMAC3I(vect=201))
void Excep_DMAC_DMAC3I(void);

// vector 202 reserved
// vector 203 reserved
// vector 204 reserved
// vector 205 reserved
// vector 206 reserved
// vector 207 reserved
// vector 208 reserved
// vector 209 reserved
// vector 210 reserved
// vector 211 reserved
// vector 212 reserved
// vector 213 reserved

// SCI0_ERI0
#pragma interrupt (Excep_SCI0_ERI0(vect=214))
void Excep_SCI0_ERI0(void);

// SCI0_RXI0
#pragma interrupt (Excep_SCI0_RXI0(vect=215))
void Excep_SCI0_RXI0(void);

// SCI0_TXI0
#pragma interrupt (Excep_SCI0_TXI0(vect=216))
void Excep_SCI0_TXI0(void);

// SCI0_TEI0
#pragma interrupt (Excep_SCI0_TEI0(vect=217))
void Excep_SCI0_TEI0(void);

// SCI1_ERI1
#pragma interrupt (Excep_SCI1_ERI1(vect=218))
void Excep_SCI1_ERI1(void);

// SCI1_RXI1
#pragma interrupt (Excep_SCI1_RXI1(vect=219))
void Excep_SCI1_RXI1(void);

// SCI1_TXI1
#pragma interrupt (Excep_SCI1_TXI1(vect=220))
void Excep_SCI1_TXI1(void);

// SCI1_TEI1
#pragma interrupt (Excep_SCI1_TEI1(vect=221))
void Excep_SCI1_TEI1(void);

// SCI5_ERI5
#pragma interrupt (Excep_SCI5_ERI5(vect=222))
void Excep_SCI5_ERI5(void);

// SCI5_RXI5
#pragma interrupt (Excep_SCI5_RXI5(vect=223))
void Excep_SCI5_RXI5(void);

// SCI5_TXI5
#pragma interrupt (Excep_SCI25_TXI5(vect=224))
void Excep_SCI5_TXI5(void);

// SCI5_TEI5
#pragma interrupt (Excep_SCI5_TEI5(vect=225))
void Excep_SCI5_TEI5(void);

// SCI6_ERI6
#pragma interrupt (Excep_SCI6_ERI6(vect=226))
void Excep_SCI6_ERI6(void);

// SCI6_RXI6
#pragma interrupt (Excep_SCI6_RXI6(vect=227))
void Excep_SCI6_RXI6(void);

// SCI6_TXI6
#pragma interrupt (Excep_SCI6_TXI6(vect=228))
void Excep_SCI6_TXI6(void);

// SCI6_TEI63
#pragma interrupt (Excep_SCI6_TEI6(vect=229))
void Excep_SCI6_TEI6(void);

// SCI8_ERI8
#pragma interrupt (Excep_SCI8_ERI8(vect=230))
void Excep_SCI8_ERI8(void);

// SCI8_RXI8
#pragma interrupt (Excep_SCI8_RXI8(vect=231))
void Excep_SCI8_RXI8(void);

// SCI8_TXI8
#pragma interrupt (Excep_SCI8_TXI8(vect=232))
void Excep_SCI8_TXI8(void);

// SCI8_TEI8
#pragma interrupt (Excep_SCI8_TEI8(vect=233))
void Excep_SCI8_TEI8(void);

// SCI9_ERI9
#pragma interrupt (Excep_SCI9_ERI9(vect=234))
void Excep_SCI9_ERI9(void);

// SCI9_RXI9
#pragma interrupt (Excep_SCI9_RXI9(vect=235))
void Excep_SCI9_RXI9(void);

// SCI9_TXI9
#pragma interrupt (Excep_SCI9_TXI9(vect=236))
void Excep_SCI9_TXI9(void);

// SCI9_TEI9
#pragma interrupt (Excep_SCI9_TEI9(vect=237))
void Excep_SCI9_TEI9(void);

// SCI12_ERI12
#pragma interrupt (Excep_SCI12_ERI12(vect=238))
void Excep_SCI12_ERI12(void);

// SCI12_RXI12
#pragma interrupt (Excep_SCI12_RXI12(vect=239))
void Excep_SCI12_RXI12(void);

// SCI12_TXI12
#pragma interrupt (Excep_SCI12_TXI12(vect=240))
void Excep_SCI12_TXI12(void);

// SCI12_TEI12
#pragma interrupt (Excep_SCI12_TEI12(vect=241))
void Excep_SCI12_TEI12(void);

// SCI12_SCIX0
#pragma interrupt (Excep_SCI12_SCIX0(vect=242))
void Excep_SCI12_SCIX0(void);

// SCI12_SCIX1
#pragma interrupt (Excep_SCI12_SCIX1(vect=243))
void Excep_SCI12_SCIX1(void);

// SCI12_SCIX2
#pragma interrupt (Excep_SCI12_SCIX2(vect=244))
void Excep_SCI12_SCIX2(void);

// SCI12_SCIX3
#pragma interrupt (Excep_SCI12_SCIX3(vect=245))
void Excep_SCI12_SCIX3(void);

// RIIC0_EEI0
#pragma interrupt (Excep_RIIC0_EEI0(vect=246))
void Excep_RIIC0_EEI0(void);

// RIIC0_RXI0
#pragma interrupt (Excep_RIIC0_RXI0(vect=247))
void Excep_RIIC0_RXI0(void);

// RIIC0_TXI0
#pragma interrupt (Excep_RIIC0_TXI0(vect=248))
void Excep_RIIC0_TXI0(void);

// RIIC0_TEI0
#pragma interrupt (Excep_RIIC0_TEI0(vect=249))
void Excep_RIIC0_TEI0(void);

// vector 250 reserved
// vector 251 reserved
// vector 252 reserved
// vector 253 reserved
// vector 254 reserved
// vector 255 reserved

//;<<VECTOR DATA START (POWER ON RESET)>>
//;Power On Reset PC
extern void PowerON_Reset_PC(void);                                                                                                                
//;<<VECTOR DATA END (POWER ON RESET)>>
