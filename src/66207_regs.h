/* special function registers for 66201/66207 */
{
	i=0x06; makesfr("ACC"); makesfr("ACCH");
	i=0x10; makesfr("SBYCON"); makesfr("WDT");
	makesfr("PRPHF"); makesfr("STPACP");
	i=0x18; makesfr("IRQ"); makesfr("IRQH");
	makesfr("IE"); makesfr("IEH"); makesfr("EXION");
	i=0x20; makesfr("P0"); makesfr("P0IO"); makesfr("P1"); makesfr("P1IO");
	makesfr("P2"); makesfr("P2IO"); makesfr("P2SF");
	i=0x28; makesfr("P3"); makesfr("P3IO"); makesfr("P3SF");
	i=0x2c; makesfr("P4"); makesfr("P4IO"); makesfr("P4SF");
	makesfr("P5");
	makesfr("TM0"); makesfr("TM0H"); makesfr("TMR0"); makesfr("TMR0H");
	makesfr("TM1"); makesfr("TM1H"); makesfr("TMR1"); makesfr("TMR1H");
	makesfr("TM2"); makesfr("TM2H"); makesfr("TMR2"); makesfr("TMR2H");
	makesfr("TM3"); makesfr("TM3H"); makesfr("TMR3"); makesfr("TMR3H");
	makesfr("TCON0"); makesfr("TCON1"); makesfr("TCON2"); makesfr("TCON3");
	i=0x46; makesfr("TRNSIT");
	i=0x48; makesfr("STTM"); makesfr("STTMR"); makesfr("STTMC");
	i=0x4c; makesfr("SRTM"); makesfr("SRTMR"); makesfr("SRTMC");
	i=0x50; makesfr("STCON"); makesfr("STBUF");
	i=0x54; makesfr("SRCON"); makesfr("SRBUF"); makesfr("SRSTAT");
	i=0x58; makesfr("ADSCAN"); makesfr("ADSEL");
	i=0x60; makesfr("ADCR0"); makesfr("ADCR0H"); makesfr("ADCR1"); makesfr("ADCR1H");
	makesfr("ADCR2"); makesfr("ADCR2H"); makesfr("ADCR3"); makesfr("ADCR3H");
	makesfr("ADCR4"); makesfr("ADCR4H"); makesfr("ADCR5"); makesfr("ADCR5H");
	makesfr("ADCR6"); makesfr("ADCR6H"); makesfr("ADCR7"); makesfr("ADCR7H");
	makesfr("PWMC0"); makesfr("PWMC0H"); makesfr("PWMR0"); makesfr("PWMR0H");
	makesfr("PWMC1"); makesfr("PWMC1H"); makesfr("PWMR1"); makesfr("PWMR1H");
	makesfr("PWCON0");
	i=0x7a; makesfr("PWCON1");
}

