	| ADC R_A ',' '#' expr NL { u8 instr[3] = {0x96,0,0}; _SET16(instr,1,$5); emit(instr,3); }
	| ADC R_A ',' R_er0 NL { u8 instr[1] = {0x18};  emit(instr,1); }
	| ADC R_A ',' R_er1 NL { u8 instr[1] = {0x19};  emit(instr,1); }
	| ADC R_A ',' R_er2 NL { u8 instr[1] = {0x1A};  emit(instr,1); }
	| ADC R_A ',' R_er3 NL { u8 instr[1] = {0x1B};  emit(instr,1); }
	| ADC R_A ',' R_DP NL { u8 instr[2] = {0x92,0x92};  emit(instr,2); }
	| ADC R_A ',' R_X1 NL { u8 instr[2] = {0x90,0x92};  emit(instr,2); }
	| ADC R_A ',' R_X2 NL { u8 instr[2] = {0x91,0x92};  emit(instr,2); }
	| ADC R_A ',' R_USP NL { u8 instr[2] = {0xA1,0x92};  emit(instr,2); }
	| ADC R_A ',' R_SSP NL { u8 instr[2] = {0xA0,0x92};  emit(instr,2); }
	| ADC R_A ',' R_LRB NL { u8 instr[2] = {0xA4,0x92};  emit(instr,2); }
	| ADC R_A ',' OFFSET expr NL { u8 instr[2] = {0x97,0}; instr[1] = $5; emit(instr,2); }
	| ADC R_A ',' expr NL { u8 instr[3] = {0xB5,0,0x92}; instr[1] = $4; emit(instr,3); }
	| ADC R_A ',' '[' R_DP ']' NL { u8 instr[2] = {0xB2,0x92};  emit(instr,2); }
	| ADC R_A ',' expr '[' R_USP ']' NL { u8 instr[3] = {0xB3,0,0x92}; instr[1] = $4; emit(instr,3); }
	| ADC R_A ',' expr '[' R_X1 ']' NL { u8 instr[4] = {0xB0,0,0,0x92}; _SET16(instr,1,$4); emit(instr,4); }
	| ADC R_A ',' expr '[' R_X2 ']' NL { u8 instr[4] = {0xB1,0,0,0x92}; _SET16(instr,1,$4); emit(instr,4); }
	| ADC R_er0 ',' OFFSET expr NL { u8 instr[3] = {0x44,0x93,0}; instr[2] = $5; emit(instr,3); }
	| ADC R_er1 ',' OFFSET expr NL { u8 instr[3] = {0x45,0x93,0}; instr[2] = $5; emit(instr,3); }
	| ADC R_er2 ',' OFFSET expr NL { u8 instr[3] = {0x46,0x93,0}; instr[2] = $5; emit(instr,3); }
	| ADC R_er3 ',' OFFSET expr NL { u8 instr[3] = {0x47,0x93,0}; instr[2] = $5; emit(instr,3); }
	| ADC R_DP ',' OFFSET expr NL { u8 instr[3] = {0x92,0x93,0}; instr[2] = $5; emit(instr,3); }
	| ADC R_X1 ',' OFFSET expr NL { u8 instr[3] = {0x90,0x93,0}; instr[2] = $5; emit(instr,3); }
	| ADC R_X2 ',' OFFSET expr NL { u8 instr[3] = {0x91,0x93,0}; instr[2] = $5; emit(instr,3); }
	| ADC R_USP ',' OFFSET expr NL { u8 instr[3] = {0xA1,0x93,0}; instr[2] = $5; emit(instr,3); }
	| ADC R_SSP ',' OFFSET expr NL { u8 instr[3] = {0xA0,0x93,0}; instr[2] = $5; emit(instr,3); }
	| ADC OFFSET expr ',' OFFSET expr NL { u8 instr[4] = {0xB4,0,0x93,0}; instr[1] = $3; instr[3] = $6; emit(instr,4); }
	| ADC expr ',' OFFSET expr NL { u8 instr[4] = {0xB5,0,0x93,0}; instr[1] = $2; instr[3] = $5; emit(instr,4); }
	| ADC '[' R_DP ']' ',' OFFSET expr NL { u8 instr[3] = {0xB2,0x93,0}; instr[2] = $7; emit(instr,3); }
	| ADC expr '[' R_USP ']' ',' OFFSET expr NL { u8 instr[4] = {0xB3,0,0x93,0}; instr[1] = $2; instr[3] = $8; emit(instr,4); }
	| ADC expr '[' R_X1 ']' ',' OFFSET expr NL { u8 instr[5] = {0xB0,0,0,0x93,0}; _SET16(instr,1,$2); instr[4] = $8; emit(instr,5); }
	| ADC expr '[' R_X2 ']' ',' OFFSET expr NL { u8 instr[5] = {0xB1,0,0,0x93,0}; _SET16(instr,1,$2); instr[4] = $8; emit(instr,5); }
	| ADC R_er0 ',' '#' expr NL { u8 instr[4] = {0x44,0x90,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| ADC R_er1 ',' '#' expr NL { u8 instr[4] = {0x45,0x90,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| ADC R_er2 ',' '#' expr NL { u8 instr[4] = {0x46,0x90,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| ADC R_er3 ',' '#' expr NL { u8 instr[4] = {0x47,0x90,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| ADC R_DP ',' '#' expr NL { u8 instr[4] = {0x92,0x90,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| ADC R_X1 ',' '#' expr NL { u8 instr[4] = {0x90,0x90,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| ADC R_X2 ',' '#' expr NL { u8 instr[4] = {0x91,0x90,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| ADC R_USP ',' '#' expr NL { u8 instr[4] = {0xA1,0x90,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| ADC R_SSP ',' '#' expr NL { u8 instr[4] = {0xA0,0x90,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| ADC R_LRB ',' '#' expr NL { u8 instr[4] = {0xA4,0x90,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| ADC OFFSET expr ',' '#' expr NL { u8 instr[5] = {0xB4,0,0x90,0,0}; instr[1] = $3; _SET16(instr,3,$6); emit(instr,5); }
	| ADC expr ',' '#' expr NL { u8 instr[5] = {0xB5,0,0x90,0,0}; instr[1] = $2; _SET16(instr,3,$5); emit(instr,5); }
	| ADC '[' R_DP ']' ',' '#' expr NL { u8 instr[4] = {0xB2,0x90,0,0}; _SET16(instr,2,$7); emit(instr,4); }
	| ADC expr '[' R_USP ']' ',' '#' expr NL { u8 instr[5] = {0xB3,0,0x90,0,0}; instr[1] = $2; _SET16(instr,3,$8); emit(instr,5); }
	| ADC expr '[' R_X1 ']' ',' '#' expr NL { u8 instr[6] = {0xB0,0,0,0x90,0,0}; _SET16(instr,1,$2); _SET16(instr,4,$8); emit(instr,6); }
	| ADC expr '[' R_X2 ']' ',' '#' expr NL { u8 instr[6] = {0xB1,0,0,0x90,0,0}; _SET16(instr,1,$2); _SET16(instr,4,$8); emit(instr,6); }
	| ADCB R_A ',' '#' expr NL { u8 instr[2] = {0x96,0}; instr[1] = $5; emit(instr,2); }
	| ADCB R_A ',' R_r0 NL { u8 instr[1] = {0x18};  emit(instr,1); }
	| ADCB R_A ',' R_r1 NL { u8 instr[1] = {0x19};  emit(instr,1); }
	| ADCB R_A ',' R_r2 NL { u8 instr[1] = {0x1A};  emit(instr,1); }
	| ADCB R_A ',' R_r3 NL { u8 instr[1] = {0x1B};  emit(instr,1); }
	| ADCB R_A ',' R_r4 NL { u8 instr[1] = {0x1C};  emit(instr,1); }
	| ADCB R_A ',' R_r5 NL { u8 instr[1] = {0x1D};  emit(instr,1); }
	| ADCB R_A ',' R_r6 NL { u8 instr[1] = {0x1E};  emit(instr,1); }
	| ADCB R_A ',' R_r7 NL { u8 instr[1] = {0x1F};  emit(instr,1); }
	| ADCB R_A ',' R_PSWH NL { u8 instr[2] = {0xA2,0x92};  emit(instr,2); }
	| ADCB R_A ',' R_PSWL NL { u8 instr[2] = {0xA3,0x92};  emit(instr,2); }
	| ADCB R_A ',' OFFSET expr NL { u8 instr[2] = {0x97,0}; instr[1] = $5; emit(instr,2); }
	| ADCB R_A ',' expr NL { u8 instr[3] = {0xC5,0,0x92}; instr[1] = $4; emit(instr,3); }
	| ADCB R_A ',' '[' R_DP ']' NL { u8 instr[2] = {0xC2,0x97};  emit(instr,2); }
	| ADCB R_A ',' expr '[' R_USP ']' NL { u8 instr[3] = {0xC3,0,0x92}; instr[1] = $4; emit(instr,3); }
	| ADCB R_A ',' expr '[' R_X1 ']' NL { u8 instr[4] = {0xC0,0,0,0x92}; _SET16(instr,1,$4); emit(instr,4); }
	| ADCB R_A ',' expr '[' R_X2 ']' NL { u8 instr[4] = {0xC1,0,0,0x92}; _SET16(instr,1,$4); emit(instr,4); }
	| ADCB R_r0 ',' R_A NL { u8 instr[2] = {0x20,0x91};  emit(instr,2); }
	| ADCB R_r1 ',' R_A NL { u8 instr[2] = {0x21,0x91};  emit(instr,2); }
	| ADCB R_r2 ',' R_A NL { u8 instr[2] = {0x22,0x91};  emit(instr,2); }
	| ADCB R_r3 ',' R_A NL { u8 instr[2] = {0x23,0x91};  emit(instr,2); }
	| ADCB R_r4 ',' R_A NL { u8 instr[2] = {0x24,0x91};  emit(instr,2); }
	| ADCB R_r5 ',' R_A NL { u8 instr[2] = {0x25,0x91};  emit(instr,2); }
	| ADCB R_r6 ',' R_A NL { u8 instr[2] = {0x26,0x91};  emit(instr,2); }
	| ADCB R_r7 ',' R_A NL { u8 instr[2] = {0x27,0x91};  emit(instr,2); }
	| ADCB R_PSWH ',' R_A NL { u8 instr[2] = {0xA2,0x91};  emit(instr,2); }
	| ADCB R_PSWL ',' R_A NL { u8 instr[2] = {0xA3,0x91};  emit(instr,2); }
	| ADCB OFFSET expr ',' R_A NL { u8 instr[3] = {0xC4,0,0x91}; instr[1] = $3; emit(instr,3); }
	| ADCB expr ',' R_A NL { u8 instr[3] = {0xC5,0,0x91}; instr[1] = $2; emit(instr,3); }
	| ADCB '[' R_DP ']' ',' R_A NL { u8 instr[2] = {0xC2,0x91};  emit(instr,2); }
	| ADCB expr '[' R_USP ']' ',' R_A NL { u8 instr[3] = {0xC3,0,0x91}; instr[1] = $2; emit(instr,3); }
	| ADCB expr '[' R_X1 ']' ',' R_A NL { u8 instr[4] = {0xC0,0,0,0x91}; _SET16(instr,1,$2); emit(instr,4); }
	| ADCB expr '[' R_X2 ']' ',' R_A NL { u8 instr[4] = {0xC1,0,0,0x91}; _SET16(instr,1,$2); emit(instr,4); }
	| ADCB R_r0 ',' OFFSET expr NL { u8 instr[3] = {0x20,0x93,0}; instr[2] = $5; emit(instr,3); }
	| ADCB R_r1 ',' OFFSET expr NL { u8 instr[3] = {0x21,0x93,0}; instr[2] = $5; emit(instr,3); }
	| ADCB R_r2 ',' OFFSET expr NL { u8 instr[3] = {0x22,0x93,0}; instr[2] = $5; emit(instr,3); }
	| ADCB R_r3 ',' OFFSET expr NL { u8 instr[3] = {0x23,0x93,0}; instr[2] = $5; emit(instr,3); }
	| ADCB R_r4 ',' OFFSET expr NL { u8 instr[3] = {0x24,0x93,0}; instr[2] = $5; emit(instr,3); }
	| ADCB R_r5 ',' OFFSET expr NL { u8 instr[3] = {0x25,0x93,0}; instr[2] = $5; emit(instr,3); }
	| ADCB R_r6 ',' OFFSET expr NL { u8 instr[3] = {0x26,0x93,0}; instr[2] = $5; emit(instr,3); }
	| ADCB R_r7 ',' OFFSET expr NL { u8 instr[3] = {0x27,0x93,0}; instr[2] = $5; emit(instr,3); }
	| ADCB R_PSWH ',' OFFSET expr NL { u8 instr[3] = {0xA2,0x93,0}; instr[2] = $5; emit(instr,3); }
	| ADCB R_PSWL ',' OFFSET expr NL { u8 instr[3] = {0xA3,0x93,0}; instr[2] = $5; emit(instr,3); }
	| ADCB OFFSET expr ',' OFFSET expr NL { u8 instr[4] = {0xC4,0,0x93,0}; instr[1] = $3; instr[3] = $6; emit(instr,4); }
	| ADCB expr ',' OFFSET expr NL { u8 instr[4] = {0xC5,0,0x93,0}; instr[1] = $2; instr[3] = $5; emit(instr,4); }
	| ADCB '[' R_DP ']' ',' OFFSET expr NL { u8 instr[3] = {0xC2,0x93,0}; instr[2] = $7; emit(instr,3); }
	| ADCB expr '[' R_USP ']' ',' OFFSET expr NL { u8 instr[4] = {0xC3,0,0x93,0}; instr[1] = $2; instr[3] = $8; emit(instr,4); }
	| ADCB expr '[' R_X1 ']' ',' OFFSET expr NL { u8 instr[5] = {0xC0,0,0,0x93,0}; _SET16(instr,1,$2); instr[4] = $8; emit(instr,5); }
	| ADCB expr '[' R_X2 ']' ',' OFFSET expr NL { u8 instr[5] = {0xC1,0,0,0x93,0}; _SET16(instr,1,$2); instr[4] = $8; emit(instr,5); }
	| ADCB R_r0 ',' '#' expr NL { u8 instr[3] = {0x20,0x90,0}; instr[2] = $5; emit(instr,3); }
	| ADCB R_r1 ',' '#' expr NL { u8 instr[3] = {0x21,0x90,0}; instr[2] = $5; emit(instr,3); }
	| ADCB R_r2 ',' '#' expr NL { u8 instr[3] = {0x22,0x90,0}; instr[2] = $5; emit(instr,3); }
	| ADCB R_r3 ',' '#' expr NL { u8 instr[3] = {0x23,0x90,0}; instr[2] = $5; emit(instr,3); }
	| ADCB R_r4 ',' '#' expr NL { u8 instr[3] = {0x24,0x90,0}; instr[2] = $5; emit(instr,3); }
	| ADCB R_r5 ',' '#' expr NL { u8 instr[3] = {0x25,0x90,0}; instr[2] = $5; emit(instr,3); }
	| ADCB R_r6 ',' '#' expr NL { u8 instr[3] = {0x26,0x90,0}; instr[2] = $5; emit(instr,3); }
	| ADCB R_r7 ',' '#' expr NL { u8 instr[3] = {0x27,0x90,0}; instr[2] = $5; emit(instr,3); }
	| ADCB R_PSWH ',' '#' expr NL { u8 instr[3] = {0xA2,0x90,0}; instr[2] = $5; emit(instr,3); }
	| ADCB R_PSWL ',' '#' expr NL { u8 instr[3] = {0xA3,0x90,0}; instr[2] = $5; emit(instr,3); }
	| ADCB OFFSET expr ',' '#' expr NL { u8 instr[4] = {0xC4,0,0x90,0}; instr[1] = $3; instr[3] = $6; emit(instr,4); }
	| ADCB expr ',' '#' expr NL { u8 instr[4] = {0xC5,0,0x90,0}; instr[1] = $2; instr[3] = $5; emit(instr,4); }
	| ADCB '[' R_DP ']' ',' '#' expr NL { u8 instr[3] = {0xC2,0x90,0}; instr[2] = $7; emit(instr,3); }
	| ADCB expr '[' R_USP ']' ',' '#' expr NL { u8 instr[4] = {0xC3,0,0x90,0}; instr[1] = $2; instr[3] = $8; emit(instr,4); }
	| ADCB expr '[' R_X1 ']' ',' '#' expr NL { u8 instr[5] = {0xC0,0,0,0x90,0}; _SET16(instr,1,$2); instr[4] = $8; emit(instr,5); }
	| ADCB expr '[' R_X2 ']' ',' '#' expr NL { u8 instr[5] = {0xC1,0,0,0x90,0}; _SET16(instr,1,$2); instr[4] = $8; emit(instr,5); }
	| ADD R_A ',' '#' expr NL { u8 instr[3] = {0x86,0,0}; _SET16(instr,1,$5); emit(instr,3); }
	| ADD R_A ',' R_er0 NL { u8 instr[1] = {0x08};  emit(instr,1); }
	| ADD R_A ',' R_er1 NL { u8 instr[1] = {0x09};  emit(instr,1); }
	| ADD R_A ',' R_er2 NL { u8 instr[1] = {0x0A};  emit(instr,1); }
	| ADD R_A ',' R_er3 NL { u8 instr[1] = {0x0B};  emit(instr,1); }
	| ADD R_A ',' R_DP NL { u8 instr[2] = {0x92,0x82};  emit(instr,2); }
	| ADD R_A ',' R_X1 NL { u8 instr[2] = {0x90,0x82};  emit(instr,2); }
	| ADD R_A ',' R_X2 NL { u8 instr[2] = {0x91,0x82};  emit(instr,2); }
	| ADD R_A ',' R_USP NL { u8 instr[2] = {0xA1,0x82};  emit(instr,2); }
	| ADD R_A ',' R_SSP NL { u8 instr[2] = {0xA0,0x82};  emit(instr,2); }
	| ADD R_A ',' R_LRB NL { u8 instr[2] = {0xA4,0x82};  emit(instr,2); }
	| ADD R_A ',' OFFSET expr NL { u8 instr[2] = {0x87,0}; instr[1] = $5; emit(instr,2); }
	| ADD R_A ',' expr NL { u8 instr[3] = {0xB5,0,0x82}; instr[1] = $4; emit(instr,3); }
	| ADD R_A ',' '[' R_DP ']' NL { u8 instr[2] = {0xB2,0x82};  emit(instr,2); }
	| ADD R_A ',' expr '[' R_USP ']' NL { u8 instr[3] = {0xB3,0,0x82}; instr[1] = $4; emit(instr,3); }
	| ADD R_A ',' expr '[' R_X1 ']' NL { u8 instr[4] = {0xB0,0,0,0x82}; _SET16(instr,1,$4); emit(instr,4); }
	| ADD R_A ',' expr '[' R_X2 ']' NL { u8 instr[4] = {0xB1,0,0,0x82}; _SET16(instr,1,$4); emit(instr,4); }
	| ADD R_er0 ',' R_A NL { u8 instr[2] = {0x44,0x81};  emit(instr,2); }
	| ADD R_er1 ',' R_A NL { u8 instr[2] = {0x45,0x81};  emit(instr,2); }
	| ADD R_er2 ',' R_A NL { u8 instr[2] = {0x46,0x81};  emit(instr,2); }
	| ADD R_er3 ',' R_A NL { u8 instr[2] = {0x47,0x81};  emit(instr,2); }
	| ADD R_DP ',' R_A NL { u8 instr[2] = {0x92,0x81};  emit(instr,2); }
	| ADD R_X1 ',' R_A NL { u8 instr[2] = {0x90,0x81};  emit(instr,2); }
	| ADD R_X2 ',' R_A NL { u8 instr[2] = {0x91,0x81};  emit(instr,2); }
	| ADD R_USP ',' R_A NL { u8 instr[2] = {0xA1,0x81};  emit(instr,2); }
	| ADD R_SSP ',' R_A NL { u8 instr[2] = {0xA0,0x81};  emit(instr,2); }
	| ADD R_LRB ',' R_A NL { u8 instr[2] = {0xA4,0x81};  emit(instr,2); }
	| ADD OFFSET expr ',' R_A NL { u8 instr[3] = {0xB4,0,0x81}; instr[1] = $3; emit(instr,3); }
	| ADD expr ',' R_A NL { u8 instr[3] = {0xB5,0,0x81}; instr[1] = $2; emit(instr,3); }
	| ADD '[' R_DP ']' ',' R_A NL { u8 instr[2] = {0xB2,0x81};  emit(instr,2); }
	| ADD expr '[' R_USP ']' ',' R_A NL { u8 instr[3] = {0xB3,0,0x81}; instr[1] = $2; emit(instr,3); }
	| ADD expr '[' R_X1 ']' ',' R_A NL { u8 instr[4] = {0xB0,0,0,0x81}; _SET16(instr,1,$2); emit(instr,4); }
	| ADD expr '[' R_X2 ']' ',' R_A NL { u8 instr[4] = {0xB1,0,0,0x81}; _SET16(instr,1,$2); emit(instr,4); }
	| ADD R_er0 ',' OFFSET expr NL { u8 instr[3] = {0x44,0x83,0}; instr[2] = $5; emit(instr,3); }
	| ADD R_er1 ',' OFFSET expr NL { u8 instr[3] = {0x45,0x83,0}; instr[2] = $5; emit(instr,3); }
	| ADD R_er2 ',' OFFSET expr NL { u8 instr[3] = {0x46,0x83,0}; instr[2] = $5; emit(instr,3); }
	| ADD R_er3 ',' OFFSET expr NL { u8 instr[3] = {0x47,0x83,0}; instr[2] = $5; emit(instr,3); }
	| ADD R_DP ',' OFFSET expr NL { u8 instr[3] = {0x92,0x83,0}; instr[2] = $5; emit(instr,3); }
	| ADD R_X1 ',' OFFSET expr NL { u8 instr[3] = {0x90,0x83,0}; instr[2] = $5; emit(instr,3); }
	| ADD R_X2 ',' OFFSET expr NL { u8 instr[3] = {0x91,0x83,0}; instr[2] = $5; emit(instr,3); }
	| ADD R_USP ',' OFFSET expr NL { u8 instr[3] = {0xA1,0x83,0}; instr[2] = $5; emit(instr,3); }
	| ADD R_SSP ',' OFFSET expr NL { u8 instr[3] = {0xA0,0x83,0}; instr[2] = $5; emit(instr,3); }
	| ADD OFFSET expr ',' OFFSET expr NL { u8 instr[4] = {0xB4,0,0x83,0}; instr[1] = $3; instr[3] = $6; emit(instr,4); }
	| ADD expr ',' OFFSET expr NL { u8 instr[4] = {0xB5,0,0x83,0}; instr[1] = $2; instr[3] = $5; emit(instr,4); }
	| ADD '[' R_DP ']' ',' OFFSET expr NL { u8 instr[3] = {0xB2,0x83,0}; instr[2] = $7; emit(instr,3); }
	| ADD expr '[' R_USP ']' ',' OFFSET expr NL { u8 instr[4] = {0xB3,0,0x83,0}; instr[1] = $2; instr[3] = $8; emit(instr,4); }
	| ADD expr '[' R_X1 ']' ',' OFFSET expr NL { u8 instr[5] = {0xB0,0,0,0x83,0}; _SET16(instr,1,$2); instr[4] = $8; emit(instr,5); }
	| ADD expr '[' R_X2 ']' ',' OFFSET expr NL { u8 instr[5] = {0xB1,0,0,0x83,0}; _SET16(instr,1,$2); instr[4] = $8; emit(instr,5); }
	| ADD R_er0 ',' '#' expr NL { u8 instr[4] = {0x44,0x80,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| ADD R_er1 ',' '#' expr NL { u8 instr[4] = {0x45,0x80,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| ADD R_er2 ',' '#' expr NL { u8 instr[4] = {0x46,0x80,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| ADD R_er3 ',' '#' expr NL { u8 instr[4] = {0x47,0x80,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| ADD R_DP ',' '#' expr NL { u8 instr[4] = {0x92,0x80,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| ADD R_X1 ',' '#' expr NL { u8 instr[4] = {0x90,0x80,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| ADD R_X2 ',' '#' expr NL { u8 instr[4] = {0x91,0x80,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| ADD R_USP ',' '#' expr NL { u8 instr[4] = {0xA1,0x80,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| ADD R_SSP ',' '#' expr NL { u8 instr[4] = {0xA0,0x80,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| ADD R_LRB ',' '#' expr NL { u8 instr[4] = {0xA4,0x80,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| ADD OFFSET expr ',' '#' expr NL { u8 instr[5] = {0xB4,0,0x80,0,0}; instr[1] = $3; _SET16(instr,3,$6); emit(instr,5); }
	| ADD expr ',' '#' expr NL { u8 instr[5] = {0xB5,0,0x80,0,0}; instr[1] = $2; _SET16(instr,3,$5); emit(instr,5); }
	| ADD '[' R_DP ']' ',' '#' expr NL { u8 instr[4] = {0xB2,0x80,0,0}; _SET16(instr,2,$7); emit(instr,4); }
	| ADD expr '[' R_USP ']' ',' '#' expr NL { u8 instr[5] = {0xB3,0,0x80,0,0}; instr[1] = $2; _SET16(instr,3,$8); emit(instr,5); }
	| ADD expr '[' R_X1 ']' ',' '#' expr NL { u8 instr[6] = {0xB0,0,0,0x80,0,0}; _SET16(instr,1,$2); _SET16(instr,4,$8); emit(instr,6); }
	| ADD expr '[' R_X2 ']' ',' '#' expr NL { u8 instr[6] = {0xB1,0,0,0x80,0,0}; _SET16(instr,1,$2); _SET16(instr,4,$8); emit(instr,6); }
	| ADDB R_A ',' '#' expr NL { u8 instr[2] = {0x86,0}; instr[1] = $5; emit(instr,2); }
	| ADDB R_A ',' R_r0 NL { u8 instr[1] = {0x08};  emit(instr,1); }
	| ADDB R_A ',' R_r1 NL { u8 instr[1] = {0x09};  emit(instr,1); }
	| ADDB R_A ',' R_r2 NL { u8 instr[1] = {0x0A};  emit(instr,1); }
	| ADDB R_A ',' R_r3 NL { u8 instr[1] = {0x0B};  emit(instr,1); }
	| ADDB R_A ',' R_r4 NL { u8 instr[1] = {0x0C};  emit(instr,1); }
	| ADDB R_A ',' R_r5 NL { u8 instr[1] = {0x0D};  emit(instr,1); }
	| ADDB R_A ',' R_r6 NL { u8 instr[1] = {0x0E};  emit(instr,1); }
	| ADDB R_A ',' R_r7 NL { u8 instr[1] = {0x0F};  emit(instr,1); }
	| ADDB R_A ',' R_PSWH NL { u8 instr[2] = {0xA2,0x82};  emit(instr,2); }
	| ADDB R_A ',' R_PSWL NL { u8 instr[2] = {0xA3,0x82};  emit(instr,2); }
	| ADDB R_A ',' OFFSET expr NL { u8 instr[2] = {0x87,0}; instr[1] = $5; emit(instr,2); }
	| ADDB R_A ',' expr NL { u8 instr[3] = {0xC5,0,0x82}; instr[1] = $4; emit(instr,3); }
	| ADDB R_A ',' '[' R_DP ']' NL { u8 instr[2] = {0xC2,0x82};  emit(instr,2); }
	| ADDB R_A ',' expr '[' R_USP ']' NL { u8 instr[3] = {0xC3,0,0x82}; instr[1] = $4; emit(instr,3); }
	| ADDB R_A ',' expr '[' R_X1 ']' NL { u8 instr[4] = {0xC0,0,0,0x82}; _SET16(instr,1,$4); emit(instr,4); }
	| ADDB R_A ',' expr '[' R_X2 ']' NL { u8 instr[4] = {0xC1,0,0,0x82}; _SET16(instr,1,$4); emit(instr,4); }
	| ADDB R_r0 ',' R_A NL { u8 instr[2] = {0x20,0x81};  emit(instr,2); }
	| ADDB R_r1 ',' R_A NL { u8 instr[2] = {0x21,0x81};  emit(instr,2); }
	| ADDB R_r2 ',' R_A NL { u8 instr[2] = {0x22,0x81};  emit(instr,2); }
	| ADDB R_r3 ',' R_A NL { u8 instr[2] = {0x23,0x81};  emit(instr,2); }
	| ADDB R_r4 ',' R_A NL { u8 instr[2] = {0x24,0x81};  emit(instr,2); }
	| ADDB R_r5 ',' R_A NL { u8 instr[2] = {0x25,0x81};  emit(instr,2); }
	| ADDB R_r6 ',' R_A NL { u8 instr[2] = {0x26,0x81};  emit(instr,2); }
	| ADDB R_r7 ',' R_A NL { u8 instr[2] = {0x27,0x81};  emit(instr,2); }
	| ADDB R_PSWH ',' R_A NL { u8 instr[2] = {0xA2,0x81};  emit(instr,2); }
	| ADDB R_PSWL ',' R_A NL { u8 instr[2] = {0xA3,0x81};  emit(instr,2); }
	| ADDB OFFSET expr ',' R_A NL { u8 instr[3] = {0xC4,0,0x81}; instr[1] = $3; emit(instr,3); }
	| ADDB expr ',' R_A NL { u8 instr[3] = {0xC5,0,0x81}; instr[1] = $2; emit(instr,3); }
	| ADDB '[' R_DP ']' ',' R_A NL { u8 instr[2] = {0xC2,0x81};  emit(instr,2); }
	| ADDB expr '[' R_USP ']' ',' R_A NL { u8 instr[3] = {0xC3,0,0x81}; instr[1] = $2; emit(instr,3); }
	| ADDB expr '[' R_X1 ']' ',' R_A NL { u8 instr[4] = {0xC0,0,0,0x81}; _SET16(instr,1,$2); emit(instr,4); }
	| ADDB expr '[' R_X2 ']' ',' R_A NL { u8 instr[4] = {0xC1,0,0,0x81}; _SET16(instr,1,$2); emit(instr,4); }
	| ADDB R_r0 ',' OFFSET expr NL { u8 instr[3] = {0x20,0x83,0}; instr[2] = $5; emit(instr,3); }
	| ADDB R_r1 ',' OFFSET expr NL { u8 instr[3] = {0x21,0x83,0}; instr[2] = $5; emit(instr,3); }
	| ADDB R_r2 ',' OFFSET expr NL { u8 instr[3] = {0x22,0x83,0}; instr[2] = $5; emit(instr,3); }
	| ADDB R_r3 ',' OFFSET expr NL { u8 instr[3] = {0x23,0x83,0}; instr[2] = $5; emit(instr,3); }
	| ADDB R_r4 ',' OFFSET expr NL { u8 instr[3] = {0x24,0x83,0}; instr[2] = $5; emit(instr,3); }
	| ADDB R_r5 ',' OFFSET expr NL { u8 instr[3] = {0x25,0x83,0}; instr[2] = $5; emit(instr,3); }
	| ADDB R_r6 ',' OFFSET expr NL { u8 instr[3] = {0x26,0x83,0}; instr[2] = $5; emit(instr,3); }
	| ADDB R_r7 ',' OFFSET expr NL { u8 instr[3] = {0x27,0x83,0}; instr[2] = $5; emit(instr,3); }
	| ADDB R_PSWH ',' OFFSET expr NL { u8 instr[3] = {0xA2,0x83,0}; instr[2] = $5; emit(instr,3); }
	| ADDB R_PSWL ',' OFFSET expr NL { u8 instr[3] = {0xA3,0x83,0}; instr[2] = $5; emit(instr,3); }
	| ADDB OFFSET expr ',' OFFSET expr NL { u8 instr[4] = {0xC4,0,0x83,0}; instr[1] = $3; instr[3] = $6; emit(instr,4); }
	| ADDB expr ',' OFFSET expr NL { u8 instr[4] = {0xC5,0,0x83,0}; instr[1] = $2; instr[3] = $5; emit(instr,4); }
	| ADDB '[' R_DP ']' ',' OFFSET expr NL { u8 instr[3] = {0xC2,0x83,0}; instr[2] = $7; emit(instr,3); }
	| ADDB expr '[' R_USP ']' ',' OFFSET expr NL { u8 instr[4] = {0xC3,0,0x83,0}; instr[1] = $2; instr[3] = $8; emit(instr,4); }
	| ADDB expr '[' R_X1 ']' ',' OFFSET expr NL { u8 instr[5] = {0xC0,0,0,0x83,0}; _SET16(instr,1,$2); instr[4] = $8; emit(instr,5); }
	| ADDB expr '[' R_X2 ']' ',' OFFSET expr NL { u8 instr[5] = {0xC1,0,0,0x83,0}; _SET16(instr,1,$2); instr[4] = $8; emit(instr,5); }
	| ADDB R_r0 ',' '#' expr NL { u8 instr[3] = {0x20,0x80,0}; instr[2] = $5; emit(instr,3); }
	| ADDB R_r1 ',' '#' expr NL { u8 instr[3] = {0x21,0x80,0}; instr[2] = $5; emit(instr,3); }
	| ADDB R_r2 ',' '#' expr NL { u8 instr[3] = {0x22,0x80,0}; instr[2] = $5; emit(instr,3); }
	| ADDB R_r3 ',' '#' expr NL { u8 instr[3] = {0x23,0x80,0}; instr[2] = $5; emit(instr,3); }
	| ADDB R_r4 ',' '#' expr NL { u8 instr[3] = {0x24,0x80,0}; instr[2] = $5; emit(instr,3); }
	| ADDB R_r5 ',' '#' expr NL { u8 instr[3] = {0x25,0x80,0}; instr[2] = $5; emit(instr,3); }
	| ADDB R_r6 ',' '#' expr NL { u8 instr[3] = {0x26,0x80,0}; instr[2] = $5; emit(instr,3); }
	| ADDB R_r7 ',' '#' expr NL { u8 instr[3] = {0x27,0x80,0}; instr[2] = $5; emit(instr,3); }
	| ADDB R_PSWH ',' '#' expr NL { u8 instr[3] = {0xA2,0x80,0}; instr[2] = $5; emit(instr,3); }
	| ADDB R_PSWL ',' '#' expr NL { u8 instr[3] = {0xA3,0x80,0}; instr[2] = $5; emit(instr,3); }
	| ADDB OFFSET expr ',' '#' expr NL { u8 instr[4] = {0xC4,0,0x80,0}; instr[1] = $3; instr[3] = $6; emit(instr,4); }
	| ADDB expr ',' '#' expr NL { u8 instr[4] = {0xC5,0,0x80,0}; instr[1] = $2; instr[3] = $5; emit(instr,4); }
	| ADDB '[' R_DP ']' ',' '#' expr NL { u8 instr[3] = {0xC2,0x80,0}; instr[2] = $7; emit(instr,3); }
	| ADDB expr '[' R_USP ']' ',' '#' expr NL { u8 instr[4] = {0xC3,0,0x80,0}; instr[1] = $2; instr[3] = $8; emit(instr,4); }
	| ADDB expr '[' R_X1 ']' ',' '#' expr NL { u8 instr[5] = {0xC0,0,0,0x80,0}; _SET16(instr,1,$2); instr[4] = $8; emit(instr,5); }
	| ADDB expr '[' R_X2 ']' ',' '#' expr NL { u8 instr[5] = {0xC1,0,0,0x80,0}; _SET16(instr,1,$2); instr[4] = $8; emit(instr,5); }
	| AND R_er0 ',' R_A NL { u8 instr[2] = {0x44,0xD1};  emit(instr,2); }
	| AND R_er1 ',' R_A NL { u8 instr[2] = {0x45,0xD1};  emit(instr,2); }
	| AND R_er2 ',' R_A NL { u8 instr[2] = {0x46,0xD1};  emit(instr,2); }
	| AND R_er3 ',' R_A NL { u8 instr[2] = {0x47,0xD1};  emit(instr,2); }
	| AND R_DP ',' R_A NL { u8 instr[2] = {0x92,0xD1};  emit(instr,2); }
	| AND R_X1 ',' R_A NL { u8 instr[2] = {0x90,0xD1};  emit(instr,2); }
	| AND R_X2 ',' R_A NL { u8 instr[2] = {0x91,0xD1};  emit(instr,2); }
	| AND R_USP ',' R_A NL { u8 instr[2] = {0xA1,0xD1};  emit(instr,2); }
	| AND R_SSP ',' R_A NL { u8 instr[2] = {0xA0,0xD1};  emit(instr,2); }
	| AND R_LRB ',' R_A NL { u8 instr[2] = {0xA4,0xD1};  emit(instr,2); }
	| AND OFFSET expr ',' R_A NL { u8 instr[3] = {0xB4,0,0xD1}; instr[1] = $3; emit(instr,3); }
	| AND expr ',' R_A NL { u8 instr[3] = {0xB5,0,0xD1}; instr[1] = $2; emit(instr,3); }
	| AND '[' R_DP ']' ',' R_A NL { u8 instr[2] = {0xB2,0xD1};  emit(instr,2); }
	| AND expr '[' R_USP ']' ',' R_A NL { u8 instr[3] = {0xB3,0,0xD1}; instr[1] = $2; emit(instr,3); }
	| AND expr '[' R_X1 ']' ',' R_A NL { u8 instr[4] = {0xB0,0,0,0xD1}; _SET16(instr,1,$2); emit(instr,4); }
	| AND expr '[' R_X2 ']' ',' R_A NL { u8 instr[4] = {0xB1,0,0,0xD1}; _SET16(instr,1,$2); emit(instr,4); }
	| AND R_A ',' '#' expr NL { u8 instr[3] = {0xD6,0,0}; _SET16(instr,1,$5); emit(instr,3); }
	| AND R_A ',' R_er0 NL { u8 instr[1] = {0x58};  emit(instr,1); }
	| AND R_A ',' R_er1 NL { u8 instr[1] = {0x59};  emit(instr,1); }
	| AND R_A ',' R_er2 NL { u8 instr[1] = {0x5A};  emit(instr,1); }
	| AND R_A ',' R_er3 NL { u8 instr[1] = {0x5B};  emit(instr,1); }
	| AND R_A ',' R_DP NL { u8 instr[2] = {0x92,0xD2};  emit(instr,2); }
	| AND R_A ',' R_X1 NL { u8 instr[2] = {0x90,0xD2};  emit(instr,2); }
	| AND R_A ',' R_X2 NL { u8 instr[2] = {0x91,0xD2};  emit(instr,2); }
	| AND R_A ',' R_USP NL { u8 instr[2] = {0xA1,0xD2};  emit(instr,2); }
	| AND R_A ',' R_SSP NL { u8 instr[2] = {0xA0,0xD2};  emit(instr,2); }
	| AND R_A ',' R_LRB NL { u8 instr[2] = {0xA4,0xD2};  emit(instr,2); }
	| AND R_A ',' OFFSET expr NL { u8 instr[2] = {0xD7,0}; instr[1] = $5; emit(instr,2); }
	| AND R_A ',' expr NL { u8 instr[3] = {0xB5,0,0xD2}; instr[1] = $4; emit(instr,3); }
	| AND R_A ',' '[' R_DP ']' NL { u8 instr[2] = {0xB2,0xD2};  emit(instr,2); }
	| AND R_A ',' expr '[' R_USP ']' NL { u8 instr[3] = {0xB3,0,0xD2}; instr[1] = $4; emit(instr,3); }
	| AND R_A ',' expr '[' R_X1 ']' NL { u8 instr[4] = {0xB0,0,0,0xD2}; _SET16(instr,1,$4); emit(instr,4); }
	| AND R_A ',' expr '[' R_X2 ']' NL { u8 instr[4] = {0xB1,0,0,0xD2}; _SET16(instr,1,$4); emit(instr,4); }
	| AND R_er0 ',' OFFSET expr NL { u8 instr[3] = {0x44,0xD3,0}; instr[2] = $5; emit(instr,3); }
	| AND R_er1 ',' OFFSET expr NL { u8 instr[3] = {0x45,0xD3,0}; instr[2] = $5; emit(instr,3); }
	| AND R_er2 ',' OFFSET expr NL { u8 instr[3] = {0x46,0xD3,0}; instr[2] = $5; emit(instr,3); }
	| AND R_er3 ',' OFFSET expr NL { u8 instr[3] = {0x47,0xD3,0}; instr[2] = $5; emit(instr,3); }
	| AND R_DP ',' OFFSET expr NL { u8 instr[3] = {0x92,0xD3,0}; instr[2] = $5; emit(instr,3); }
	| AND R_X1 ',' OFFSET expr NL { u8 instr[3] = {0x90,0xD3,0}; instr[2] = $5; emit(instr,3); }
	| AND R_X2 ',' OFFSET expr NL { u8 instr[3] = {0x91,0xD3,0}; instr[2] = $5; emit(instr,3); }
	| AND R_USP ',' OFFSET expr NL { u8 instr[3] = {0xA1,0xD3,0}; instr[2] = $5; emit(instr,3); }
	| AND R_SSP ',' OFFSET expr NL { u8 instr[3] = {0xA0,0xD3,0}; instr[2] = $5; emit(instr,3); }
	| AND OFFSET expr ',' OFFSET expr NL { u8 instr[4] = {0xB4,0,0xD3,0}; instr[1] = $3; instr[3] = $6; emit(instr,4); }
	| AND expr ',' OFFSET expr NL { u8 instr[4] = {0xB5,0,0xD3,0}; instr[1] = $2; instr[3] = $5; emit(instr,4); }
	| AND '[' R_DP ']' ',' OFFSET expr NL { u8 instr[3] = {0xB2,0xD3,0}; instr[2] = $7; emit(instr,3); }
	| AND expr '[' R_USP ']' ',' OFFSET expr NL { u8 instr[4] = {0xB3,0,0xD3,0}; instr[1] = $2; instr[3] = $8; emit(instr,4); }
	| AND expr '[' R_X1 ']' ',' OFFSET expr NL { u8 instr[5] = {0xB0,0,0,0xD3,0}; _SET16(instr,1,$2); instr[4] = $8; emit(instr,5); }
	| AND expr '[' R_X2 ']' ',' OFFSET expr NL { u8 instr[5] = {0xB1,0,0,0xD3,0}; _SET16(instr,1,$2); instr[4] = $8; emit(instr,5); }
	| AND R_er0 ',' '#' expr NL { u8 instr[4] = {0x44,0xD0,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| AND R_er1 ',' '#' expr NL { u8 instr[4] = {0x45,0xD0,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| AND R_er2 ',' '#' expr NL { u8 instr[4] = {0x46,0xD0,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| AND R_er3 ',' '#' expr NL { u8 instr[4] = {0x47,0xD0,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| AND R_DP ',' '#' expr NL { u8 instr[4] = {0x92,0xD0,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| AND R_X1 ',' '#' expr NL { u8 instr[4] = {0x90,0xD0,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| AND R_X2 ',' '#' expr NL { u8 instr[4] = {0x91,0xD0,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| AND R_USP ',' '#' expr NL { u8 instr[4] = {0xA1,0xD0,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| AND R_SSP ',' '#' expr NL { u8 instr[4] = {0xA0,0xD0,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| AND R_LRB ',' '#' expr NL { u8 instr[4] = {0xA4,0xD0,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| AND OFFSET expr ',' '#' expr NL { u8 instr[5] = {0xB4,0,0xD0,0,0}; instr[1] = $3; _SET16(instr,3,$6); emit(instr,5); }
	| AND expr ',' '#' expr NL { u8 instr[5] = {0xB5,0,0xD0,0,0}; instr[1] = $2; _SET16(instr,3,$5); emit(instr,5); }
	| AND '[' R_DP ']' ',' '#' expr NL { u8 instr[4] = {0xB2,0xD0,0,0}; _SET16(instr,2,$7); emit(instr,4); }
	| AND expr '[' R_USP ']' ',' '#' expr NL { u8 instr[5] = {0xB3,0,0xD0,0,0}; instr[1] = $2; _SET16(instr,3,$8); emit(instr,5); }
	| AND expr '[' R_X1 ']' ',' '#' expr NL { u8 instr[6] = {0xB0,0,0,0xD0,0,0}; _SET16(instr,1,$2); _SET16(instr,4,$8); emit(instr,6); }
	| AND expr '[' R_X2 ']' ',' '#' expr NL { u8 instr[6] = {0xB1,0,0,0xD0,0,0}; _SET16(instr,1,$2); _SET16(instr,4,$8); emit(instr,6); }
	| ANDB R_A ',' '#' expr NL { u8 instr[2] = {0xD6,0}; instr[1] = $5; emit(instr,2); }
	| ANDB R_A ',' R_r0 NL { u8 instr[1] = {0x58};  emit(instr,1); }
	| ANDB R_A ',' R_r1 NL { u8 instr[1] = {0x59};  emit(instr,1); }
	| ANDB R_A ',' R_r2 NL { u8 instr[1] = {0x5A};  emit(instr,1); }
	| ANDB R_A ',' R_r3 NL { u8 instr[1] = {0x5B};  emit(instr,1); }
	| ANDB R_A ',' R_r4 NL { u8 instr[1] = {0x5C};  emit(instr,1); }
	| ANDB R_A ',' R_r5 NL { u8 instr[1] = {0x5D};  emit(instr,1); }
	| ANDB R_A ',' R_r6 NL { u8 instr[1] = {0x5E};  emit(instr,1); }
	| ANDB R_A ',' R_r7 NL { u8 instr[1] = {0x5F};  emit(instr,1); }
	| ANDB R_A ',' R_PSWH NL { u8 instr[2] = {0xA2,0xD2};  emit(instr,2); }
	| ANDB R_A ',' R_PSWL NL { u8 instr[2] = {0xA3,0xD2};  emit(instr,2); }
	| ANDB R_A ',' OFFSET expr NL { u8 instr[2] = {0xD7,0}; instr[1] = $5; emit(instr,2); }
	| ANDB R_A ',' expr NL { u8 instr[3] = {0xC5,0,0xD2}; instr[1] = $4; emit(instr,3); }
	| ANDB R_A ',' '[' R_DP ']' NL { u8 instr[2] = {0xC2,0xD2};  emit(instr,2); }
	| ANDB R_A ',' expr '[' R_USP ']' NL { u8 instr[3] = {0xC3,0,0xD2}; instr[1] = $4; emit(instr,3); }
	| ANDB R_A ',' expr '[' R_X1 ']' NL { u8 instr[4] = {0xC0,0,0,0xD2}; _SET16(instr,1,$4); emit(instr,4); }
	| ANDB R_A ',' expr '[' R_X2 ']' NL { u8 instr[4] = {0xC1,0,0,0xD2}; _SET16(instr,1,$4); emit(instr,4); }
	| ANDB R_r0 ',' R_A NL { u8 instr[2] = {0x20,0xD1};  emit(instr,2); }
	| ANDB R_r1 ',' R_A NL { u8 instr[2] = {0x21,0xD1};  emit(instr,2); }
	| ANDB R_r2 ',' R_A NL { u8 instr[2] = {0x22,0xD1};  emit(instr,2); }
	| ANDB R_r3 ',' R_A NL { u8 instr[2] = {0x23,0xD1};  emit(instr,2); }
	| ANDB R_r4 ',' R_A NL { u8 instr[2] = {0x24,0xD1};  emit(instr,2); }
	| ANDB R_r5 ',' R_A NL { u8 instr[2] = {0x25,0xD1};  emit(instr,2); }
	| ANDB R_r6 ',' R_A NL { u8 instr[2] = {0x26,0xD1};  emit(instr,2); }
	| ANDB R_r7 ',' R_A NL { u8 instr[2] = {0x27,0xD1};  emit(instr,2); }
	| ANDB R_PSWH ',' R_A NL { u8 instr[2] = {0xA2,0xD1};  emit(instr,2); }
	| ANDB R_PSWL ',' R_A NL { u8 instr[2] = {0xA3,0xD1};  emit(instr,2); }
	| ANDB OFFSET expr ',' R_A NL { u8 instr[3] = {0xC4,0,0xD1}; instr[1] = $3; emit(instr,3); }
	| ANDB expr ',' R_A NL { u8 instr[3] = {0xC5,0,0xD1}; instr[1] = $2; emit(instr,3); }
	| ANDB '[' R_DP ']' ',' R_A NL { u8 instr[2] = {0xC2,0xD1};  emit(instr,2); }
	| ANDB expr '[' R_USP ']' ',' R_A NL { u8 instr[3] = {0xC3,0,0xD1}; instr[1] = $2; emit(instr,3); }
	| ANDB expr '[' R_X1 ']' ',' R_A NL { u8 instr[4] = {0xC0,0,0,0xD1}; _SET16(instr,1,$2); emit(instr,4); }
	| ANDB expr '[' R_X2 ']' ',' R_A NL { u8 instr[4] = {0xC1,0,0,0xD1}; _SET16(instr,1,$2); emit(instr,4); }
	| ANDB R_r0 ',' OFFSET expr NL { u8 instr[3] = {0x20,0xD3,0}; instr[2] = $5; emit(instr,3); }
	| ANDB R_r1 ',' OFFSET expr NL { u8 instr[3] = {0x21,0xD3,0}; instr[2] = $5; emit(instr,3); }
	| ANDB R_r2 ',' OFFSET expr NL { u8 instr[3] = {0x22,0xD3,0}; instr[2] = $5; emit(instr,3); }
	| ANDB R_r3 ',' OFFSET expr NL { u8 instr[3] = {0x23,0xD3,0}; instr[2] = $5; emit(instr,3); }
	| ANDB R_r4 ',' OFFSET expr NL { u8 instr[3] = {0x24,0xD3,0}; instr[2] = $5; emit(instr,3); }
	| ANDB R_r5 ',' OFFSET expr NL { u8 instr[3] = {0x25,0xD3,0}; instr[2] = $5; emit(instr,3); }
	| ANDB R_r6 ',' OFFSET expr NL { u8 instr[3] = {0x26,0xD3,0}; instr[2] = $5; emit(instr,3); }
	| ANDB R_r7 ',' OFFSET expr NL { u8 instr[3] = {0x27,0xD3,0}; instr[2] = $5; emit(instr,3); }
	| ANDB R_PSWH ',' OFFSET expr NL { u8 instr[3] = {0xA2,0xD3,0}; instr[2] = $5; emit(instr,3); }
	| ANDB R_PSWL ',' OFFSET expr NL { u8 instr[3] = {0xA3,0xD3,0}; instr[2] = $5; emit(instr,3); }
	| ANDB OFFSET expr ',' OFFSET expr NL { u8 instr[4] = {0xC4,0,0xD3,0}; instr[1] = $3; instr[3] = $6; emit(instr,4); }
	| ANDB expr ',' OFFSET expr NL { u8 instr[4] = {0xC5,0,0xD3,0}; instr[1] = $2; instr[3] = $5; emit(instr,4); }
	| ANDB '[' R_DP ']' ',' OFFSET expr NL { u8 instr[3] = {0xC2,0xD3,0}; instr[2] = $7; emit(instr,3); }
	| ANDB expr '[' R_USP ']' ',' OFFSET expr NL { u8 instr[4] = {0xC3,0,0xD3,0}; instr[1] = $2; instr[3] = $8; emit(instr,4); }
	| ANDB expr '[' R_X1 ']' ',' OFFSET expr NL { u8 instr[5] = {0xC0,0,0,0xD3,0}; _SET16(instr,1,$2); instr[4] = $8; emit(instr,5); }
	| ANDB expr '[' R_X2 ']' ',' OFFSET expr NL { u8 instr[5] = {0xC1,0,0,0xD3,0}; _SET16(instr,1,$2); instr[4] = $8; emit(instr,5); }
	| ANDB R_r0 ',' '#' expr NL { u8 instr[3] = {0x20,0xD0,0}; instr[2] = $5; emit(instr,3); }
	| ANDB R_r1 ',' '#' expr NL { u8 instr[3] = {0x21,0xD0,0}; instr[2] = $5; emit(instr,3); }
	| ANDB R_r2 ',' '#' expr NL { u8 instr[3] = {0x22,0xD0,0}; instr[2] = $5; emit(instr,3); }
	| ANDB R_r3 ',' '#' expr NL { u8 instr[3] = {0x23,0xD0,0}; instr[2] = $5; emit(instr,3); }
	| ANDB R_r4 ',' '#' expr NL { u8 instr[3] = {0x24,0xD0,0}; instr[2] = $5; emit(instr,3); }
	| ANDB R_r5 ',' '#' expr NL { u8 instr[3] = {0x25,0xD0,0}; instr[2] = $5; emit(instr,3); }
	| ANDB R_r6 ',' '#' expr NL { u8 instr[3] = {0x26,0xD0,0}; instr[2] = $5; emit(instr,3); }
	| ANDB R_r7 ',' '#' expr NL { u8 instr[3] = {0x27,0xD0,0}; instr[2] = $5; emit(instr,3); }
	| ANDB R_PSWH ',' '#' expr NL { u8 instr[3] = {0xA2,0xD0,0}; instr[2] = $5; emit(instr,3); }
	| ANDB R_PSWL ',' '#' expr NL { u8 instr[3] = {0xA3,0xD0,0}; instr[2] = $5; emit(instr,3); }
	| ANDB OFFSET expr ',' '#' expr NL { u8 instr[4] = {0xC4,0,0xD0,0}; instr[1] = $3; instr[3] = $6; emit(instr,4); }
	| ANDB expr ',' '#' expr NL { u8 instr[4] = {0xC5,0,0xD0,0}; instr[1] = $2; instr[3] = $5; emit(instr,4); }
	| ANDB '[' R_DP ']' ',' '#' expr NL { u8 instr[3] = {0xC2,0xD0,0}; instr[2] = $7; emit(instr,3); }
	| ANDB expr '[' R_USP ']' ',' '#' expr NL { u8 instr[4] = {0xC3,0,0xD0,0}; instr[1] = $2; instr[3] = $8; emit(instr,4); }
	| ANDB expr '[' R_X1 ']' ',' '#' expr NL { u8 instr[5] = {0xC0,0,0,0xD0,0}; _SET16(instr,1,$2); instr[4] = $8; emit(instr,5); }
	| ANDB expr '[' R_X2 ']' ',' '#' expr NL { u8 instr[5] = {0xC1,0,0,0xD0,0}; _SET16(instr,1,$2); instr[4] = $8; emit(instr,5); }
	| BRK NL { u8 instr[1] = {0xFF};  emit(instr,1); }
	| CAL expr NL { u8 instr[3] = {0x32,0,0}; _SET16(instr,1,$2); emit(instr,3); }
	| CAL '[' R_er0 ']' NL { u8 instr[2] = {0x44,0x23};  emit(instr,2); }
	| CAL '[' R_er1 ']' NL { u8 instr[2] = {0x45,0x23};  emit(instr,2); }
	| CAL '[' R_er2 ']' NL { u8 instr[2] = {0x46,0x23};  emit(instr,2); }
	| CAL '[' R_er3 ']' NL { u8 instr[2] = {0x47,0x23};  emit(instr,2); }
	| CAL '[' R_DP ']' NL { u8 instr[2] = {0x92,0x23};  emit(instr,2); }
	| CAL '[' R_X1 ']' NL { u8 instr[2] = {0x90,0x23};  emit(instr,2); }
	| CAL '[' R_X2 ']' NL { u8 instr[2] = {0x91,0x23};  emit(instr,2); }
	| CAL '[' R_USP ']' NL { u8 instr[2] = {0xA1,0x23};  emit(instr,2); }
	| CAL '[' R_SSP ']' NL { u8 instr[2] = {0xA0,0x23};  emit(instr,2); }
	| CAL '[' R_LRB ']' NL { u8 instr[2] = {0xA4,0x23};  emit(instr,2); }
	| CAL '[' OFFSET expr ']' NL { u8 instr[3] = {0xB4,0,0x23}; instr[1] = $4; emit(instr,3); }
	| CAL '[' expr ']' NL { u8 instr[3] = {0xB5,0,0x23}; instr[1] = $3; emit(instr,3); }
	| CAL '[' '[' R_DP ']' ']' NL { u8 instr[2] = {0xB2,0x23};  emit(instr,2); }
	| CAL '[' expr '[' R_USP ']' ']' NL { u8 instr[3] = {0xB3,0,0x23}; instr[1] = $3; emit(instr,3); }
	| CAL '[' expr '[' R_X1 ']' ']' NL { u8 instr[4] = {0xB0,0,0,0x23}; _SET16(instr,1,$3); emit(instr,4); }
	| CAL '[' expr '[' R_X2 ']' ']' NL { u8 instr[4] = {0xB1,0,0,0x23}; _SET16(instr,1,$3); emit(instr,4); }
	| CLR R_A NL { u8 instr[1] = {0xF9};  emit(instr,1); }
	| CLR R_er0 NL { u8 instr[2] = {0x44,0x15};  emit(instr,2); }
	| CLR R_er1 NL { u8 instr[2] = {0x45,0x15};  emit(instr,2); }
	| CLR R_er2 NL { u8 instr[2] = {0x46,0x15};  emit(instr,2); }
	| CLR R_er3 NL { u8 instr[2] = {0x47,0x15};  emit(instr,2); }
	| CLR R_DP NL { u8 instr[2] = {0x92,0x15};  emit(instr,2); }
	| CLR R_X1 NL { u8 instr[2] = {0x90,0x15};  emit(instr,2); }
	| CLR R_X2 NL { u8 instr[2] = {0x91,0x15};  emit(instr,2); }
	| CLR R_USP NL { u8 instr[2] = {0xA1,0x15};  emit(instr,2); }
	| CLR R_SSP NL { u8 instr[2] = {0xA0,0x15};  emit(instr,2); }
	| CLR R_LRB NL { u8 instr[2] = {0xA4,0x15};  emit(instr,2); }
	| CLR OFFSET expr NL { u8 instr[3] = {0xB4,0,0x15}; instr[1] = $3; emit(instr,3); }
	| CLR expr NL { u8 instr[3] = {0xB5,0,0x15}; instr[1] = $2; emit(instr,3); }
	| CLR '[' R_DP ']' NL { u8 instr[2] = {0xB2,0x15};  emit(instr,2); }
	| CLR expr '[' R_USP ']' NL { u8 instr[3] = {0xB3,0,0x15}; instr[1] = $2; emit(instr,3); }
	| CLR expr '[' R_X1 ']' NL { u8 instr[4] = {0xB0,0,0,0x15}; _SET16(instr,1,$2); emit(instr,4); }
	| CLR expr '[' R_X2 ']' NL { u8 instr[4] = {0xB1,0,0,0x15}; _SET16(instr,1,$2); emit(instr,4); }
	| CLRB R_A NL { u8 instr[1] = {0xFA};  emit(instr,1); }
	| CLRB R_r0 NL { u8 instr[2] = {0x20,0x15};  emit(instr,2); }
	| CLRB R_r1 NL { u8 instr[2] = {0x21,0x15};  emit(instr,2); }
	| CLRB R_r2 NL { u8 instr[2] = {0x22,0x15};  emit(instr,2); }
	| CLRB R_r3 NL { u8 instr[2] = {0x23,0x15};  emit(instr,2); }
	| CLRB R_r4 NL { u8 instr[2] = {0x24,0x15};  emit(instr,2); }
	| CLRB R_r5 NL { u8 instr[2] = {0x25,0x15};  emit(instr,2); }
	| CLRB R_r6 NL { u8 instr[2] = {0x26,0x15};  emit(instr,2); }
	| CLRB R_r7 NL { u8 instr[2] = {0x27,0x15};  emit(instr,2); }
	| CLRB R_PSWH NL { u8 instr[2] = {0xA2,0x15};  emit(instr,2); }
	| CLRB R_PSWL NL { u8 instr[2] = {0xA3,0x15};  emit(instr,2); }
	| CLRB OFFSET expr NL { u8 instr[3] = {0xC4,0,0x15}; instr[1] = $3; emit(instr,3); }
	| CLRB expr NL { u8 instr[3] = {0xC5,0,0x15}; instr[1] = $2; emit(instr,3); }
	| CLRB '[' R_DP ']' NL { u8 instr[2] = {0xC2,0x15};  emit(instr,2); }
	| CLRB expr '[' R_USP ']' NL { u8 instr[3] = {0xC3,0,0x15}; instr[1] = $2; emit(instr,3); }
	| CLRB expr '[' R_X1 ']' NL { u8 instr[4] = {0xC0,0,0,0x15}; _SET16(instr,1,$2); emit(instr,4); }
	| CLRB expr '[' R_X2 ']' NL { u8 instr[4] = {0xC1,0,0,0x15}; _SET16(instr,1,$2); emit(instr,4); }
	| CMP R_A ',' '#' expr NL { u8 instr[3] = {0xC6,0,0}; _SET16(instr,1,$5); emit(instr,3); }
	| CMP R_A ',' R_er0 NL { u8 instr[1] = {0x48};  emit(instr,1); }
	| CMP R_A ',' R_er1 NL { u8 instr[1] = {0x49};  emit(instr,1); }
	| CMP R_A ',' R_er2 NL { u8 instr[1] = {0x4A};  emit(instr,1); }
	| CMP R_A ',' R_er3 NL { u8 instr[1] = {0x4B};  emit(instr,1); }
	| CMP R_A ',' R_DP NL { u8 instr[2] = {0x92,0xC2};  emit(instr,2); }
	| CMP R_A ',' R_X1 NL { u8 instr[2] = {0x90,0xC2};  emit(instr,2); }
	| CMP R_A ',' R_X2 NL { u8 instr[2] = {0x91,0xC2};  emit(instr,2); }
	| CMP R_A ',' R_USP NL { u8 instr[2] = {0xA1,0xC2};  emit(instr,2); }
	| CMP R_A ',' R_SSP NL { u8 instr[2] = {0xA0,0xC2};  emit(instr,2); }
	| CMP R_A ',' R_LRB NL { u8 instr[2] = {0xA4,0xC2};  emit(instr,2); }
	| CMP R_A ',' OFFSET expr NL { u8 instr[2] = {0xC7,0}; instr[1] = $5; emit(instr,2); }
	| CMP R_A ',' expr NL { u8 instr[3] = {0xB5,0,0xC2}; instr[1] = $4; emit(instr,3); }
	| CMP R_A ',' '[' R_DP ']' NL { u8 instr[2] = {0xB2,0xC2};  emit(instr,2); }
	| CMP R_A ',' expr '[' R_USP ']' NL { u8 instr[3] = {0xB3,0,0xC2}; instr[1] = $4; emit(instr,3); }
	| CMP R_A ',' expr '[' R_X1 ']' NL { u8 instr[4] = {0xB0,0,0,0xC2}; _SET16(instr,1,$4); emit(instr,4); }
	| CMP R_A ',' expr '[' R_X2 ']' NL { u8 instr[4] = {0xB1,0,0,0xC2}; _SET16(instr,1,$4); emit(instr,4); }
	| CMP R_er0 ',' R_A NL { u8 instr[2] = {0x44,0xC1};  emit(instr,2); }
	| CMP R_er1 ',' R_A NL { u8 instr[2] = {0x45,0xC1};  emit(instr,2); }
	| CMP R_er2 ',' R_A NL { u8 instr[2] = {0x46,0xC1};  emit(instr,2); }
	| CMP R_er3 ',' R_A NL { u8 instr[2] = {0x47,0xC1};  emit(instr,2); }
	| CMP R_DP ',' R_A NL { u8 instr[2] = {0x92,0xC1};  emit(instr,2); }
	| CMP R_X1 ',' R_A NL { u8 instr[2] = {0x90,0xC1};  emit(instr,2); }
	| CMP R_X2 ',' R_A NL { u8 instr[2] = {0x91,0xC1};  emit(instr,2); }
	| CMP R_USP ',' R_A NL { u8 instr[2] = {0xA1,0xC1};  emit(instr,2); }
	| CMP R_SSP ',' R_A NL { u8 instr[2] = {0xA0,0xC1};  emit(instr,2); }
	| CMP R_LRB ',' R_A NL { u8 instr[2] = {0xA4,0xC1};  emit(instr,2); }
	| CMP OFFSET expr ',' R_A NL { u8 instr[3] = {0xB4,0,0xC1}; instr[1] = $3; emit(instr,3); }
	| CMP expr ',' R_A NL { u8 instr[3] = {0xB5,0,0xC1}; instr[1] = $2; emit(instr,3); }
	| CMP '[' R_DP ']' ',' R_A NL { u8 instr[2] = {0xB2,0xC1};  emit(instr,2); }
	| CMP expr '[' R_USP ']' ',' R_A NL { u8 instr[3] = {0xB3,0,0xC1}; instr[1] = $2; emit(instr,3); }
	| CMP expr '[' R_X1 ']' ',' R_A NL { u8 instr[4] = {0xB0,0,0,0xC1}; _SET16(instr,1,$2); emit(instr,4); }
	| CMP expr '[' R_X2 ']' ',' R_A NL { u8 instr[4] = {0xB1,0,0,0xC1}; _SET16(instr,1,$2); emit(instr,4); }
	| CMP R_er0 ',' OFFSET expr NL { u8 instr[3] = {0x44,0xC3,0}; instr[2] = $5; emit(instr,3); }
	| CMP R_er1 ',' OFFSET expr NL { u8 instr[3] = {0x45,0xC3,0}; instr[2] = $5; emit(instr,3); }
	| CMP R_er2 ',' OFFSET expr NL { u8 instr[3] = {0x46,0xC3,0}; instr[2] = $5; emit(instr,3); }
	| CMP R_er3 ',' OFFSET expr NL { u8 instr[3] = {0x47,0xC3,0}; instr[2] = $5; emit(instr,3); }
	| CMP R_DP ',' OFFSET expr NL { u8 instr[3] = {0x92,0xC3,0}; instr[2] = $5; emit(instr,3); }
	| CMP R_X1 ',' OFFSET expr NL { u8 instr[3] = {0x90,0xC3,0}; instr[2] = $5; emit(instr,3); }
	| CMP R_X2 ',' OFFSET expr NL { u8 instr[3] = {0x91,0xC3,0}; instr[2] = $5; emit(instr,3); }
	| CMP R_USP ',' OFFSET expr NL { u8 instr[3] = {0xA1,0xC3,0}; instr[2] = $5; emit(instr,3); }
	| CMP R_SSP ',' OFFSET expr NL { u8 instr[3] = {0xA0,0xC3,0}; instr[2] = $5; emit(instr,3); }
	| CMP R_LRB ',' OFFSET expr NL { u8 instr[3] = {0xA4,0xC3,0}; instr[2] = $5; emit(instr,3); }
	| CMP OFFSET expr ',' OFFSET expr NL { u8 instr[4] = {0xB4,0,0xC3,0}; instr[1] = $3; instr[3] = $6; emit(instr,4); }
	| CMP expr ',' OFFSET expr NL { u8 instr[4] = {0xB5,0,0xC3,0}; instr[1] = $2; instr[3] = $5; emit(instr,4); }
	| CMP '[' R_DP ']' ',' OFFSET expr NL { u8 instr[3] = {0xB2,0xC3,0}; instr[2] = $7; emit(instr,3); }
	| CMP expr '[' R_USP ']' ',' OFFSET expr NL { u8 instr[4] = {0xB3,0,0xC3,0}; instr[1] = $2; instr[3] = $8; emit(instr,4); }
	| CMP expr '[' R_X1 ']' ',' OFFSET expr NL { u8 instr[5] = {0xB0,0,0,0xC3,0}; _SET16(instr,1,$2); instr[4] = $8; emit(instr,5); }
	| CMP expr '[' R_X2 ']' ',' OFFSET expr NL { u8 instr[5] = {0xB1,0,0,0xC3,0}; _SET16(instr,1,$2); instr[4] = $8; emit(instr,5); }
	| CMP R_er0 ',' '#' expr NL { u8 instr[4] = {0x44,0xC0,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| CMP R_er1 ',' '#' expr NL { u8 instr[4] = {0x45,0xC0,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| CMP R_er2 ',' '#' expr NL { u8 instr[4] = {0x46,0xC0,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| CMP R_er3 ',' '#' expr NL { u8 instr[4] = {0x47,0xC0,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| CMP R_DP ',' '#' expr NL { u8 instr[4] = {0x92,0xC0,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| CMP R_X1 ',' '#' expr NL { u8 instr[4] = {0x90,0xC0,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| CMP R_X2 ',' '#' expr NL { u8 instr[4] = {0x91,0xC0,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| CMP R_USP ',' '#' expr NL { u8 instr[4] = {0xA1,0xC0,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| CMP R_SSP ',' '#' expr NL { u8 instr[4] = {0xA0,0xC0,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| CMP R_LRB ',' '#' expr NL { u8 instr[4] = {0xA4,0xC0,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| CMP OFFSET expr ',' '#' expr NL { u8 instr[5] = {0xB4,0,0xC0,0,0}; instr[1] = $3; _SET16(instr,3,$6); emit(instr,5); }
	| CMP expr ',' '#' expr NL { u8 instr[5] = {0xB5,0,0xC0,0,0}; instr[1] = $2; _SET16(instr,3,$5); emit(instr,5); }
	| CMP '[' R_DP ']' ',' '#' expr NL { u8 instr[4] = {0xB2,0xC0,0,0}; _SET16(instr,2,$7); emit(instr,4); }
	| CMP expr '[' R_USP ']' ',' '#' expr NL { u8 instr[5] = {0xB3,0,0xC0,0,0}; instr[1] = $2; _SET16(instr,3,$8); emit(instr,5); }
	| CMP expr '[' R_X1 ']' ',' '#' expr NL { u8 instr[6] = {0xB0,0,0,0xC0,0,0}; _SET16(instr,1,$2); _SET16(instr,4,$8); emit(instr,6); }
	| CMP expr '[' R_X2 ']' ',' '#' expr NL { u8 instr[6] = {0xB1,0,0,0xC0,0,0}; _SET16(instr,1,$2); _SET16(instr,4,$8); emit(instr,6); }
	| CMPB R_A ',' '#' expr NL { u8 instr[2] = {0xC6,0}; instr[1] = $5; emit(instr,2); }
	| CMPB R_A ',' R_r0 NL { u8 instr[1] = {0x48};  emit(instr,1); }
	| CMPB R_A ',' R_r1 NL { u8 instr[1] = {0x49};  emit(instr,1); }
	| CMPB R_A ',' R_r2 NL { u8 instr[1] = {0x4A};  emit(instr,1); }
	| CMPB R_A ',' R_r3 NL { u8 instr[1] = {0x4B};  emit(instr,1); }
	| CMPB R_A ',' R_r4 NL { u8 instr[1] = {0x4C};  emit(instr,1); }
	| CMPB R_A ',' R_r5 NL { u8 instr[1] = {0x4D};  emit(instr,1); }
	| CMPB R_A ',' R_r6 NL { u8 instr[1] = {0x4E};  emit(instr,1); }
	| CMPB R_A ',' R_r7 NL { u8 instr[1] = {0x4F};  emit(instr,1); }
	| CMPB R_A ',' R_PSWH NL { u8 instr[2] = {0xA2,0xC2};  emit(instr,2); }
	| CMPB R_A ',' R_PSWL NL { u8 instr[2] = {0xA3,0xC2};  emit(instr,2); }
	| CMPB R_A ',' OFFSET expr NL { u8 instr[2] = {0xC7,0}; instr[1] = $5; emit(instr,2); }
	| CMPB R_A ',' expr NL { u8 instr[3] = {0xC5,0,0xC2}; instr[1] = $4; emit(instr,3); }
	| CMPB R_A ',' '[' R_DP ']' NL { u8 instr[2] = {0xC2,0xC2};  emit(instr,2); }
	| CMPB R_A ',' expr '[' R_USP ']' NL { u8 instr[3] = {0xC3,0,0xC2}; instr[1] = $4; emit(instr,3); }
	| CMPB R_A ',' expr '[' R_X1 ']' NL { u8 instr[4] = {0xC0,0,0,0xC2}; _SET16(instr,1,$4); emit(instr,4); }
	| CMPB R_A ',' expr '[' R_X2 ']' NL { u8 instr[4] = {0xC1,0,0,0xC2}; _SET16(instr,1,$4); emit(instr,4); }
	| CMPB R_r0 ',' R_A NL { u8 instr[2] = {0x20,0xC1};  emit(instr,2); }
	| CMPB R_r1 ',' R_A NL { u8 instr[2] = {0x21,0xC1};  emit(instr,2); }
	| CMPB R_r2 ',' R_A NL { u8 instr[2] = {0x22,0xC1};  emit(instr,2); }
	| CMPB R_r3 ',' R_A NL { u8 instr[2] = {0x23,0xC1};  emit(instr,2); }
	| CMPB R_r4 ',' R_A NL { u8 instr[2] = {0x24,0xC1};  emit(instr,2); }
	| CMPB R_r5 ',' R_A NL { u8 instr[2] = {0x25,0xC1};  emit(instr,2); }
	| CMPB R_r6 ',' R_A NL { u8 instr[2] = {0x26,0xC1};  emit(instr,2); }
	| CMPB R_r7 ',' R_A NL { u8 instr[2] = {0x27,0xC1};  emit(instr,2); }
	| CMPB R_PSWH ',' R_A NL { u8 instr[2] = {0xA2,0xC1};  emit(instr,2); }
	| CMPB R_PSWL ',' R_A NL { u8 instr[2] = {0xA3,0xC1};  emit(instr,2); }
	| CMPB OFFSET expr ',' R_A NL { u8 instr[3] = {0xC4,0,0xC1}; instr[1] = $3; emit(instr,3); }
	| CMPB expr ',' R_A NL { u8 instr[3] = {0xC5,0,0xC1}; instr[1] = $2; emit(instr,3); }
	| CMPB '[' R_DP ']' ',' R_A NL { u8 instr[2] = {0xC2,0xC1};  emit(instr,2); }
	| CMPB expr '[' R_USP ']' ',' R_A NL { u8 instr[3] = {0xC3,0,0xC1}; instr[1] = $2; emit(instr,3); }
	| CMPB expr '[' R_X1 ']' ',' R_A NL { u8 instr[4] = {0xC0,0,0,0xC1}; _SET16(instr,1,$2); emit(instr,4); }
	| CMPB expr '[' R_X2 ']' ',' R_A NL { u8 instr[4] = {0xC1,0,0,0xC1}; _SET16(instr,1,$2); emit(instr,4); }
	| CMPB R_r0 ',' OFFSET expr NL { u8 instr[3] = {0x20,0xC3,0}; instr[2] = $5; emit(instr,3); }
	| CMPB R_r1 ',' OFFSET expr NL { u8 instr[3] = {0x21,0xC3,0}; instr[2] = $5; emit(instr,3); }
	| CMPB R_r2 ',' OFFSET expr NL { u8 instr[3] = {0x22,0xC3,0}; instr[2] = $5; emit(instr,3); }
	| CMPB R_r3 ',' OFFSET expr NL { u8 instr[3] = {0x23,0xC3,0}; instr[2] = $5; emit(instr,3); }
	| CMPB R_r4 ',' OFFSET expr NL { u8 instr[3] = {0x24,0xC3,0}; instr[2] = $5; emit(instr,3); }
	| CMPB R_r5 ',' OFFSET expr NL { u8 instr[3] = {0x25,0xC3,0}; instr[2] = $5; emit(instr,3); }
	| CMPB R_r6 ',' OFFSET expr NL { u8 instr[3] = {0x26,0xC3,0}; instr[2] = $5; emit(instr,3); }
	| CMPB R_r7 ',' OFFSET expr NL { u8 instr[3] = {0x27,0xC3,0}; instr[2] = $5; emit(instr,3); }
	| CMPB R_PSWH ',' OFFSET expr NL { u8 instr[3] = {0xA2,0xC3,0}; instr[2] = $5; emit(instr,3); }
	| CMPB R_PSWL ',' OFFSET expr NL { u8 instr[3] = {0xA3,0xC3,0}; instr[2] = $5; emit(instr,3); }
	| CMPB OFFSET expr ',' OFFSET expr NL { u8 instr[4] = {0xC4,0,0xC3,0}; instr[1] = $3; instr[3] = $6; emit(instr,4); }
	| CMPB expr ',' OFFSET expr NL { u8 instr[4] = {0xC5,0,0xC3,0}; instr[1] = $2; instr[3] = $5; emit(instr,4); }
	| CMPB '[' R_DP ']' ',' OFFSET expr NL { u8 instr[3] = {0xC2,0xC3,0}; instr[2] = $7; emit(instr,3); }
	| CMPB expr '[' R_USP ']' ',' OFFSET expr NL { u8 instr[4] = {0xC3,0,0xC3,0}; instr[1] = $2; instr[3] = $8; emit(instr,4); }
	| CMPB expr '[' R_X1 ']' ',' OFFSET expr NL { u8 instr[5] = {0xC0,0,0,0xC3,0}; _SET16(instr,1,$2); instr[4] = $8; emit(instr,5); }
	| CMPB expr '[' R_X2 ']' ',' OFFSET expr NL { u8 instr[5] = {0xC1,0,0,0xC3,0}; _SET16(instr,1,$2); instr[4] = $8; emit(instr,5); }
	| CMPB R_r0 ',' '#' expr NL { u8 instr[3] = {0x20,0xC0,0}; instr[2] = $5; emit(instr,3); }
	| CMPB R_r1 ',' '#' expr NL { u8 instr[3] = {0x21,0xC0,0}; instr[2] = $5; emit(instr,3); }
	| CMPB R_r2 ',' '#' expr NL { u8 instr[3] = {0x22,0xC0,0}; instr[2] = $5; emit(instr,3); }
	| CMPB R_r3 ',' '#' expr NL { u8 instr[3] = {0x23,0xC0,0}; instr[2] = $5; emit(instr,3); }
	| CMPB R_r4 ',' '#' expr NL { u8 instr[3] = {0x24,0xC0,0}; instr[2] = $5; emit(instr,3); }
	| CMPB R_r5 ',' '#' expr NL { u8 instr[3] = {0x25,0xC0,0}; instr[2] = $5; emit(instr,3); }
	| CMPB R_r6 ',' '#' expr NL { u8 instr[3] = {0x26,0xC0,0}; instr[2] = $5; emit(instr,3); }
	| CMPB R_r7 ',' '#' expr NL { u8 instr[3] = {0x27,0xC0,0}; instr[2] = $5; emit(instr,3); }
	| CMPB R_PSWH ',' '#' expr NL { u8 instr[3] = {0xA2,0xC0,0}; instr[2] = $5; emit(instr,3); }
	| CMPB R_PSWL ',' '#' expr NL { u8 instr[3] = {0xA3,0xC0,0}; instr[2] = $5; emit(instr,3); }
	| CMPB OFFSET expr ',' '#' expr NL { u8 instr[4] = {0xC4,0,0xC0,0}; instr[1] = $3; instr[3] = $6; emit(instr,4); }
	| CMPB expr ',' '#' expr NL { u8 instr[4] = {0xC5,0,0xC0,0}; instr[1] = $2; instr[3] = $5; emit(instr,4); }
	| CMPB '[' R_DP ']' ',' '#' expr NL { u8 instr[3] = {0xC2,0xC0,0}; instr[2] = $7; emit(instr,3); }
	| CMPB expr '[' R_USP ']' ',' '#' expr NL { u8 instr[4] = {0xC3,0,0xC0,0}; instr[1] = $2; instr[3] = $8; emit(instr,4); }
	| CMPB expr '[' R_X1 ']' ',' '#' expr NL { u8 instr[5] = {0xC0,0,0,0xC0,0}; _SET16(instr,1,$2); instr[4] = $8; emit(instr,5); }
	| CMPB expr '[' R_X2 ']' ',' '#' expr NL { u8 instr[5] = {0xC1,0,0,0xC0,0}; _SET16(instr,1,$2); instr[4] = $8; emit(instr,5); }
	| CMPC R_A ',' expr NL { u8 instr[4] = {0x90,0x9E,0,0}; _SET16(instr,2,$4); emit(instr,4); }
	| CMPC R_A ',' '[' R_er0 ']' NL { u8 instr[2] = {0x44,0xAC};  emit(instr,2); }
	| CMPC R_A ',' '[' R_er1 ']' NL { u8 instr[2] = {0x45,0xAC};  emit(instr,2); }
	| CMPC R_A ',' '[' R_er2 ']' NL { u8 instr[2] = {0x46,0xAC};  emit(instr,2); }
	| CMPC R_A ',' '[' R_er3 ']' NL { u8 instr[2] = {0x47,0xAC};  emit(instr,2); }
	| CMPC R_A ',' '[' R_DP ']' NL { u8 instr[2] = {0x92,0xAC};  emit(instr,2); }
	| CMPC R_A ',' '[' R_X1 ']' NL { u8 instr[2] = {0x90,0xAC};  emit(instr,2); }
	| CMPC R_A ',' '[' R_X2 ']' NL { u8 instr[2] = {0x91,0xAC};  emit(instr,2); }
	| CMPC R_A ',' '[' R_USP ']' NL { u8 instr[2] = {0xA1,0xAC};  emit(instr,2); }
	| CMPC R_A ',' '[' R_SSP ']' NL { u8 instr[2] = {0xA0,0xAC};  emit(instr,2); }
	| CMPC R_A ',' '[' R_LRB ']' NL { u8 instr[2] = {0xA4,0xAC};  emit(instr,2); }
	| CMPC R_A ',' '[' OFFSET expr ']' NL { u8 instr[3] = {0xB4,0,0xAC}; instr[1] = $6; emit(instr,3); }
	| CMPC R_A ',' '[' expr ']' NL { u8 instr[3] = {0xB5,0,0xAC}; instr[1] = $5; emit(instr,3); }
	| CMPC R_A ',' '[' '[' R_DP ']' ']' NL { u8 instr[2] = {0xB2,0xAC};  emit(instr,2); }
	| CMPC R_A ',' '[' expr '[' R_USP ']' ']' NL { u8 instr[3] = {0xB3,0,0xAC}; instr[1] = $5; emit(instr,3); }
	| CMPC R_A ',' '[' expr '[' R_X1 ']' ']' NL { u8 instr[4] = {0xB0,0,0,0xAC}; _SET16(instr,1,$5); emit(instr,4); }
	| CMPC R_A ',' '[' expr '[' R_X2 ']' ']' NL { u8 instr[4] = {0xB1,0,0,0xAC}; _SET16(instr,1,$5); emit(instr,4); }
	| CMPC R_A ',' expr '[' R_DP ']' NL { u8 instr[4] = {0x92,0xAD,0,0}; _SET16(instr,2,$4); emit(instr,4); }
	| CMPC R_A ',' expr '[' R_X1 ']' NL { u8 instr[4] = {0x90,0xAD,0,0}; _SET16(instr,2,$4); emit(instr,4); }
	| CMPC R_A ',' expr '[' R_X2 ']' NL { u8 instr[4] = {0x91,0xAD,0,0}; _SET16(instr,2,$4); emit(instr,4); }
	| CMPC R_A ',' expr '[' R_USP ']' NL { u8 instr[4] = {0xA1,0xAD,0,0}; _SET16(instr,2,$4); emit(instr,4); }
	| CMPC R_A ',' expr '[' OFFSET expr ']' NL { u8 instr[5] = {0xB4,0,0xAD,0,0}; _SET16(instr,3,$4); instr[1] = $7; emit(instr,5); }
	| CMPC R_A ',' expr '[' expr ']' NL { u8 instr[5] = {0xB5,0,0xAD,0,0}; _SET16(instr,3,$4); instr[1] = $6; emit(instr,5); }
	| CMPCB R_A ',' expr NL { u8 instr[4] = {0x90,0x9F,0,0}; _SET16(instr,2,$4); emit(instr,4); }
	| CMPCB R_A ',' '[' R_er0 ']' NL { u8 instr[2] = {0x44,0xAE};  emit(instr,2); }
	| CMPCB R_A ',' '[' R_er1 ']' NL { u8 instr[2] = {0x45,0xAE};  emit(instr,2); }
	| CMPCB R_A ',' '[' R_er2 ']' NL { u8 instr[2] = {0x46,0xAE};  emit(instr,2); }
	| CMPCB R_A ',' '[' R_er3 ']' NL { u8 instr[2] = {0x47,0xAE};  emit(instr,2); }
	| CMPCB R_A ',' '[' R_DP ']' NL { u8 instr[2] = {0x92,0xAE};  emit(instr,2); }
	| CMPCB R_A ',' '[' R_X1 ']' NL { u8 instr[2] = {0x90,0xAE};  emit(instr,2); }
	| CMPCB R_A ',' '[' R_X2 ']' NL { u8 instr[2] = {0x91,0xAE};  emit(instr,2); }
	| CMPCB R_A ',' '[' R_USP ']' NL { u8 instr[2] = {0xA1,0xAE};  emit(instr,2); }
	| CMPCB R_A ',' '[' R_SSP ']' NL { u8 instr[2] = {0xA0,0xAE};  emit(instr,2); }
	| CMPCB R_A ',' '[' R_LRB ']' NL { u8 instr[2] = {0xA4,0xAE};  emit(instr,2); }
	| CMPCB R_A ',' '[' OFFSET expr ']' NL { u8 instr[3] = {0xB4,0,0xAE}; instr[1] = $6; emit(instr,3); }
	| CMPCB R_A ',' '[' expr ']' NL { u8 instr[3] = {0xB5,0,0xAE}; instr[1] = $5; emit(instr,3); }
	| CMPCB R_A ',' '[' '[' R_DP ']' ']' NL { u8 instr[2] = {0xB2,0xAE};  emit(instr,2); }
	| CMPCB R_A ',' '[' expr '[' R_USP ']' ']' NL { u8 instr[3] = {0xB3,0,0xAE}; instr[1] = $5; emit(instr,3); }
	| CMPCB R_A ',' '[' expr '[' R_X1 ']' ']' NL { u8 instr[4] = {0xB0,0,0,0xAE}; _SET16(instr,1,$5); emit(instr,4); }
	| CMPCB R_A ',' '[' expr '[' R_X2 ']' ']' NL { u8 instr[4] = {0xB1,0,0,0xAE}; _SET16(instr,1,$5); emit(instr,4); }
	| CMPCB R_A ',' expr '[' R_DP ']' NL { u8 instr[4] = {0x92,0xAF,0,0}; _SET16(instr,2,$4); emit(instr,4); }
	| CMPCB R_A ',' expr '[' R_X1 ']' NL { u8 instr[4] = {0x90,0xAF,0,0}; _SET16(instr,2,$4); emit(instr,4); }
	| CMPCB R_A ',' expr '[' R_X2 ']' NL { u8 instr[4] = {0x91,0xAF,0,0}; _SET16(instr,2,$4); emit(instr,4); }
	| CMPCB R_A ',' expr '[' R_USP ']' NL { u8 instr[4] = {0xA2,0xAF,0,0}; _SET16(instr,2,$4); emit(instr,4); }
	| CMPCB R_A ',' expr '[' OFFSET expr ']' NL { u8 instr[5] = {0xB4,0,0xAF,0,0}; _SET16(instr,3,$4); instr[1] = $7; emit(instr,5); }
	| CMPCB R_A ',' expr '[' expr ']' NL { u8 instr[5] = {0xB5,0,0xAF,0,0}; _SET16(instr,3,$4); instr[1] = $6; emit(instr,5); }
	| DAA NL { u8 instr[1] = {0x93};  emit(instr,1); }
	| DAS NL { u8 instr[1] = {0x94};  emit(instr,1); }
	| DEC R_er0 NL { u8 instr[2] = {0x44,0x17};  emit(instr,2); }
	| DEC R_er1 NL { u8 instr[2] = {0x45,0x17};  emit(instr,2); }
	| DEC R_er2 NL { u8 instr[2] = {0x46,0x17};  emit(instr,2); }
	| DEC R_er3 NL { u8 instr[2] = {0x47,0x17};  emit(instr,2); }
	| DEC R_DP NL { u8 instr[1] = {0x82};  emit(instr,1); }
	| DEC R_X1 NL { u8 instr[1] = {0x80};  emit(instr,1); }
	| DEC R_X2 NL { u8 instr[1] = {0x81};  emit(instr,1); }
	| DEC R_USP NL { u8 instr[2] = {0xA1,0x17};  emit(instr,2); }
	| DEC R_SSP NL { u8 instr[2] = {0xA0,0x17};  emit(instr,2); }
	| DEC R_LRB NL { u8 instr[1] = {0xFE};  emit(instr,1); }
	| DEC OFFSET expr NL { u8 instr[3] = {0xB4,0,0x17}; instr[1] = $3; emit(instr,3); }
	| DEC expr NL { u8 instr[3] = {0xB5,0,0x17}; instr[1] = $2; emit(instr,3); }
	| DEC '[' R_DP ']' NL { u8 instr[2] = {0xB2,0x17};  emit(instr,2); }
	| DEC expr '[' R_USP ']' NL { u8 instr[3] = {0xB3,0,0x17}; instr[1] = $2; emit(instr,3); }
	| DEC expr '[' R_X1 ']' NL { u8 instr[4] = {0xB0,0,0,0x17}; _SET16(instr,1,$2); emit(instr,4); }
	| DEC expr '[' R_X2 ']' NL { u8 instr[4] = {0xB1,0,0,0x17}; _SET16(instr,1,$2); emit(instr,4); }
	| DECB R_r0 NL { u8 instr[1] = {0xB8};  emit(instr,1); }
	| DECB R_r1 NL { u8 instr[1] = {0xB9};  emit(instr,1); }
	| DECB R_r2 NL { u8 instr[1] = {0xBA};  emit(instr,1); }
	| DECB R_r3 NL { u8 instr[1] = {0xBB};  emit(instr,1); }
	| DECB R_r4 NL { u8 instr[1] = {0xBC};  emit(instr,1); }
	| DECB R_r5 NL { u8 instr[1] = {0xBD};  emit(instr,1); }
	| DECB R_r6 NL { u8 instr[1] = {0xBE};  emit(instr,1); }
	| DECB R_r7 NL { u8 instr[1] = {0xBF};  emit(instr,1); }
	| DECB R_PSWH NL { u8 instr[2] = {0xA2,0x17};  emit(instr,2); }
	| DECB R_PSWL NL { u8 instr[2] = {0xA3,0x17};  emit(instr,2); }
	| DECB OFFSET expr NL { u8 instr[3] = {0xC4,0,0x17}; instr[1] = $3; emit(instr,3); }
	| DECB expr NL { u8 instr[3] = {0xC5,0,0x17}; instr[1] = $2; emit(instr,3); }
	| DECB '[' R_DP ']' NL { u8 instr[2] = {0xC2,0x17};  emit(instr,2); }
	| DECB expr '[' R_USP ']' NL { u8 instr[3] = {0xC3,0,0x17}; instr[1] = $2; emit(instr,3); }
	| DECB expr '[' R_X1 ']' NL { u8 instr[4] = {0xC0,0,0,0x17}; _SET16(instr,1,$2); emit(instr,4); }
	| DECB expr '[' R_X2 ']' NL { u8 instr[4] = {0xC1,0,0,0x17}; _SET16(instr,1,$2); emit(instr,4); }
	| DIV NL { u8 instr[2] = {0x90,0x37};  emit(instr,2); }
	| DIVB NL { u8 instr[2] = {0xA2,0x36};  emit(instr,2); }
	| EXTND NL { u8 instr[1] = {0xF8};  emit(instr,1); }
	| INC R_er0 NL { u8 instr[2] = {0x44,0x16};  emit(instr,2); }
	| INC R_er1 NL { u8 instr[2] = {0x45,0x16};  emit(instr,2); }
	| INC R_er2 NL { u8 instr[2] = {0x46,0x16};  emit(instr,2); }
	| INC R_er3 NL { u8 instr[2] = {0x47,0x16};  emit(instr,2); }
	| INC R_DP NL { u8 instr[1] = {0x72};  emit(instr,1); }
	| INC R_X1 NL { u8 instr[1] = {0x70};  emit(instr,1); }
	| INC R_X2 NL { u8 instr[1] = {0x71};  emit(instr,1); }
	| INC R_USP NL { u8 instr[2] = {0xA1,0x16};  emit(instr,2); }
	| INC R_SSP NL { u8 instr[2] = {0xA0,0x16};  emit(instr,2); }
	| INC R_LRB NL { u8 instr[1] = {0xFD};  emit(instr,1); }
	| INC OFFSET expr NL { u8 instr[3] = {0xB4,0,0x16}; instr[1] = $3; emit(instr,3); }
	| INC expr NL { u8 instr[3] = {0xB5,0,0x16}; instr[1] = $2; emit(instr,3); }
	| INC '[' R_DP ']' NL { u8 instr[2] = {0xB2,0x16};  emit(instr,2); }
	| INC expr '[' R_USP ']' NL { u8 instr[3] = {0xB3,0,0x16}; instr[1] = $2; emit(instr,3); }
	| INC expr '[' R_X1 ']' NL { u8 instr[4] = {0xB0,0,0,0x16}; _SET16(instr,1,$2); emit(instr,4); }
	| INC expr '[' R_X2 ']' NL { u8 instr[4] = {0xB1,0,0,0x16}; _SET16(instr,1,$2); emit(instr,4); }
	| INCB R_r0 NL { u8 instr[1] = {0xA8};  emit(instr,1); }
	| INCB R_r1 NL { u8 instr[1] = {0xA9};  emit(instr,1); }
	| INCB R_r2 NL { u8 instr[1] = {0xAA};  emit(instr,1); }
	| INCB R_r3 NL { u8 instr[1] = {0xAB};  emit(instr,1); }
	| INCB R_r4 NL { u8 instr[1] = {0xAC};  emit(instr,1); }
	| INCB R_r5 NL { u8 instr[1] = {0xAD};  emit(instr,1); }
	| INCB R_r6 NL { u8 instr[1] = {0xAE};  emit(instr,1); }
	| INCB R_r7 NL { u8 instr[1] = {0xAF};  emit(instr,1); }
	| INCB R_PSWH NL { u8 instr[2] = {0xA2,0x16};  emit(instr,2); }
	| INCB R_PSWL NL { u8 instr[2] = {0xA3,0x16};  emit(instr,2); }
	| INCB OFFSET expr NL { u8 instr[3] = {0xC4,0,0x16}; instr[1] = $3; emit(instr,3); }
	| INCB expr NL { u8 instr[3] = {0xC5,0,0x16}; instr[1] = $2; emit(instr,3); }
	| INCB '[' R_DP ']' NL { u8 instr[2] = {0xC2,0x16};  emit(instr,2); }
	| INCB expr '[' R_USP ']' NL { u8 instr[3] = {0xC3,0,0x16}; instr[1] = $2; emit(instr,3); }
	| INCB expr '[' R_X1 ']' NL { u8 instr[4] = {0xC0,0,0,0x16}; _SET16(instr,1,$2); emit(instr,4); }
	| INCB expr '[' R_X2 ']' NL { u8 instr[4] = {0xC1,0,0,0x16}; _SET16(instr,1,$2); emit(instr,4); }
	| J expr NL { u8 instr[3] = {0x03,0,0}; _SET16(instr,1,$2); emit(instr,3); }
	| J '[' R_er0 ']' NL { u8 instr[2] = {0x44,0x22};  emit(instr,2); }
	| J '[' R_er1 ']' NL { u8 instr[2] = {0x45,0x22};  emit(instr,2); }
	| J '[' R_er2 ']' NL { u8 instr[2] = {0x46,0x22};  emit(instr,2); }
	| J '[' R_er3 ']' NL { u8 instr[2] = {0x47,0x22};  emit(instr,2); }
	| J '[' R_DP ']' NL { u8 instr[2] = {0x92,0x22};  emit(instr,2); }
	| J '[' R_X1 ']' NL { u8 instr[2] = {0x90,0x22};  emit(instr,2); }
	| J '[' R_X2 ']' NL { u8 instr[2] = {0x91,0x22};  emit(instr,2); }
	| J '[' R_USP ']' NL { u8 instr[2] = {0xA1,0x22};  emit(instr,2); }
	| J '[' R_SSP ']' NL { u8 instr[2] = {0xA0,0x22};  emit(instr,2); }
	| J '[' R_LRB ']' NL { u8 instr[2] = {0xA4,0x22};  emit(instr,2); }
	| J '[' OFFSET expr ']' NL { u8 instr[3] = {0xB4,0,0x22}; instr[1] = $4; emit(instr,3); }
	| J '[' expr ']' NL { u8 instr[3] = {0xB5,0,0x22}; instr[1] = $3; emit(instr,3); }
	| J '[' '[' R_DP ']' ']' NL { u8 instr[2] = {0xB2,0x22};  emit(instr,2); }
	| J '[' expr '[' R_USP ']' ']' NL { u8 instr[3] = {0xB3,0,0x22}; instr[1] = $3; emit(instr,3); }
	| J '[' expr '[' R_X1 ']' ']' NL { u8 instr[4] = {0xB0,0,0,0x22}; _SET16(instr,1,$3); emit(instr,4); }
	| J '[' expr '[' R_X2 ']' ']' NL { u8 instr[4] = {0xB1,0,0,0x22}; _SET16(instr,1,$3); emit(instr,4); }
	| JBR OFFSET expr DOT0 ',' expr NL { u8 instr[3] = {0xD8,0,0}; instr[1] = $3; instr[2] = _REL8(3,$6); emit(instr,3); }
	| JBR OFFSET expr DOT1 ',' expr NL { u8 instr[3] = {0xD9,0,0}; instr[1] = $3; instr[2] = _REL8(3,$6); emit(instr,3); }
	| JBR OFFSET expr DOT2 ',' expr NL { u8 instr[3] = {0xDA,0,0}; instr[1] = $3; instr[2] = _REL8(3,$6); emit(instr,3); }
	| JBR OFFSET expr DOT3 ',' expr NL { u8 instr[3] = {0xDB,0,0}; instr[1] = $3; instr[2] = _REL8(3,$6); emit(instr,3); }
	| JBR OFFSET expr DOT4 ',' expr NL { u8 instr[3] = {0xDC,0,0}; instr[1] = $3; instr[2] = _REL8(3,$6); emit(instr,3); }
	| JBR OFFSET expr DOT5 ',' expr NL { u8 instr[3] = {0xDD,0,0}; instr[1] = $3; instr[2] = _REL8(3,$6); emit(instr,3); }
	| JBR OFFSET expr DOT6 ',' expr NL { u8 instr[3] = {0xDE,0,0}; instr[1] = $3; instr[2] = _REL8(3,$6); emit(instr,3); }
	| JBR OFFSET expr DOT7 ',' expr NL { u8 instr[3] = {0xDF,0,0}; instr[1] = $3; instr[2] = _REL8(3,$6); emit(instr,3); }
	| JBS OFFSET expr DOT0 ',' expr NL { u8 instr[3] = {0xE8,0,0}; instr[1] = $3; instr[2] = _REL8(3,$6); emit(instr,3); }
	| JBS OFFSET expr DOT1 ',' expr NL { u8 instr[3] = {0xE9,0,0}; instr[1] = $3; instr[2] = _REL8(3,$6); emit(instr,3); }
	| JBS OFFSET expr DOT2 ',' expr NL { u8 instr[3] = {0xEA,0,0}; instr[1] = $3; instr[2] = _REL8(3,$6); emit(instr,3); }
	| JBS OFFSET expr DOT3 ',' expr NL { u8 instr[3] = {0xEB,0,0}; instr[1] = $3; instr[2] = _REL8(3,$6); emit(instr,3); }
	| JBS OFFSET expr DOT4 ',' expr NL { u8 instr[3] = {0xEC,0,0}; instr[1] = $3; instr[2] = _REL8(3,$6); emit(instr,3); }
	| JBS OFFSET expr DOT5 ',' expr NL { u8 instr[3] = {0xED,0,0}; instr[1] = $3; instr[2] = _REL8(3,$6); emit(instr,3); }
	| JBS OFFSET expr DOT6 ',' expr NL { u8 instr[3] = {0xEE,0,0}; instr[1] = $3; instr[2] = _REL8(3,$6); emit(instr,3); }
	| JBS OFFSET expr DOT7 ',' expr NL { u8 instr[3] = {0xEF,0,0}; instr[1] = $3; instr[2] = _REL8(3,$6); emit(instr,3); }
	| JEQ expr NL { u8 instr[2] = {0xC9,0}; instr[1] = _REL8(2,$2); emit(instr,2); }
	| JNE expr NL { u8 instr[2] = {0xCE,0}; instr[1] = _REL8(2,$2); emit(instr,2); }
	| JLT expr NL { u8 instr[2] = {0xCA,0}; instr[1] = _REL8(2,$2); emit(instr,2); }
	| JLE expr NL { u8 instr[2] = {0xCF,0}; instr[1] = _REL8(2,$2); emit(instr,2); }
	| JGT expr NL { u8 instr[2] = {0xC8,0}; instr[1] = _REL8(2,$2); emit(instr,2); }
	| JGE expr NL { u8 instr[2] = {0xCD,0}; instr[1] = _REL8(2,$2); emit(instr,2); }
	| JRNZ R_DP ',' expr NL { u8 instr[2] = {0x30,0}; instr[1] = _REL8(2,$4); emit(instr,2); }
	| L R_A ',' '#' expr NL { u8 instr[3] = {0x67,0,0}; _SET16(instr,1,$5); emit(instr,3); }
	| L R_A ',' R_er0 NL { u8 instr[1] = {0x34};  emit(instr,1); }
	| L R_A ',' R_er1 NL { u8 instr[1] = {0x35};  emit(instr,1); }
	| L R_A ',' R_er2 NL { u8 instr[1] = {0x36};  emit(instr,1); }
	| L R_A ',' R_er3 NL { u8 instr[1] = {0x37};  emit(instr,1); }
	| L R_A ',' R_DP NL { u8 instr[1] = {0x42};  emit(instr,1); }
	| L R_A ',' R_X1 NL { u8 instr[1] = {0x40};  emit(instr,1); }
	| L R_A ',' R_X2 NL { u8 instr[1] = {0x41};  emit(instr,1); }
	| L R_A ',' OFFSET expr NL { u8 instr[2] = {0xE4,0}; instr[1] = $5; emit(instr,2); }
	| L R_A ',' expr NL { u8 instr[2] = {0xE5,0}; instr[1] = $4; emit(instr,2); }
	| L R_A ',' '[' R_DP ']' NL { u8 instr[1] = {0xE2};  emit(instr,1); }
	| L R_A ',' expr '[' R_USP ']' NL { u8 instr[2] = {0xE3,0}; instr[1] = $4; emit(instr,2); }
	| L R_A ',' expr '[' R_X1 ']' NL { u8 instr[3] = {0xE0,0,0}; _SET16(instr,1,$4); emit(instr,3); }
	| L R_A ',' expr '[' R_X2 ']' NL { u8 instr[3] = {0xE1,0,0}; _SET16(instr,1,$4); emit(instr,3); }
	| LB R_A ',' '#' expr NL { u8 instr[2] = {0x77,0}; instr[1] = $5; emit(instr,2); }
	| LB R_A ',' R_r0 NL { u8 instr[1] = {0x78};  emit(instr,1); }
	| LB R_A ',' R_r1 NL { u8 instr[1] = {0x79};  emit(instr,1); }
	| LB R_A ',' R_r2 NL { u8 instr[1] = {0x7A};  emit(instr,1); }
	| LB R_A ',' R_r3 NL { u8 instr[1] = {0x7B};  emit(instr,1); }
	| LB R_A ',' R_r4 NL { u8 instr[1] = {0x7C};  emit(instr,1); }
	| LB R_A ',' R_r5 NL { u8 instr[1] = {0x7D};  emit(instr,1); }
	| LB R_A ',' R_r6 NL { u8 instr[1] = {0x7E};  emit(instr,1); }
	| LB R_A ',' R_r7 NL { u8 instr[1] = {0x7F};  emit(instr,1); }
	| LB R_A ',' OFFSET expr NL { u8 instr[2] = {0xF4,0}; instr[1] = $5; emit(instr,2); }
	| LB R_A ',' expr NL { u8 instr[2] = {0xF5,0}; instr[1] = $4; emit(instr,2); }
	| LB R_A ',' '[' R_DP ']' NL { u8 instr[1] = {0xF2};  emit(instr,1); }
	| LB R_A ',' expr '[' R_USP ']' NL { u8 instr[2] = {0xF3,0}; instr[1] = $4; emit(instr,2); }
	| LB R_A ',' expr '[' R_X1 ']' NL { u8 instr[3] = {0xF0,0,0}; _SET16(instr,1,$4); emit(instr,3); }
	| LB R_A ',' expr '[' R_X2 ']' NL { u8 instr[3] = {0xF1,0,0}; _SET16(instr,1,$4); emit(instr,3); }
	| LC R_A ',' expr NL { u8 instr[4] = {0x90,0x9C,0,0}; _SET16(instr,2,$4); emit(instr,4); }
	| LC R_A ',' '[' R_er0 ']' NL { u8 instr[2] = {0x44,0xA8};  emit(instr,2); }
	| LC R_A ',' '[' R_er1 ']' NL { u8 instr[2] = {0x45,0xA8};  emit(instr,2); }
	| LC R_A ',' '[' R_er2 ']' NL { u8 instr[2] = {0x46,0xA8};  emit(instr,2); }
	| LC R_A ',' '[' R_er3 ']' NL { u8 instr[2] = {0x47,0xA8};  emit(instr,2); }
	| LC R_A ',' '[' R_DP ']' NL { u8 instr[2] = {0x92,0xA8};  emit(instr,2); }
	| LC R_A ',' '[' R_X1 ']' NL { u8 instr[2] = {0x90,0xA8};  emit(instr,2); }
	| LC R_A ',' '[' R_X2 ']' NL { u8 instr[2] = {0x91,0xA8};  emit(instr,2); }
	| LC R_A ',' '[' R_USP ']' NL { u8 instr[2] = {0xA1,0xA8};  emit(instr,2); }
	| LC R_A ',' '[' R_SSP ']' NL { u8 instr[2] = {0xA0,0xA8};  emit(instr,2); }
	| LC R_A ',' '[' R_LRB ']' NL { u8 instr[2] = {0xA4,0xA8};  emit(instr,2); }
	| LC R_A ',' '[' OFFSET expr ']' NL { u8 instr[3] = {0xB4,0,0xA8}; instr[1] = $6; emit(instr,3); }
	| LC R_A ',' '[' expr ']' NL { u8 instr[3] = {0xB5,0,0xA8}; instr[1] = $5; emit(instr,3); }
	| LC R_A ',' '[' '[' R_DP ']' ']' NL { u8 instr[2] = {0xB2,0xA8};  emit(instr,2); }
	| LC R_A ',' '[' expr '[' R_USP ']' ']' NL { u8 instr[3] = {0xB3,0,0xA8}; instr[1] = $5; emit(instr,3); }
	| LC R_A ',' '[' expr '[' R_X1 ']' ']' NL { u8 instr[4] = {0xB0,0,0,0xA8}; _SET16(instr,1,$5); emit(instr,4); }
	| LC R_A ',' '[' expr '[' R_X2 ']' ']' NL { u8 instr[4] = {0xB1,0,0,0xA8}; _SET16(instr,1,$5); emit(instr,4); }
	| LC R_A ',' expr '[' R_DP ']' NL { u8 instr[4] = {0x92,0xA9,0,0}; _SET16(instr,2,$4); emit(instr,4); }
	| LC R_A ',' expr '[' R_X1 ']' NL { u8 instr[4] = {0x90,0xA9,0,0}; _SET16(instr,2,$4); emit(instr,4); }
	| LC R_A ',' expr '[' R_X2 ']' NL { u8 instr[4] = {0x91,0xA9,0,0}; _SET16(instr,2,$4); emit(instr,4); }
	| LC R_A ',' expr '[' R_USP ']' NL { u8 instr[4] = {0xA1,0xA9,0,0}; _SET16(instr,2,$4); emit(instr,4); }
	| LC R_A ',' expr '[' OFFSET expr ']' NL { u8 instr[5] = {0xB4,0,0xA9,0,0}; _SET16(instr,3,$4); instr[1] = $7; emit(instr,5); }
	| LC R_A ',' expr '[' expr ']' NL { u8 instr[5] = {0xB5,0,0xA9,0,0}; _SET16(instr,3,$4); instr[1] = $6; emit(instr,5); }
	| LCB R_A ',' expr NL { u8 instr[4] = {0x90,0x9D,0,0}; _SET16(instr,2,$4); emit(instr,4); }
	| LCB R_A ',' '[' R_er0 ']' NL { u8 instr[2] = {0x44,0xAA};  emit(instr,2); }
	| LCB R_A ',' '[' R_er1 ']' NL { u8 instr[2] = {0x45,0xAA};  emit(instr,2); }
	| LCB R_A ',' '[' R_er2 ']' NL { u8 instr[2] = {0x46,0xAA};  emit(instr,2); }
	| LCB R_A ',' '[' R_er3 ']' NL { u8 instr[2] = {0x47,0xAA};  emit(instr,2); }
	| LCB R_A ',' '[' R_DP ']' NL { u8 instr[2] = {0x92,0xAA};  emit(instr,2); }
	| LCB R_A ',' '[' R_X1 ']' NL { u8 instr[2] = {0x90,0xAA};  emit(instr,2); }
	| LCB R_A ',' '[' R_X2 ']' NL { u8 instr[2] = {0x91,0xAA};  emit(instr,2); }
	| LCB R_A ',' '[' R_USP ']' NL { u8 instr[2] = {0xA1,0xAA};  emit(instr,2); }
	| LCB R_A ',' '[' R_SSP ']' NL { u8 instr[2] = {0xA0,0xAA};  emit(instr,2); }
	| LCB R_A ',' '[' R_LRB ']' NL { u8 instr[2] = {0xA4,0xAA};  emit(instr,2); }
	| LCB R_A ',' '[' OFFSET expr ']' NL { u8 instr[3] = {0xB4,0,0xAA}; instr[1] = $6; emit(instr,3); }
	| LCB R_A ',' '[' expr ']' NL { u8 instr[3] = {0xB5,0,0xAA}; instr[1] = $5; emit(instr,3); }
	| LCB R_A ',' '[' '[' R_DP ']' ']' NL { u8 instr[2] = {0xB2,0xAA};  emit(instr,2); }
	| LCB R_A ',' '[' expr '[' R_USP ']' ']' NL { u8 instr[3] = {0xB3,0,0xAA}; instr[1] = $5; emit(instr,3); }
	| LCB R_A ',' '[' expr '[' R_X1 ']' ']' NL { u8 instr[4] = {0xB0,0,0,0xAA}; _SET16(instr,1,$5); emit(instr,4); }
	| LCB R_A ',' '[' expr '[' R_X2 ']' ']' NL { u8 instr[4] = {0xB1,0,0,0xAA}; _SET16(instr,1,$5); emit(instr,4); }
	| LCB R_A ',' expr '[' R_DP ']' NL { u8 instr[4] = {0x92,0xAB,0,0}; _SET16(instr,2,$4); emit(instr,4); }
	| LCB R_A ',' expr '[' R_X1 ']' NL { u8 instr[4] = {0x90,0xAB,0,0}; _SET16(instr,2,$4); emit(instr,4); }
	| LCB R_A ',' expr '[' R_X2 ']' NL { u8 instr[4] = {0x91,0xAB,0,0}; _SET16(instr,2,$4); emit(instr,4); }
	| LCB R_A ',' expr '[' R_USP ']' NL { u8 instr[4] = {0xA1,0xAB,0,0}; _SET16(instr,2,$4); emit(instr,4); }
	| LCB R_A ',' expr '[' OFFSET expr ']' NL { u8 instr[5] = {0xB4,0,0xAB,0,0}; _SET16(instr,3,$4); instr[1] = $7; emit(instr,5); }
	| LCB R_A ',' expr '[' expr ']' NL { u8 instr[5] = {0xB5,0,0xAB,0,0}; _SET16(instr,3,$4); instr[1] = $6; emit(instr,5); }
	| MB R_C ',' R_r0 DOT0 NL { u8 instr[2] = {0x20,0x28};  emit(instr,2); }
	| MB R_C ',' R_r0 DOT1 NL { u8 instr[2] = {0x20,0x29};  emit(instr,2); }
	| MB R_C ',' R_r0 DOT2 NL { u8 instr[2] = {0x20,0x2A};  emit(instr,2); }
	| MB R_C ',' R_r0 DOT3 NL { u8 instr[2] = {0x20,0x2B};  emit(instr,2); }
	| MB R_C ',' R_r0 DOT4 NL { u8 instr[2] = {0x20,0x2C};  emit(instr,2); }
	| MB R_C ',' R_r0 DOT5 NL { u8 instr[2] = {0x20,0x2D};  emit(instr,2); }
	| MB R_C ',' R_r0 DOT6 NL { u8 instr[2] = {0x20,0x2E};  emit(instr,2); }
	| MB R_C ',' R_r0 DOT7 NL { u8 instr[2] = {0x20,0x2F};  emit(instr,2); }
	| MB R_C ',' R_r1 DOT0 NL { u8 instr[2] = {0x21,0x28};  emit(instr,2); }
	| MB R_C ',' R_r1 DOT1 NL { u8 instr[2] = {0x21,0x29};  emit(instr,2); }
	| MB R_C ',' R_r1 DOT2 NL { u8 instr[2] = {0x21,0x2A};  emit(instr,2); }
	| MB R_C ',' R_r1 DOT3 NL { u8 instr[2] = {0x21,0x2B};  emit(instr,2); }
	| MB R_C ',' R_r1 DOT4 NL { u8 instr[2] = {0x21,0x2C};  emit(instr,2); }
	| MB R_C ',' R_r1 DOT5 NL { u8 instr[2] = {0x21,0x2D};  emit(instr,2); }
	| MB R_C ',' R_r1 DOT6 NL { u8 instr[2] = {0x21,0x2E};  emit(instr,2); }
	| MB R_C ',' R_r1 DOT7 NL { u8 instr[2] = {0x21,0x2F};  emit(instr,2); }
	| MB R_C ',' R_r2 DOT0 NL { u8 instr[2] = {0x22,0x28};  emit(instr,2); }
	| MB R_C ',' R_r2 DOT1 NL { u8 instr[2] = {0x22,0x29};  emit(instr,2); }
	| MB R_C ',' R_r2 DOT2 NL { u8 instr[2] = {0x22,0x2A};  emit(instr,2); }
	| MB R_C ',' R_r2 DOT3 NL { u8 instr[2] = {0x22,0x2B};  emit(instr,2); }
	| MB R_C ',' R_r2 DOT4 NL { u8 instr[2] = {0x22,0x2C};  emit(instr,2); }
	| MB R_C ',' R_r2 DOT5 NL { u8 instr[2] = {0x22,0x2D};  emit(instr,2); }
	| MB R_C ',' R_r2 DOT6 NL { u8 instr[2] = {0x22,0x2E};  emit(instr,2); }
	| MB R_C ',' R_r2 DOT7 NL { u8 instr[2] = {0x22,0x2F};  emit(instr,2); }
	| MB R_C ',' R_r3 DOT0 NL { u8 instr[2] = {0x23,0x28};  emit(instr,2); }
	| MB R_C ',' R_r3 DOT1 NL { u8 instr[2] = {0x23,0x29};  emit(instr,2); }
	| MB R_C ',' R_r3 DOT2 NL { u8 instr[2] = {0x23,0x2A};  emit(instr,2); }
	| MB R_C ',' R_r3 DOT3 NL { u8 instr[2] = {0x23,0x2B};  emit(instr,2); }
	| MB R_C ',' R_r3 DOT4 NL { u8 instr[2] = {0x23,0x2C};  emit(instr,2); }
	| MB R_C ',' R_r3 DOT5 NL { u8 instr[2] = {0x23,0x2D};  emit(instr,2); }
	| MB R_C ',' R_r3 DOT6 NL { u8 instr[2] = {0x23,0x2E};  emit(instr,2); }
	| MB R_C ',' R_r3 DOT7 NL { u8 instr[2] = {0x23,0x2F};  emit(instr,2); }
	| MB R_C ',' R_r4 DOT0 NL { u8 instr[2] = {0x24,0x28};  emit(instr,2); }
	| MB R_C ',' R_r4 DOT1 NL { u8 instr[2] = {0x24,0x29};  emit(instr,2); }
	| MB R_C ',' R_r4 DOT2 NL { u8 instr[2] = {0x24,0x2A};  emit(instr,2); }
	| MB R_C ',' R_r4 DOT3 NL { u8 instr[2] = {0x24,0x2B};  emit(instr,2); }
	| MB R_C ',' R_r4 DOT4 NL { u8 instr[2] = {0x24,0x2C};  emit(instr,2); }
	| MB R_C ',' R_r4 DOT5 NL { u8 instr[2] = {0x24,0x2D};  emit(instr,2); }
	| MB R_C ',' R_r4 DOT6 NL { u8 instr[2] = {0x24,0x2E};  emit(instr,2); }
	| MB R_C ',' R_r4 DOT7 NL { u8 instr[2] = {0x24,0x2F};  emit(instr,2); }
	| MB R_C ',' R_r5 DOT0 NL { u8 instr[2] = {0x25,0x28};  emit(instr,2); }
	| MB R_C ',' R_r5 DOT1 NL { u8 instr[2] = {0x25,0x29};  emit(instr,2); }
	| MB R_C ',' R_r5 DOT2 NL { u8 instr[2] = {0x25,0x2A};  emit(instr,2); }
	| MB R_C ',' R_r5 DOT3 NL { u8 instr[2] = {0x25,0x2B};  emit(instr,2); }
	| MB R_C ',' R_r5 DOT4 NL { u8 instr[2] = {0x25,0x2C};  emit(instr,2); }
	| MB R_C ',' R_r5 DOT5 NL { u8 instr[2] = {0x25,0x2D};  emit(instr,2); }
	| MB R_C ',' R_r5 DOT6 NL { u8 instr[2] = {0x25,0x2E};  emit(instr,2); }
	| MB R_C ',' R_r5 DOT7 NL { u8 instr[2] = {0x25,0x2F};  emit(instr,2); }
	| MB R_C ',' R_r6 DOT0 NL { u8 instr[2] = {0x26,0x28};  emit(instr,2); }
	| MB R_C ',' R_r6 DOT1 NL { u8 instr[2] = {0x26,0x29};  emit(instr,2); }
	| MB R_C ',' R_r6 DOT2 NL { u8 instr[2] = {0x26,0x2A};  emit(instr,2); }
	| MB R_C ',' R_r6 DOT3 NL { u8 instr[2] = {0x26,0x2B};  emit(instr,2); }
	| MB R_C ',' R_r6 DOT4 NL { u8 instr[2] = {0x26,0x2C};  emit(instr,2); }
	| MB R_C ',' R_r6 DOT5 NL { u8 instr[2] = {0x26,0x2D};  emit(instr,2); }
	| MB R_C ',' R_r6 DOT6 NL { u8 instr[2] = {0x26,0x2E};  emit(instr,2); }
	| MB R_C ',' R_r6 DOT7 NL { u8 instr[2] = {0x26,0x2F};  emit(instr,2); }
	| MB R_C ',' R_r7 DOT0 NL { u8 instr[2] = {0x27,0x28};  emit(instr,2); }
	| MB R_C ',' R_r7 DOT1 NL { u8 instr[2] = {0x27,0x29};  emit(instr,2); }
	| MB R_C ',' R_r7 DOT2 NL { u8 instr[2] = {0x27,0x2A};  emit(instr,2); }
	| MB R_C ',' R_r7 DOT3 NL { u8 instr[2] = {0x27,0x2B};  emit(instr,2); }
	| MB R_C ',' R_r7 DOT4 NL { u8 instr[2] = {0x27,0x2C};  emit(instr,2); }
	| MB R_C ',' R_r7 DOT5 NL { u8 instr[2] = {0x27,0x2D};  emit(instr,2); }
	| MB R_C ',' R_r7 DOT6 NL { u8 instr[2] = {0x27,0x2E};  emit(instr,2); }
	| MB R_C ',' R_r7 DOT7 NL { u8 instr[2] = {0x27,0x2F};  emit(instr,2); }
	| MB R_C ',' R_PSWH DOT0 NL { u8 instr[2] = {0xA2,0x28};  emit(instr,2); }
	| MB R_C ',' R_PSWH DOT1 NL { u8 instr[2] = {0xA2,0x29};  emit(instr,2); }
	| MB R_C ',' R_PSWH DOT2 NL { u8 instr[2] = {0xA2,0x2A};  emit(instr,2); }
	| MB R_C ',' R_PSWH DOT3 NL { u8 instr[2] = {0xA2,0x2B};  emit(instr,2); }
	| MB R_C ',' R_PSWH DOT4 NL { u8 instr[2] = {0xA2,0x2C};  emit(instr,2); }
	| MB R_C ',' R_PSWH DOT5 NL { u8 instr[2] = {0xA2,0x2D};  emit(instr,2); }
	| MB R_C ',' R_PSWH DOT6 NL { u8 instr[2] = {0xA2,0x2E};  emit(instr,2); }
	| MB R_C ',' R_PSWH DOT7 NL { u8 instr[2] = {0xA2,0x2F};  emit(instr,2); }
	| MB R_C ',' R_PSWL DOT0 NL { u8 instr[2] = {0xA3,0x28};  emit(instr,2); }
	| MB R_C ',' R_PSWL DOT1 NL { u8 instr[2] = {0xA3,0x29};  emit(instr,2); }
	| MB R_C ',' R_PSWL DOT2 NL { u8 instr[2] = {0xA3,0x2A};  emit(instr,2); }
	| MB R_C ',' R_PSWL DOT3 NL { u8 instr[2] = {0xA3,0x2B};  emit(instr,2); }
	| MB R_C ',' R_PSWL DOT4 NL { u8 instr[2] = {0xA3,0x2C};  emit(instr,2); }
	| MB R_C ',' R_PSWL DOT5 NL { u8 instr[2] = {0xA3,0x2D};  emit(instr,2); }
	| MB R_C ',' R_PSWL DOT6 NL { u8 instr[2] = {0xA3,0x2E};  emit(instr,2); }
	| MB R_C ',' R_PSWL DOT7 NL { u8 instr[2] = {0xA3,0x2F};  emit(instr,2); }
	| MB R_C ',' OFFSET expr DOT0 NL { u8 instr[3] = {0xC4,0,0x28}; instr[1] = $5; emit(instr,3); }
	| MB R_C ',' OFFSET expr DOT1 NL { u8 instr[3] = {0xC4,0,0x29}; instr[1] = $5; emit(instr,3); }
	| MB R_C ',' OFFSET expr DOT2 NL { u8 instr[3] = {0xC4,0,0x2A}; instr[1] = $5; emit(instr,3); }
	| MB R_C ',' OFFSET expr DOT3 NL { u8 instr[3] = {0xC4,0,0x2B}; instr[1] = $5; emit(instr,3); }
	| MB R_C ',' OFFSET expr DOT4 NL { u8 instr[3] = {0xC4,0,0x2C}; instr[1] = $5; emit(instr,3); }
	| MB R_C ',' OFFSET expr DOT5 NL { u8 instr[3] = {0xC4,0,0x2D}; instr[1] = $5; emit(instr,3); }
	| MB R_C ',' OFFSET expr DOT6 NL { u8 instr[3] = {0xC4,0,0x2E}; instr[1] = $5; emit(instr,3); }
	| MB R_C ',' OFFSET expr DOT7 NL { u8 instr[3] = {0xC4,0,0x2F}; instr[1] = $5; emit(instr,3); }
	| MB R_C ',' expr DOT0 NL { u8 instr[3] = {0xC5,0,0x28}; instr[1] = $4; emit(instr,3); }
	| MB R_C ',' expr DOT1 NL { u8 instr[3] = {0xC5,0,0x29}; instr[1] = $4; emit(instr,3); }
	| MB R_C ',' expr DOT2 NL { u8 instr[3] = {0xC5,0,0x2A}; instr[1] = $4; emit(instr,3); }
	| MB R_C ',' expr DOT3 NL { u8 instr[3] = {0xC5,0,0x2B}; instr[1] = $4; emit(instr,3); }
	| MB R_C ',' expr DOT4 NL { u8 instr[3] = {0xC5,0,0x2C}; instr[1] = $4; emit(instr,3); }
	| MB R_C ',' expr DOT5 NL { u8 instr[3] = {0xC5,0,0x2D}; instr[1] = $4; emit(instr,3); }
	| MB R_C ',' expr DOT6 NL { u8 instr[3] = {0xC5,0,0x2E}; instr[1] = $4; emit(instr,3); }
	| MB R_C ',' expr DOT7 NL { u8 instr[3] = {0xC5,0,0x2F}; instr[1] = $4; emit(instr,3); }
	| MB R_C ',' '[' R_DP ']' DOT0 NL { u8 instr[2] = {0xC2,0x28};  emit(instr,2); }
	| MB R_C ',' '[' R_DP ']' DOT1 NL { u8 instr[2] = {0xC2,0x29};  emit(instr,2); }
	| MB R_C ',' '[' R_DP ']' DOT2 NL { u8 instr[2] = {0xC2,0x2A};  emit(instr,2); }
	| MB R_C ',' '[' R_DP ']' DOT3 NL { u8 instr[2] = {0xC2,0x2B};  emit(instr,2); }
	| MB R_C ',' '[' R_DP ']' DOT4 NL { u8 instr[2] = {0xC2,0x2C};  emit(instr,2); }
	| MB R_C ',' '[' R_DP ']' DOT5 NL { u8 instr[2] = {0xC2,0x2D};  emit(instr,2); }
	| MB R_C ',' '[' R_DP ']' DOT6 NL { u8 instr[2] = {0xC2,0x2E};  emit(instr,2); }
	| MB R_C ',' '[' R_DP ']' DOT7 NL { u8 instr[2] = {0xC2,0x2F};  emit(instr,2); }
	| MB R_C ',' expr '[' R_USP ']' DOT0 NL { u8 instr[3] = {0xC3,0,0x28}; instr[1] = $4; emit(instr,3); }
	| MB R_C ',' expr '[' R_USP ']' DOT1 NL { u8 instr[3] = {0xC3,0,0x29}; instr[1] = $4; emit(instr,3); }
	| MB R_C ',' expr '[' R_USP ']' DOT2 NL { u8 instr[3] = {0xC3,0,0x2A}; instr[1] = $4; emit(instr,3); }
	| MB R_C ',' expr '[' R_USP ']' DOT3 NL { u8 instr[3] = {0xC3,0,0x2B}; instr[1] = $4; emit(instr,3); }
	| MB R_C ',' expr '[' R_USP ']' DOT4 NL { u8 instr[3] = {0xC3,0,0x2C}; instr[1] = $4; emit(instr,3); }
	| MB R_C ',' expr '[' R_USP ']' DOT5 NL { u8 instr[3] = {0xC3,0,0x2D}; instr[1] = $4; emit(instr,3); }
	| MB R_C ',' expr '[' R_USP ']' DOT6 NL { u8 instr[3] = {0xC3,0,0x2E}; instr[1] = $4; emit(instr,3); }
	| MB R_C ',' expr '[' R_USP ']' DOT7 NL { u8 instr[3] = {0xC3,0,0x2F}; instr[1] = $4; emit(instr,3); }
	| MB R_C ',' expr '[' R_X1 ']' DOT0 NL { u8 instr[4] = {0xC0,0,0,0x28}; _SET16(instr,1,$4); emit(instr,4); }
	| MB R_C ',' expr '[' R_X1 ']' DOT1 NL { u8 instr[4] = {0xC0,0,0,0x29}; _SET16(instr,1,$4); emit(instr,4); }
	| MB R_C ',' expr '[' R_X1 ']' DOT2 NL { u8 instr[4] = {0xC0,0,0,0x2A}; _SET16(instr,1,$4); emit(instr,4); }
	| MB R_C ',' expr '[' R_X1 ']' DOT3 NL { u8 instr[4] = {0xC0,0,0,0x2B}; _SET16(instr,1,$4); emit(instr,4); }
	| MB R_C ',' expr '[' R_X1 ']' DOT4 NL { u8 instr[4] = {0xC0,0,0,0x2C}; _SET16(instr,1,$4); emit(instr,4); }
	| MB R_C ',' expr '[' R_X1 ']' DOT5 NL { u8 instr[4] = {0xC0,0,0,0x2D}; _SET16(instr,1,$4); emit(instr,4); }
	| MB R_C ',' expr '[' R_X1 ']' DOT6 NL { u8 instr[4] = {0xC0,0,0,0x2E}; _SET16(instr,1,$4); emit(instr,4); }
	| MB R_C ',' expr '[' R_X1 ']' DOT7 NL { u8 instr[4] = {0xC0,0,0,0x2F}; _SET16(instr,1,$4); emit(instr,4); }
	| MB R_C ',' expr '[' R_X2 ']' DOT0 NL { u8 instr[4] = {0xC1,0,0,0x28}; _SET16(instr,1,$4); emit(instr,4); }
	| MB R_C ',' expr '[' R_X2 ']' DOT1 NL { u8 instr[4] = {0xC1,0,0,0x29}; _SET16(instr,1,$4); emit(instr,4); }
	| MB R_C ',' expr '[' R_X2 ']' DOT2 NL { u8 instr[4] = {0xC1,0,0,0x2A}; _SET16(instr,1,$4); emit(instr,4); }
	| MB R_C ',' expr '[' R_X2 ']' DOT3 NL { u8 instr[4] = {0xC1,0,0,0x2B}; _SET16(instr,1,$4); emit(instr,4); }
	| MB R_C ',' expr '[' R_X2 ']' DOT4 NL { u8 instr[4] = {0xC1,0,0,0x2C}; _SET16(instr,1,$4); emit(instr,4); }
	| MB R_C ',' expr '[' R_X2 ']' DOT5 NL { u8 instr[4] = {0xC1,0,0,0x2D}; _SET16(instr,1,$4); emit(instr,4); }
	| MB R_C ',' expr '[' R_X2 ']' DOT6 NL { u8 instr[4] = {0xC1,0,0,0x2E}; _SET16(instr,1,$4); emit(instr,4); }
	| MB R_C ',' expr '[' R_X2 ']' DOT7 NL { u8 instr[4] = {0xC1,0,0,0x2F}; _SET16(instr,1,$4); emit(instr,4); }
	| MB R_r0 DOT0 ',' R_C NL { u8 instr[2] = {0x20,0x38};  emit(instr,2); }
	| MB R_r0 DOT1 ',' R_C NL { u8 instr[2] = {0x20,0x39};  emit(instr,2); }
	| MB R_r0 DOT2 ',' R_C NL { u8 instr[2] = {0x20,0x3A};  emit(instr,2); }
	| MB R_r0 DOT3 ',' R_C NL { u8 instr[2] = {0x20,0x3B};  emit(instr,2); }
	| MB R_r0 DOT4 ',' R_C NL { u8 instr[2] = {0x20,0x3C};  emit(instr,2); }
	| MB R_r0 DOT5 ',' R_C NL { u8 instr[2] = {0x20,0x3D};  emit(instr,2); }
	| MB R_r0 DOT6 ',' R_C NL { u8 instr[2] = {0x20,0x3E};  emit(instr,2); }
	| MB R_r0 DOT7 ',' R_C NL { u8 instr[2] = {0x20,0x3F};  emit(instr,2); }
	| MB R_r1 DOT0 ',' R_C NL { u8 instr[2] = {0x21,0x38};  emit(instr,2); }
	| MB R_r1 DOT1 ',' R_C NL { u8 instr[2] = {0x21,0x39};  emit(instr,2); }
	| MB R_r1 DOT2 ',' R_C NL { u8 instr[2] = {0x21,0x3A};  emit(instr,2); }
	| MB R_r1 DOT3 ',' R_C NL { u8 instr[2] = {0x21,0x3B};  emit(instr,2); }
	| MB R_r1 DOT4 ',' R_C NL { u8 instr[2] = {0x21,0x3C};  emit(instr,2); }
	| MB R_r1 DOT5 ',' R_C NL { u8 instr[2] = {0x21,0x3D};  emit(instr,2); }
	| MB R_r1 DOT6 ',' R_C NL { u8 instr[2] = {0x21,0x3E};  emit(instr,2); }
	| MB R_r1 DOT7 ',' R_C NL { u8 instr[2] = {0x21,0x3F};  emit(instr,2); }
	| MB R_r2 DOT0 ',' R_C NL { u8 instr[2] = {0x22,0x38};  emit(instr,2); }
	| MB R_r2 DOT1 ',' R_C NL { u8 instr[2] = {0x22,0x39};  emit(instr,2); }
	| MB R_r2 DOT2 ',' R_C NL { u8 instr[2] = {0x22,0x3A};  emit(instr,2); }
	| MB R_r2 DOT3 ',' R_C NL { u8 instr[2] = {0x22,0x3B};  emit(instr,2); }
	| MB R_r2 DOT4 ',' R_C NL { u8 instr[2] = {0x22,0x3C};  emit(instr,2); }
	| MB R_r2 DOT5 ',' R_C NL { u8 instr[2] = {0x22,0x3D};  emit(instr,2); }
	| MB R_r2 DOT6 ',' R_C NL { u8 instr[2] = {0x22,0x3E};  emit(instr,2); }
	| MB R_r2 DOT7 ',' R_C NL { u8 instr[2] = {0x22,0x3F};  emit(instr,2); }
	| MB R_r3 DOT0 ',' R_C NL { u8 instr[2] = {0x23,0x38};  emit(instr,2); }
	| MB R_r3 DOT1 ',' R_C NL { u8 instr[2] = {0x23,0x39};  emit(instr,2); }
	| MB R_r3 DOT2 ',' R_C NL { u8 instr[2] = {0x23,0x3A};  emit(instr,2); }
	| MB R_r3 DOT3 ',' R_C NL { u8 instr[2] = {0x23,0x3B};  emit(instr,2); }
	| MB R_r3 DOT4 ',' R_C NL { u8 instr[2] = {0x23,0x3C};  emit(instr,2); }
	| MB R_r3 DOT5 ',' R_C NL { u8 instr[2] = {0x23,0x3D};  emit(instr,2); }
	| MB R_r3 DOT6 ',' R_C NL { u8 instr[2] = {0x23,0x3E};  emit(instr,2); }
	| MB R_r3 DOT7 ',' R_C NL { u8 instr[2] = {0x23,0x3F};  emit(instr,2); }
	| MB R_r4 DOT0 ',' R_C NL { u8 instr[2] = {0x24,0x38};  emit(instr,2); }
	| MB R_r4 DOT1 ',' R_C NL { u8 instr[2] = {0x24,0x39};  emit(instr,2); }
	| MB R_r4 DOT2 ',' R_C NL { u8 instr[2] = {0x24,0x3A};  emit(instr,2); }
	| MB R_r4 DOT3 ',' R_C NL { u8 instr[2] = {0x24,0x3B};  emit(instr,2); }
	| MB R_r4 DOT4 ',' R_C NL { u8 instr[2] = {0x24,0x3C};  emit(instr,2); }
	| MB R_r4 DOT5 ',' R_C NL { u8 instr[2] = {0x24,0x3D};  emit(instr,2); }
	| MB R_r4 DOT6 ',' R_C NL { u8 instr[2] = {0x24,0x3E};  emit(instr,2); }
	| MB R_r4 DOT7 ',' R_C NL { u8 instr[2] = {0x24,0x3F};  emit(instr,2); }
	| MB R_r5 DOT0 ',' R_C NL { u8 instr[2] = {0x25,0x38};  emit(instr,2); }
	| MB R_r5 DOT1 ',' R_C NL { u8 instr[2] = {0x25,0x39};  emit(instr,2); }
	| MB R_r5 DOT2 ',' R_C NL { u8 instr[2] = {0x25,0x3A};  emit(instr,2); }
	| MB R_r5 DOT3 ',' R_C NL { u8 instr[2] = {0x25,0x3B};  emit(instr,2); }
	| MB R_r5 DOT4 ',' R_C NL { u8 instr[2] = {0x25,0x3C};  emit(instr,2); }
	| MB R_r5 DOT5 ',' R_C NL { u8 instr[2] = {0x25,0x3D};  emit(instr,2); }
	| MB R_r5 DOT6 ',' R_C NL { u8 instr[2] = {0x25,0x3E};  emit(instr,2); }
	| MB R_r5 DOT7 ',' R_C NL { u8 instr[2] = {0x25,0x3F};  emit(instr,2); }
	| MB R_r6 DOT0 ',' R_C NL { u8 instr[2] = {0x26,0x38};  emit(instr,2); }
	| MB R_r6 DOT1 ',' R_C NL { u8 instr[2] = {0x26,0x39};  emit(instr,2); }
	| MB R_r6 DOT2 ',' R_C NL { u8 instr[2] = {0x26,0x3A};  emit(instr,2); }
	| MB R_r6 DOT3 ',' R_C NL { u8 instr[2] = {0x26,0x3B};  emit(instr,2); }
	| MB R_r6 DOT4 ',' R_C NL { u8 instr[2] = {0x26,0x3C};  emit(instr,2); }
	| MB R_r6 DOT5 ',' R_C NL { u8 instr[2] = {0x26,0x3D};  emit(instr,2); }
	| MB R_r6 DOT6 ',' R_C NL { u8 instr[2] = {0x26,0x3E};  emit(instr,2); }
	| MB R_r6 DOT7 ',' R_C NL { u8 instr[2] = {0x26,0x3F};  emit(instr,2); }
	| MB R_r7 DOT0 ',' R_C NL { u8 instr[2] = {0x27,0x38};  emit(instr,2); }
	| MB R_r7 DOT1 ',' R_C NL { u8 instr[2] = {0x27,0x39};  emit(instr,2); }
	| MB R_r7 DOT2 ',' R_C NL { u8 instr[2] = {0x27,0x3A};  emit(instr,2); }
	| MB R_r7 DOT3 ',' R_C NL { u8 instr[2] = {0x27,0x3B};  emit(instr,2); }
	| MB R_r7 DOT4 ',' R_C NL { u8 instr[2] = {0x27,0x3C};  emit(instr,2); }
	| MB R_r7 DOT5 ',' R_C NL { u8 instr[2] = {0x27,0x3D};  emit(instr,2); }
	| MB R_r7 DOT6 ',' R_C NL { u8 instr[2] = {0x27,0x3E};  emit(instr,2); }
	| MB R_r7 DOT7 ',' R_C NL { u8 instr[2] = {0x27,0x3F};  emit(instr,2); }
	| MB R_PSWH DOT0 ',' R_C NL { u8 instr[2] = {0xA2,0x38};  emit(instr,2); }
	| MB R_PSWH DOT1 ',' R_C NL { u8 instr[2] = {0xA2,0x39};  emit(instr,2); }
	| MB R_PSWH DOT2 ',' R_C NL { u8 instr[2] = {0xA2,0x3A};  emit(instr,2); }
	| MB R_PSWH DOT3 ',' R_C NL { u8 instr[2] = {0xA2,0x3B};  emit(instr,2); }
	| MB R_PSWH DOT4 ',' R_C NL { u8 instr[2] = {0xA2,0x3C};  emit(instr,2); }
	| MB R_PSWH DOT5 ',' R_C NL { u8 instr[2] = {0xA2,0x3D};  emit(instr,2); }
	| MB R_PSWH DOT6 ',' R_C NL { u8 instr[2] = {0xA2,0x3E};  emit(instr,2); }
	| MB R_PSWH DOT7 ',' R_C NL { u8 instr[2] = {0xA2,0x3F};  emit(instr,2); }
	| MB R_PSWL DOT0 ',' R_C NL { u8 instr[2] = {0xA3,0x38};  emit(instr,2); }
	| MB R_PSWL DOT1 ',' R_C NL { u8 instr[2] = {0xA3,0x39};  emit(instr,2); }
	| MB R_PSWL DOT2 ',' R_C NL { u8 instr[2] = {0xA3,0x3A};  emit(instr,2); }
	| MB R_PSWL DOT3 ',' R_C NL { u8 instr[2] = {0xA3,0x3B};  emit(instr,2); }
	| MB R_PSWL DOT4 ',' R_C NL { u8 instr[2] = {0xA3,0x3C};  emit(instr,2); }
	| MB R_PSWL DOT5 ',' R_C NL { u8 instr[2] = {0xA3,0x3D};  emit(instr,2); }
	| MB R_PSWL DOT6 ',' R_C NL { u8 instr[2] = {0xA3,0x3E};  emit(instr,2); }
	| MB R_PSWL DOT7 ',' R_C NL { u8 instr[2] = {0xA3,0x3F};  emit(instr,2); }
	| MB OFFSET expr DOT0 ',' R_C NL { u8 instr[3] = {0xC4,0,0x38}; instr[1] = $3; emit(instr,3); }
	| MB OFFSET expr DOT1 ',' R_C NL { u8 instr[3] = {0xC4,0,0x39}; instr[1] = $3; emit(instr,3); }
	| MB OFFSET expr DOT2 ',' R_C NL { u8 instr[3] = {0xC4,0,0x3A}; instr[1] = $3; emit(instr,3); }
	| MB OFFSET expr DOT3 ',' R_C NL { u8 instr[3] = {0xC4,0,0x3B}; instr[1] = $3; emit(instr,3); }
	| MB OFFSET expr DOT4 ',' R_C NL { u8 instr[3] = {0xC4,0,0x3C}; instr[1] = $3; emit(instr,3); }
	| MB OFFSET expr DOT5 ',' R_C NL { u8 instr[3] = {0xC4,0,0x3D}; instr[1] = $3; emit(instr,3); }
	| MB OFFSET expr DOT6 ',' R_C NL { u8 instr[3] = {0xC4,0,0x3E}; instr[1] = $3; emit(instr,3); }
	| MB OFFSET expr DOT7 ',' R_C NL { u8 instr[3] = {0xC4,0,0x3F}; instr[1] = $3; emit(instr,3); }
	| MB expr DOT0 ',' R_C NL { u8 instr[3] = {0xC5,0,0x38}; instr[1] = $2; emit(instr,3); }
	| MB expr DOT1 ',' R_C NL { u8 instr[3] = {0xC5,0,0x39}; instr[1] = $2; emit(instr,3); }
	| MB expr DOT2 ',' R_C NL { u8 instr[3] = {0xC5,0,0x3A}; instr[1] = $2; emit(instr,3); }
	| MB expr DOT3 ',' R_C NL { u8 instr[3] = {0xC5,0,0x3B}; instr[1] = $2; emit(instr,3); }
	| MB expr DOT4 ',' R_C NL { u8 instr[3] = {0xC5,0,0x3C}; instr[1] = $2; emit(instr,3); }
	| MB expr DOT5 ',' R_C NL { u8 instr[3] = {0xC5,0,0x3D}; instr[1] = $2; emit(instr,3); }
	| MB expr DOT6 ',' R_C NL { u8 instr[3] = {0xC5,0,0x3E}; instr[1] = $2; emit(instr,3); }
	| MB expr DOT7 ',' R_C NL { u8 instr[3] = {0xC5,0,0x3F}; instr[1] = $2; emit(instr,3); }
	| MB '[' R_DP ']' DOT0 ',' R_C NL { u8 instr[2] = {0xC2,0x38};  emit(instr,2); }
	| MB '[' R_DP ']' DOT1 ',' R_C NL { u8 instr[2] = {0xC2,0x39};  emit(instr,2); }
	| MB '[' R_DP ']' DOT2 ',' R_C NL { u8 instr[2] = {0xC2,0x3A};  emit(instr,2); }
	| MB '[' R_DP ']' DOT3 ',' R_C NL { u8 instr[2] = {0xC2,0x3B};  emit(instr,2); }
	| MB '[' R_DP ']' DOT4 ',' R_C NL { u8 instr[2] = {0xC2,0x3C};  emit(instr,2); }
	| MB '[' R_DP ']' DOT5 ',' R_C NL { u8 instr[2] = {0xC2,0x3D};  emit(instr,2); }
	| MB '[' R_DP ']' DOT6 ',' R_C NL { u8 instr[2] = {0xC2,0x3E};  emit(instr,2); }
	| MB '[' R_DP ']' DOT7 ',' R_C NL { u8 instr[2] = {0xC2,0x3F};  emit(instr,2); }
	| MB expr '[' R_USP ']' DOT0 ',' R_C NL { u8 instr[3] = {0xC3,0,0x38}; instr[1] = $2; emit(instr,3); }
	| MB expr '[' R_USP ']' DOT1 ',' R_C NL { u8 instr[3] = {0xC3,0,0x39}; instr[1] = $2; emit(instr,3); }
	| MB expr '[' R_USP ']' DOT2 ',' R_C NL { u8 instr[3] = {0xC3,0,0x3A}; instr[1] = $2; emit(instr,3); }
	| MB expr '[' R_USP ']' DOT3 ',' R_C NL { u8 instr[3] = {0xC3,0,0x3B}; instr[1] = $2; emit(instr,3); }
	| MB expr '[' R_USP ']' DOT4 ',' R_C NL { u8 instr[3] = {0xC3,0,0x3C}; instr[1] = $2; emit(instr,3); }
	| MB expr '[' R_USP ']' DOT5 ',' R_C NL { u8 instr[3] = {0xC3,0,0x3D}; instr[1] = $2; emit(instr,3); }
	| MB expr '[' R_USP ']' DOT6 ',' R_C NL { u8 instr[3] = {0xC3,0,0x3E}; instr[1] = $2; emit(instr,3); }
	| MB expr '[' R_USP ']' DOT7 ',' R_C NL { u8 instr[3] = {0xC3,0,0x3F}; instr[1] = $2; emit(instr,3); }
	| MB expr '[' R_X1 ']' DOT0 ',' R_C NL { u8 instr[4] = {0xC0,0,0,0x38}; _SET16(instr,1,$2); emit(instr,4); }
	| MB expr '[' R_X1 ']' DOT1 ',' R_C NL { u8 instr[4] = {0xC0,0,0,0x39}; _SET16(instr,1,$2); emit(instr,4); }
	| MB expr '[' R_X1 ']' DOT2 ',' R_C NL { u8 instr[4] = {0xC0,0,0,0x3A}; _SET16(instr,1,$2); emit(instr,4); }
	| MB expr '[' R_X1 ']' DOT3 ',' R_C NL { u8 instr[4] = {0xC0,0,0,0x3B}; _SET16(instr,1,$2); emit(instr,4); }
	| MB expr '[' R_X1 ']' DOT4 ',' R_C NL { u8 instr[4] = {0xC0,0,0,0x3C}; _SET16(instr,1,$2); emit(instr,4); }
	| MB expr '[' R_X1 ']' DOT5 ',' R_C NL { u8 instr[4] = {0xC0,0,0,0x3D}; _SET16(instr,1,$2); emit(instr,4); }
	| MB expr '[' R_X1 ']' DOT6 ',' R_C NL { u8 instr[4] = {0xC0,0,0,0x3E}; _SET16(instr,1,$2); emit(instr,4); }
	| MB expr '[' R_X1 ']' DOT7 ',' R_C NL { u8 instr[4] = {0xC0,0,0,0x3F}; _SET16(instr,1,$2); emit(instr,4); }
	| MB expr '[' R_X2 ']' DOT0 ',' R_C NL { u8 instr[4] = {0xC1,0,0,0x38}; _SET16(instr,1,$2); emit(instr,4); }
	| MB expr '[' R_X2 ']' DOT1 ',' R_C NL { u8 instr[4] = {0xC1,0,0,0x39}; _SET16(instr,1,$2); emit(instr,4); }
	| MB expr '[' R_X2 ']' DOT2 ',' R_C NL { u8 instr[4] = {0xC1,0,0,0x3A}; _SET16(instr,1,$2); emit(instr,4); }
	| MB expr '[' R_X2 ']' DOT3 ',' R_C NL { u8 instr[4] = {0xC1,0,0,0x3B}; _SET16(instr,1,$2); emit(instr,4); }
	| MB expr '[' R_X2 ']' DOT4 ',' R_C NL { u8 instr[4] = {0xC1,0,0,0x3C}; _SET16(instr,1,$2); emit(instr,4); }
	| MB expr '[' R_X2 ']' DOT5 ',' R_C NL { u8 instr[4] = {0xC1,0,0,0x3D}; _SET16(instr,1,$2); emit(instr,4); }
	| MB expr '[' R_X2 ']' DOT6 ',' R_C NL { u8 instr[4] = {0xC1,0,0,0x3E}; _SET16(instr,1,$2); emit(instr,4); }
	| MB expr '[' R_X2 ']' DOT7 ',' R_C NL { u8 instr[4] = {0xC1,0,0,0x3F}; _SET16(instr,1,$2); emit(instr,4); }
	| MBR R_C ',' R_r0 NL { u8 instr[2] = {0x20,0x21};  emit(instr,2); }
	| MBR R_C ',' R_r1 NL { u8 instr[2] = {0x21,0x21};  emit(instr,2); }
	| MBR R_C ',' R_r2 NL { u8 instr[2] = {0x22,0x21};  emit(instr,2); }
	| MBR R_C ',' R_r3 NL { u8 instr[2] = {0x23,0x21};  emit(instr,2); }
	| MBR R_C ',' R_r4 NL { u8 instr[2] = {0x24,0x21};  emit(instr,2); }
	| MBR R_C ',' R_r5 NL { u8 instr[2] = {0x25,0x21};  emit(instr,2); }
	| MBR R_C ',' R_r6 NL { u8 instr[2] = {0x26,0x21};  emit(instr,2); }
	| MBR R_C ',' R_r7 NL { u8 instr[2] = {0x27,0x21};  emit(instr,2); }
	| MBR R_C ',' R_PSWH NL { u8 instr[2] = {0xA2,0x21};  emit(instr,2); }
	| MBR R_C ',' R_PSWL NL { u8 instr[2] = {0xA3,0x21};  emit(instr,2); }
	| MBR R_C ',' OFFSET expr NL { u8 instr[3] = {0xC4,0,0x21}; instr[1] = $5; emit(instr,3); }
	| MBR R_C ',' expr NL { u8 instr[3] = {0xC5,0,0x21}; instr[1] = $4; emit(instr,3); }
	| MBR R_C ',' '[' R_DP ']' NL { u8 instr[2] = {0xC2,0x21};  emit(instr,2); }
	| MBR R_C ',' expr '[' R_USP ']' NL { u8 instr[3] = {0xC3,0,0x21}; instr[1] = $4; emit(instr,3); }
	| MBR R_C ',' expr '[' R_X1 ']' NL { u8 instr[4] = {0xC0,0,0,0x21}; _SET16(instr,1,$4); emit(instr,4); }
	| MBR R_C ',' expr '[' R_X2 ']' NL { u8 instr[4] = {0xC1,0,0,0x21}; _SET16(instr,1,$4); emit(instr,4); }
	| MBR R_r0 ',' R_C NL { u8 instr[2] = {0x20,0x20};  emit(instr,2); }
	| MBR R_r1 ',' R_C NL { u8 instr[2] = {0x21,0x20};  emit(instr,2); }
	| MBR R_r2 ',' R_C NL { u8 instr[2] = {0x22,0x20};  emit(instr,2); }
	| MBR R_r3 ',' R_C NL { u8 instr[2] = {0x23,0x20};  emit(instr,2); }
	| MBR R_r4 ',' R_C NL { u8 instr[2] = {0x24,0x20};  emit(instr,2); }
	| MBR R_r5 ',' R_C NL { u8 instr[2] = {0x25,0x20};  emit(instr,2); }
	| MBR R_r6 ',' R_C NL { u8 instr[2] = {0x26,0x20};  emit(instr,2); }
	| MBR R_r7 ',' R_C NL { u8 instr[2] = {0x27,0x20};  emit(instr,2); }
	| MBR R_PSWH ',' R_C NL { u8 instr[2] = {0xA2,0x20};  emit(instr,2); }
	| MBR R_PSWL ',' R_C NL { u8 instr[2] = {0xA3,0x20};  emit(instr,2); }
	| MBR OFFSET expr ',' R_C NL { u8 instr[3] = {0xC5,0,0x20}; instr[1] = $3; emit(instr,3); }
	| MBR expr ',' R_C NL { u8 instr[3] = {0xC5,0,0x20}; instr[1] = $2; emit(instr,3); }
	| MBR '[' R_DP ']' ',' R_C NL { u8 instr[2] = {0xC2,0x20};  emit(instr,2); }
	| MBR expr '[' R_USP ']' ',' R_C NL { u8 instr[3] = {0xC3,0,0x20}; instr[1] = $2; emit(instr,3); }
	| MBR expr '[' R_X1 ']' ',' R_C NL { u8 instr[4] = {0xC0,0,0,0x20}; _SET16(instr,1,$2); emit(instr,4); }
	| MBR expr '[' R_X2 ']' ',' R_C NL { u8 instr[4] = {0xC1,0,0,0x20}; _SET16(instr,1,$2); emit(instr,4); }
	| MOV R_A ',' R_er0 NL { u8 instr[2] = {0x44,0x99};  emit(instr,2); }
	| MOV R_A ',' R_er1 NL { u8 instr[2] = {0x45,0x99};  emit(instr,2); }
	| MOV R_A ',' R_er2 NL { u8 instr[2] = {0x46,0x99};  emit(instr,2); }
	| MOV R_A ',' R_er3 NL { u8 instr[2] = {0x47,0x99};  emit(instr,2); }
	| MOV R_A ',' R_DP NL { u8 instr[2] = {0x92,0x99};  emit(instr,2); }
	| MOV R_A ',' R_X1 NL { u8 instr[2] = {0x90,0x99};  emit(instr,2); }
	| MOV R_A ',' R_X2 NL { u8 instr[2] = {0x91,0x99};  emit(instr,2); }
	| MOV R_A ',' R_USP NL { u8 instr[2] = {0xA1,0x99};  emit(instr,2); }
	| MOV R_A ',' R_SSP NL { u8 instr[2] = {0xA0,0x99};  emit(instr,2); }
	| MOV R_A ',' R_LRB NL { u8 instr[2] = {0xA4,0x99};  emit(instr,2); }
	| MOV R_A ',' OFFSET expr NL { u8 instr[3] = {0xB4,0,0x99}; instr[1] = $5; emit(instr,3); }
	| MOV R_A ',' expr NL { u8 instr[3] = {0xB5,0,0x99}; instr[1] = $4; emit(instr,3); }
	| MOV R_A ',' '[' R_DP ']' NL { u8 instr[2] = {0xB2,0x99};  emit(instr,2); }
	| MOV R_A ',' expr '[' R_USP ']' NL { u8 instr[3] = {0xB3,0,0x99}; instr[1] = $4; emit(instr,3); }
	| MOV R_A ',' expr '[' R_X1 ']' NL { u8 instr[4] = {0xB0,0,0,0x99}; _SET16(instr,1,$4); emit(instr,4); }
	| MOV R_A ',' expr '[' R_X2 ']' NL { u8 instr[4] = {0xB1,0,0,0x99}; _SET16(instr,1,$4); emit(instr,4); }
	| MOV R_DP ',' R_A NL { u8 instr[1] = {0x52};  emit(instr,1); }
	| MOV R_DP ',' '#' expr NL { u8 instr[3] = {0x62,0,0}; _SET16(instr,1,$5); emit(instr,3); }
	| MOV R_DP ',' R_er0 NL { u8 instr[2] = {0x44,0x7A};  emit(instr,2); }
	| MOV R_DP ',' R_er1 NL { u8 instr[2] = {0x45,0x7A};  emit(instr,2); }
	| MOV R_DP ',' R_er2 NL { u8 instr[2] = {0x46,0x7A};  emit(instr,2); }
	| MOV R_DP ',' R_er3 NL { u8 instr[2] = {0x47,0x7A};  emit(instr,2); }
	| MOV R_DP ',' R_DP NL { u8 instr[2] = {0x92,0x7A};  emit(instr,2); }
	| MOV R_DP ',' R_X1 NL { u8 instr[2] = {0x90,0x7A};  emit(instr,2); }
	| MOV R_DP ',' R_X2 NL { u8 instr[2] = {0x91,0x7A};  emit(instr,2); }
	| MOV R_DP ',' R_USP NL { u8 instr[2] = {0xA1,0x7A};  emit(instr,2); }
	| MOV R_DP ',' R_SSP NL { u8 instr[2] = {0xA0,0x7A};  emit(instr,2); }
	| MOV R_DP ',' R_LRB NL { u8 instr[2] = {0xA4,0x7A};  emit(instr,2); }
	| MOV R_DP ',' OFFSET expr NL { u8 instr[3] = {0xB4,0,0x7A}; instr[1] = $5; emit(instr,3); }
	| MOV R_DP ',' expr NL { u8 instr[3] = {0xB5,0,0x7A}; instr[1] = $4; emit(instr,3); }
	| MOV R_DP ',' '[' R_DP ']' NL { u8 instr[2] = {0xB2,0x7A};  emit(instr,2); }
	| MOV R_DP ',' expr '[' R_USP ']' NL { u8 instr[3] = {0xB3,0,0x7A}; instr[1] = $4; emit(instr,3); }
	| MOV R_DP ',' expr '[' R_X1 ']' NL { u8 instr[4] = {0xB0,0,0,0x7A}; _SET16(instr,1,$4); emit(instr,4); }
	| MOV R_DP ',' expr '[' R_X2 ']' NL { u8 instr[4] = {0xB1,0,0,0x7A}; _SET16(instr,1,$4); emit(instr,4); }
	| MOV R_er0 ',' R_A NL { u8 instr[2] = {0x44,0x8A};  emit(instr,2); }
	| MOV R_er1 ',' R_A NL { u8 instr[2] = {0x45,0x8A};  emit(instr,2); }
	| MOV R_er2 ',' R_A NL { u8 instr[2] = {0x46,0x8A};  emit(instr,2); }
	| MOV R_er3 ',' R_A NL { u8 instr[2] = {0x47,0x8A};  emit(instr,2); }
	| MOV R_er0 ',' '#' expr NL { u8 instr[4] = {0x44,0x98,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| MOV R_er1 ',' '#' expr NL { u8 instr[4] = {0x45,0x98,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| MOV R_er2 ',' '#' expr NL { u8 instr[4] = {0x46,0x98,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| MOV R_er3 ',' '#' expr NL { u8 instr[4] = {0x47,0x98,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| MOV R_er0 ',' R_er0 NL { u8 instr[2] = {0x44,0x48};  emit(instr,2); }
	| MOV R_er1 ',' R_er0 NL { u8 instr[2] = {0x44,0x49};  emit(instr,2); }
	| MOV R_er2 ',' R_er0 NL { u8 instr[2] = {0x44,0x4A};  emit(instr,2); }
	| MOV R_er3 ',' R_er0 NL { u8 instr[2] = {0x44,0x4B};  emit(instr,2); }
	| MOV R_er0 ',' R_er1 NL { u8 instr[2] = {0x45,0x48};  emit(instr,2); }
	| MOV R_er1 ',' R_er1 NL { u8 instr[2] = {0x45,0x49};  emit(instr,2); }
	| MOV R_er2 ',' R_er1 NL { u8 instr[2] = {0x45,0x4A};  emit(instr,2); }
	| MOV R_er3 ',' R_er1 NL { u8 instr[2] = {0x45,0x4B};  emit(instr,2); }
	| MOV R_er0 ',' R_er2 NL { u8 instr[2] = {0x46,0x48};  emit(instr,2); }
	| MOV R_er1 ',' R_er2 NL { u8 instr[2] = {0x46,0x49};  emit(instr,2); }
	| MOV R_er2 ',' R_er2 NL { u8 instr[2] = {0x46,0x4A};  emit(instr,2); }
	| MOV R_er3 ',' R_er2 NL { u8 instr[2] = {0x46,0x4B};  emit(instr,2); }
	| MOV R_er0 ',' R_er3 NL { u8 instr[2] = {0x47,0x48};  emit(instr,2); }
	| MOV R_er1 ',' R_er3 NL { u8 instr[2] = {0x47,0x49};  emit(instr,2); }
	| MOV R_er2 ',' R_er3 NL { u8 instr[2] = {0x47,0x4A};  emit(instr,2); }
	| MOV R_er3 ',' R_er3 NL { u8 instr[2] = {0x47,0x4B};  emit(instr,2); }
	| MOV R_er0 ',' R_DP NL { u8 instr[2] = {0x92,0x48};  emit(instr,2); }
	| MOV R_er1 ',' R_DP NL { u8 instr[2] = {0x92,0x49};  emit(instr,2); }
	| MOV R_er2 ',' R_DP NL { u8 instr[2] = {0x92,0x4A};  emit(instr,2); }
	| MOV R_er3 ',' R_DP NL { u8 instr[2] = {0x92,0x4B};  emit(instr,2); }
	| MOV R_er0 ',' R_X1 NL { u8 instr[2] = {0x90,0x48};  emit(instr,2); }
	| MOV R_er1 ',' R_X1 NL { u8 instr[2] = {0x90,0x49};  emit(instr,2); }
	| MOV R_er2 ',' R_X1 NL { u8 instr[2] = {0x90,0x4A};  emit(instr,2); }
	| MOV R_er3 ',' R_X1 NL { u8 instr[2] = {0x90,0x4B};  emit(instr,2); }
	| MOV R_er0 ',' R_X2 NL { u8 instr[2] = {0x91,0x48};  emit(instr,2); }
	| MOV R_er1 ',' R_X2 NL { u8 instr[2] = {0x91,0x49};  emit(instr,2); }
	| MOV R_er2 ',' R_X2 NL { u8 instr[2] = {0x91,0x4A};  emit(instr,2); }
	| MOV R_er3 ',' R_X2 NL { u8 instr[2] = {0x91,0x4B};  emit(instr,2); }
	| MOV R_er0 ',' R_USP NL { u8 instr[2] = {0xA1,0x48};  emit(instr,2); }
	| MOV R_er1 ',' R_USP NL { u8 instr[2] = {0xA1,0x49};  emit(instr,2); }
	| MOV R_er2 ',' R_USP NL { u8 instr[2] = {0xA1,0x4A};  emit(instr,2); }
	| MOV R_er3 ',' R_USP NL { u8 instr[2] = {0xA1,0x4B};  emit(instr,2); }
	| MOV R_er0 ',' R_SSP NL { u8 instr[2] = {0xA0,0x48};  emit(instr,2); }
	| MOV R_er1 ',' R_SSP NL { u8 instr[2] = {0xA0,0x49};  emit(instr,2); }
	| MOV R_er2 ',' R_SSP NL { u8 instr[2] = {0xA0,0x4A};  emit(instr,2); }
	| MOV R_er3 ',' R_SSP NL { u8 instr[2] = {0xA0,0x4B};  emit(instr,2); }
	| MOV R_er0 ',' R_LRB NL { u8 instr[2] = {0xA4,0x48};  emit(instr,2); }
	| MOV R_er1 ',' R_LRB NL { u8 instr[2] = {0xA4,0x49};  emit(instr,2); }
	| MOV R_er2 ',' R_LRB NL { u8 instr[2] = {0xA4,0x4A};  emit(instr,2); }
	| MOV R_er3 ',' R_LRB NL { u8 instr[2] = {0xA4,0x4B};  emit(instr,2); }
	| MOV R_er0 ',' OFFSET expr NL { u8 instr[3] = {0xB4,0,0x48}; instr[1] = $5; emit(instr,3); }
	| MOV R_er1 ',' OFFSET expr NL { u8 instr[3] = {0xB4,0,0x49}; instr[1] = $5; emit(instr,3); }
	| MOV R_er2 ',' OFFSET expr NL { u8 instr[3] = {0xB4,0,0x4A}; instr[1] = $5; emit(instr,3); }
	| MOV R_er3 ',' OFFSET expr NL { u8 instr[3] = {0xB4,0,0x4B}; instr[1] = $5; emit(instr,3); }
	| MOV R_er0 ',' expr NL { u8 instr[3] = {0xB5,0,0x48}; instr[1] = $4; emit(instr,3); }
	| MOV R_er1 ',' expr NL { u8 instr[3] = {0xB5,0,0x49}; instr[1] = $4; emit(instr,3); }
	| MOV R_er2 ',' expr NL { u8 instr[3] = {0xB5,0,0x4A}; instr[1] = $4; emit(instr,3); }
	| MOV R_er3 ',' expr NL { u8 instr[3] = {0xB5,0,0x4B}; instr[1] = $4; emit(instr,3); }
	| MOV R_er0 ',' '[' R_DP ']' NL { u8 instr[2] = {0xB2,0x48};  emit(instr,2); }
	| MOV R_er1 ',' '[' R_DP ']' NL { u8 instr[2] = {0xB2,0x49};  emit(instr,2); }
	| MOV R_er2 ',' '[' R_DP ']' NL { u8 instr[2] = {0xB2,0x4A};  emit(instr,2); }
	| MOV R_er3 ',' '[' R_DP ']' NL { u8 instr[2] = {0xB2,0x4B};  emit(instr,2); }
	| MOV R_er0 ',' expr '[' R_USP ']' NL { u8 instr[3] = {0xB3,0,0x48}; instr[1] = $4; emit(instr,3); }
	| MOV R_er1 ',' expr '[' R_USP ']' NL { u8 instr[3] = {0xB3,0,0x49}; instr[1] = $4; emit(instr,3); }
	| MOV R_er2 ',' expr '[' R_USP ']' NL { u8 instr[3] = {0xB3,0,0x4A}; instr[1] = $4; emit(instr,3); }
	| MOV R_er3 ',' expr '[' R_USP ']' NL { u8 instr[3] = {0xB3,0,0x4B}; instr[1] = $4; emit(instr,3); }
	| MOV R_er0 ',' expr '[' R_X1 ']' NL { u8 instr[4] = {0xB0,0,0,0x48}; _SET16(instr,1,$4); emit(instr,4); }
	| MOV R_er1 ',' expr '[' R_X1 ']' NL { u8 instr[4] = {0xB0,0,0,0x49}; _SET16(instr,1,$4); emit(instr,4); }
	| MOV R_er2 ',' expr '[' R_X1 ']' NL { u8 instr[4] = {0xB0,0,0,0x4A}; _SET16(instr,1,$4); emit(instr,4); }
	| MOV R_er3 ',' expr '[' R_X1 ']' NL { u8 instr[4] = {0xB0,0,0,0x4B}; _SET16(instr,1,$4); emit(instr,4); }
	| MOV R_er0 ',' expr '[' R_X2 ']' NL { u8 instr[4] = {0xB1,0,0,0x48}; _SET16(instr,1,$4); emit(instr,4); }
	| MOV R_er1 ',' expr '[' R_X2 ']' NL { u8 instr[4] = {0xB1,0,0,0x49}; _SET16(instr,1,$4); emit(instr,4); }
	| MOV R_er2 ',' expr '[' R_X2 ']' NL { u8 instr[4] = {0xB1,0,0,0x4A}; _SET16(instr,1,$4); emit(instr,4); }
	| MOV R_er3 ',' expr '[' R_X2 ']' NL { u8 instr[4] = {0xB1,0,0,0x4B}; _SET16(instr,1,$4); emit(instr,4); }
	| MOV R_LRB ',' R_er0 NL { u8 instr[2] = {0x44,0x7F};  emit(instr,2); }
	| MOV R_LRB ',' R_er1 NL { u8 instr[2] = {0x45,0x7F};  emit(instr,2); }
	| MOV R_LRB ',' R_er2 NL { u8 instr[2] = {0x46,0x7F};  emit(instr,2); }
	| MOV R_LRB ',' R_er3 NL { u8 instr[2] = {0x47,0x7F};  emit(instr,2); }
	| MOV R_LRB ',' R_DP NL { u8 instr[2] = {0x92,0x7F};  emit(instr,2); }
	| MOV R_LRB ',' R_X1 NL { u8 instr[2] = {0x90,0x7F};  emit(instr,2); }
	| MOV R_LRB ',' R_X2 NL { u8 instr[2] = {0x91,0x7F};  emit(instr,2); }
	| MOV R_LRB ',' R_USP NL { u8 instr[2] = {0xA1,0x7F};  emit(instr,2); }
	| MOV R_LRB ',' R_SSP NL { u8 instr[2] = {0xA0,0x7F};  emit(instr,2); }
	| MOV R_LRB ',' R_LRB NL { u8 instr[2] = {0xA4,0x7F};  emit(instr,2); }
	| MOV R_LRB ',' OFFSET expr NL { u8 instr[3] = {0xB4,0,0x7F}; instr[1] = $5; emit(instr,3); }
	| MOV R_LRB ',' expr NL { u8 instr[3] = {0xB5,0,0x7F}; instr[1] = $4; emit(instr,3); }
	| MOV R_LRB ',' '[' R_DP ']' NL { u8 instr[2] = {0xB2,0x7F};  emit(instr,2); }
	| MOV R_LRB ',' expr '[' R_USP ']' NL { u8 instr[3] = {0xB3,0,0x7F}; instr[1] = $4; emit(instr,3); }
	| MOV R_LRB ',' expr '[' R_X1 ']' NL { u8 instr[4] = {0xB0,0,0,0x7F}; _SET16(instr,1,$4); emit(instr,4); }
	| MOV R_LRB ',' expr '[' R_X2 ']' NL { u8 instr[4] = {0xB1,0,0,0x7F}; _SET16(instr,1,$4); emit(instr,4); }
	| MOV R_X1 ',' R_A NL { u8 instr[1] = {0x50};  emit(instr,1); }
	| MOV R_X2 ',' R_A NL { u8 instr[1] = {0x51};  emit(instr,1); }
	| MOV R_USP ',' R_A NL { u8 instr[2] = {0xA1,0x8A};  emit(instr,2); }
	| MOV R_SSP ',' R_A NL { u8 instr[2] = {0xA0,0x8A};  emit(instr,2); }
	| MOV R_LRB ',' R_A NL { u8 instr[2] = {0xA4,0x8A};  emit(instr,2); }
	| MOV OFFSET expr ',' R_A NL { u8 instr[3] = {0xB4,0,0x8A}; instr[1] = $3; emit(instr,3); }
	| MOV expr ',' R_A NL { u8 instr[3] = {0xB5,0,0x8A}; instr[1] = $2; emit(instr,3); }
	| MOV '[' R_DP ']' ',' R_A NL { u8 instr[2] = {0xB2,0x8A};  emit(instr,2); }
	| MOV expr '[' R_USP ']' ',' R_A NL { u8 instr[3] = {0xB3,0,0x8A}; instr[1] = $2; emit(instr,3); }
	| MOV expr '[' R_X1 ']' ',' R_A NL { u8 instr[4] = {0xB0,0,0,0x8A}; _SET16(instr,1,$2); emit(instr,4); }
	| MOV expr '[' R_X2 ']' ',' R_A NL { u8 instr[4] = {0xB1,0,0,0x8A}; _SET16(instr,1,$2); emit(instr,4); }
	| MOV R_X1 ',' '#' expr NL { u8 instr[3] = {0x60,0,0}; _SET16(instr,1,$5); emit(instr,3); }
	| MOV R_X2 ',' '#' expr NL { u8 instr[3] = {0x61,0,0}; _SET16(instr,1,$5); emit(instr,3); }
	| MOV R_USP ',' '#' expr NL { u8 instr[4] = {0xA1,0x98,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| MOV R_SSP ',' '#' expr NL { u8 instr[4] = {0xA0,0x98,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| MOV R_LRB ',' '#' expr NL { u8 instr[3] = {0x57,0,0}; _SET16(instr,1,$5); emit(instr,3); }
	| MOV OFFSET expr ',' '#' expr NL { u8 instr[5] = {0xB4,0,0x98,0,0}; instr[1] = $3; _SET16(instr,3,$6); emit(instr,5); }
	| MOV expr ',' '#' expr NL { u8 instr[5] = {0xB5,0,0x98,0,0}; instr[1] = $2; _SET16(instr,3,$5); emit(instr,5); }
	| MOV '[' R_DP ']' ',' '#' expr NL { u8 instr[4] = {0xB2,0x98,0,0}; _SET16(instr,2,$7); emit(instr,4); }
	| MOV expr '[' R_USP ']' ',' '#' expr NL { u8 instr[5] = {0xB3,0,0x98,0,0}; instr[1] = $2; _SET16(instr,3,$8); emit(instr,5); }
	| MOV expr '[' R_X1 ']' ',' '#' expr NL { u8 instr[6] = {0xB0,0,0,0x98,0,0}; _SET16(instr,1,$2); _SET16(instr,4,$8); emit(instr,6); }
	| MOV expr '[' R_X2 ']' ',' '#' expr NL { u8 instr[6] = {0xB1,0,0,0x98,0,0}; _SET16(instr,1,$2); _SET16(instr,4,$8); emit(instr,6); }
	| MOV OFFSET expr ',' R_er0 NL { u8 instr[3] = {0x44,0x7C,0}; instr[2] = $3; emit(instr,3); }
	| MOV OFFSET expr ',' R_er1 NL { u8 instr[3] = {0x45,0x7C,0}; instr[2] = $3; emit(instr,3); }
	| MOV OFFSET expr ',' R_er2 NL { u8 instr[3] = {0x46,0x7C,0}; instr[2] = $3; emit(instr,3); }
	| MOV OFFSET expr ',' R_er3 NL { u8 instr[3] = {0x47,0x7C,0}; instr[2] = $3; emit(instr,3); }
	| MOV OFFSET expr ',' R_DP NL { u8 instr[3] = {0x92,0x7C,0}; instr[2] = $3; emit(instr,3); }
	| MOV OFFSET expr ',' R_X1 NL { u8 instr[3] = {0x90,0x7C,0}; instr[2] = $3; emit(instr,3); }
	| MOV OFFSET expr ',' R_X2 NL { u8 instr[3] = {0x91,0x7C,0}; instr[2] = $3; emit(instr,3); }
	| MOV OFFSET expr ',' R_USP NL { u8 instr[3] = {0xA1,0x7C,0}; instr[2] = $3; emit(instr,3); }
	| MOV OFFSET expr ',' R_SSP NL { u8 instr[3] = {0xA0,0x7C,0}; instr[2] = $3; emit(instr,3); }
	| MOV OFFSET expr ',' R_LRB NL { u8 instr[3] = {0xA4,0x7C,0}; instr[2] = $3; emit(instr,3); }
	| MOV OFFSET expr ',' OFFSET expr NL { u8 instr[4] = {0xB4,0,0x7C,0}; instr[3] = $3; instr[1] = $6; emit(instr,4); }
	| MOV OFFSET expr ',' expr NL { u8 instr[4] = {0xB5,0,0x7C,0}; instr[3] = $3; instr[1] = $5; emit(instr,4); }
	| MOV OFFSET expr ',' '[' R_DP ']' NL { u8 instr[3] = {0xB2,0x7C,0}; instr[2] = $3; emit(instr,3); }
	| MOV OFFSET expr ',' expr '[' R_USP ']' NL { u8 instr[4] = {0xB3,0,0x7C,0}; instr[3] = $3; instr[1] = $5; emit(instr,4); }
	| MOV OFFSET expr ',' expr '[' R_X1 ']' NL { u8 instr[5] = {0xB0,0,0,0x7C,0}; instr[4] = $3; _SET16(instr,1,$5); emit(instr,5); }
	| MOV OFFSET expr ',' expr '[' R_X2 ']' NL { u8 instr[5] = {0xB1,0,0,0x7C,0}; instr[4] = $3; _SET16(instr,1,$5); emit(instr,5); }
	| MOV ',' R_er0 NL { u8 instr[2] = {0x44,0x7D};  emit(instr,2); }
	| MOV ',' R_er1 NL { u8 instr[2] = {0x45,0x7D};  emit(instr,2); }
	| MOV ',' R_er2 NL { u8 instr[2] = {0x46,0x7D};  emit(instr,2); }
	| MOV ',' R_er3 NL { u8 instr[2] = {0x47,0x7D};  emit(instr,2); }
	| MOV ',' R_DP NL { u8 instr[2] = {0x92,0x7D};  emit(instr,2); }
	| MOV ',' R_X1 NL { u8 instr[2] = {0x90,0x7D};  emit(instr,2); }
	| MOV ',' R_X2 NL { u8 instr[2] = {0x91,0x7D};  emit(instr,2); }
	| MOV ',' R_USP NL { u8 instr[2] = {0xA1,0x7D};  emit(instr,2); }
	| MOV ',' R_SSP NL { u8 instr[2] = {0xA0,0x7D};  emit(instr,2); }
	| MOV ',' R_LRB NL { u8 instr[2] = {0xA4,0x7D};  emit(instr,2); }
	| MOV ',' OFFSET expr NL { u8 instr[3] = {0xB4,0,0x7D}; instr[1] = $4; emit(instr,3); }
	| MOV ',' expr NL { u8 instr[3] = {0xB5,0,0x7D}; instr[1] = $3; emit(instr,3); }
	| MOV ',' '[' R_DP ']' NL { u8 instr[2] = {0xB2,0x7D};  emit(instr,2); }
	| MOV ',' expr '[' R_USP ']' NL { u8 instr[3] = {0xB3,0,0x7D}; instr[1] = $3; emit(instr,3); }
	| MOV ',' expr '[' R_X1 ']' NL { u8 instr[4] = {0xB0,0,0,0x7D}; _SET16(instr,1,$3); emit(instr,4); }
	| MOV ',' expr '[' R_X2 ']' NL { u8 instr[4] = {0xB1,0,0,0x7D}; _SET16(instr,1,$3); emit(instr,4); }
	| MOV R_SSP ',' R_er0 NL { u8 instr[2] = {0x44,0x7E};  emit(instr,2); }
	| MOV R_SSP ',' R_er1 NL { u8 instr[2] = {0x45,0x7E};  emit(instr,2); }
	| MOV R_SSP ',' R_er2 NL { u8 instr[2] = {0x46,0x7E};  emit(instr,2); }
	| MOV R_SSP ',' R_er3 NL { u8 instr[2] = {0x47,0x7E};  emit(instr,2); }
	| MOV R_SSP ',' R_DP NL { u8 instr[2] = {0x92,0x7E};  emit(instr,2); }
	| MOV R_SSP ',' R_X1 NL { u8 instr[2] = {0x90,0x7E};  emit(instr,2); }
	| MOV R_SSP ',' R_X2 NL { u8 instr[2] = {0x91,0x7E};  emit(instr,2); }
	| MOV R_SSP ',' R_USP NL { u8 instr[2] = {0xA1,0x7E};  emit(instr,2); }
	| MOV R_SSP ',' R_SSP NL { u8 instr[2] = {0xA0,0x7E};  emit(instr,2); }
	| MOV R_SSP ',' R_LRB NL { u8 instr[2] = {0xA4,0x7E};  emit(instr,2); }
	| MOV R_SSP ',' OFFSET expr NL { u8 instr[3] = {0xB4,0,0x7E}; instr[1] = $5; emit(instr,3); }
	| MOV R_SSP ',' expr NL { u8 instr[3] = {0xB5,0,0x7E}; instr[1] = $4; emit(instr,3); }
	| MOV R_SSP ',' '[' R_DP ']' NL { u8 instr[2] = {0xB2,0x7E};  emit(instr,2); }
	| MOV R_SSP ',' expr '[' R_USP ']' NL { u8 instr[3] = {0xB3,0,0x7E}; instr[1] = $4; emit(instr,3); }
	| MOV R_SSP ',' expr '[' R_X1 ']' NL { u8 instr[4] = {0xB0,0,0,0x7E}; _SET16(instr,1,$4); emit(instr,4); }
	| MOV R_SSP ',' expr '[' R_X2 ']' NL { u8 instr[4] = {0xB1,0,0,0x7E}; _SET16(instr,1,$4); emit(instr,4); }
	| MOV R_USP ',' R_er0 NL { u8 instr[2] = {0x44,0x7B};  emit(instr,2); }
	| MOV R_USP ',' R_er1 NL { u8 instr[2] = {0x45,0x7B};  emit(instr,2); }
	| MOV R_USP ',' R_er2 NL { u8 instr[2] = {0x46,0x7B};  emit(instr,2); }
	| MOV R_USP ',' R_er3 NL { u8 instr[2] = {0x47,0x7B};  emit(instr,2); }
	| MOV R_USP ',' R_DP NL { u8 instr[2] = {0x92,0x7B};  emit(instr,2); }
	| MOV R_USP ',' R_X1 NL { u8 instr[2] = {0x90,0x7B};  emit(instr,2); }
	| MOV R_USP ',' R_X2 NL { u8 instr[2] = {0x91,0x7B};  emit(instr,2); }
	| MOV R_USP ',' R_USP NL { u8 instr[2] = {0xA1,0x7B};  emit(instr,2); }
	| MOV R_USP ',' R_SSP NL { u8 instr[2] = {0xA0,0x7B};  emit(instr,2); }
	| MOV R_USP ',' R_LRB NL { u8 instr[2] = {0xA4,0x7B};  emit(instr,2); }
	| MOV R_USP ',' OFFSET expr NL { u8 instr[3] = {0xB4,0,0x7B}; instr[1] = $5; emit(instr,3); }
	| MOV R_USP ',' expr NL { u8 instr[3] = {0xB5,0,0x7B}; instr[1] = $4; emit(instr,3); }
	| MOV R_USP ',' '[' R_DP ']' NL { u8 instr[2] = {0xB2,0x7B};  emit(instr,2); }
	| MOV R_USP ',' expr '[' R_USP ']' NL { u8 instr[3] = {0xB3,0,0x7B}; instr[1] = $4; emit(instr,3); }
	| MOV R_USP ',' expr '[' R_X1 ']' NL { u8 instr[4] = {0xB0,0,0,0x7B}; _SET16(instr,1,$4); emit(instr,4); }
	| MOV R_USP ',' expr '[' R_X2 ']' NL { u8 instr[4] = {0xB1,0,0,0x7B}; _SET16(instr,1,$4); emit(instr,4); }
	| MOV R_X1 ',' R_er0 NL { u8 instr[2] = {0x44,0x78};  emit(instr,2); }
	| MOV R_X1 ',' R_er1 NL { u8 instr[2] = {0x45,0x78};  emit(instr,2); }
	| MOV R_X1 ',' R_er2 NL { u8 instr[2] = {0x46,0x78};  emit(instr,2); }
	| MOV R_X1 ',' R_er3 NL { u8 instr[2] = {0x47,0x78};  emit(instr,2); }
	| MOV R_X1 ',' R_DP NL { u8 instr[2] = {0x92,0x78};  emit(instr,2); }
	| MOV R_X1 ',' R_X1 NL { u8 instr[2] = {0x90,0x78};  emit(instr,2); }
	| MOV R_X1 ',' R_X2 NL { u8 instr[2] = {0x91,0x78};  emit(instr,2); }
	| MOV R_X1 ',' R_USP NL { u8 instr[2] = {0xA1,0x78};  emit(instr,2); }
	| MOV R_X1 ',' R_SSP NL { u8 instr[2] = {0xA0,0x78};  emit(instr,2); }
	| MOV R_X1 ',' R_LRB NL { u8 instr[2] = {0xA4,0x78};  emit(instr,2); }
	| MOV R_X1 ',' OFFSET expr NL { u8 instr[3] = {0xB4,0,0x78}; instr[1] = $5; emit(instr,3); }
	| MOV R_X1 ',' expr NL { u8 instr[3] = {0xB5,0,0x78}; instr[1] = $4; emit(instr,3); }
	| MOV R_X1 ',' '[' R_DP ']' NL { u8 instr[2] = {0xB2,0x78};  emit(instr,2); }
	| MOV R_X1 ',' expr '[' R_USP ']' NL { u8 instr[3] = {0xB3,0,0x78}; instr[1] = $4; emit(instr,3); }
	| MOV R_X1 ',' expr '[' R_X1 ']' NL { u8 instr[4] = {0xB0,0,0,0x78}; _SET16(instr,1,$4); emit(instr,4); }
	| MOV R_X1 ',' expr '[' R_X2 ']' NL { u8 instr[4] = {0xB1,0,0,0x78}; _SET16(instr,1,$4); emit(instr,4); }
	| MOV R_X2 ',' R_er0 NL { u8 instr[2] = {0x44,0x79};  emit(instr,2); }
	| MOV R_X2 ',' R_er1 NL { u8 instr[2] = {0x45,0x79};  emit(instr,2); }
	| MOV R_X2 ',' R_er2 NL { u8 instr[2] = {0x46,0x79};  emit(instr,2); }
	| MOV R_X2 ',' R_er3 NL { u8 instr[2] = {0x47,0x79};  emit(instr,2); }
	| MOV R_X2 ',' R_DP NL { u8 instr[2] = {0x92,0x79};  emit(instr,2); }
	| MOV R_X2 ',' R_X1 NL { u8 instr[2] = {0x90,0x79};  emit(instr,2); }
	| MOV R_X2 ',' R_X2 NL { u8 instr[2] = {0x91,0x79};  emit(instr,2); }
	| MOV R_X2 ',' R_USP NL { u8 instr[2] = {0xA1,0x79};  emit(instr,2); }
	| MOV R_X2 ',' R_SSP NL { u8 instr[2] = {0xA0,0x79};  emit(instr,2); }
	| MOV R_X2 ',' R_LRB NL { u8 instr[2] = {0xA4,0x79};  emit(instr,2); }
	| MOV R_X2 ',' OFFSET expr NL { u8 instr[3] = {0xB4,0,0x79}; instr[1] = $5; emit(instr,3); }
	| MOV R_X2 ',' expr NL { u8 instr[3] = {0xB5,0,0x79}; instr[1] = $4; emit(instr,3); }
	| MOV R_X2 ',' '[' R_DP ']' NL { u8 instr[2] = {0xB2,0x79};  emit(instr,2); }
	| MOV R_X2 ',' expr '[' R_USP ']' NL { u8 instr[3] = {0xB3,0,0x79}; instr[1] = $4; emit(instr,3); }
	| MOV R_X2 ',' expr '[' R_X1 ']' NL { u8 instr[4] = {0xB0,0,0,0x79}; _SET16(instr,1,$4); emit(instr,4); }
	| MOV R_X2 ',' expr '[' R_X2 ']' NL { u8 instr[4] = {0xB1,0,0,0x79}; _SET16(instr,1,$4); emit(instr,4); }
	| MOVB R_A ',' R_r0 NL { u8 instr[2] = {0x20,0x99};  emit(instr,2); }
	| MOVB R_A ',' R_r1 NL { u8 instr[2] = {0x21,0x99};  emit(instr,2); }
	| MOVB R_A ',' R_r2 NL { u8 instr[2] = {0x22,0x99};  emit(instr,2); }
	| MOVB R_A ',' R_r3 NL { u8 instr[2] = {0x23,0x99};  emit(instr,2); }
	| MOVB R_A ',' R_r4 NL { u8 instr[2] = {0x24,0x99};  emit(instr,2); }
	| MOVB R_A ',' R_r5 NL { u8 instr[2] = {0x25,0x99};  emit(instr,2); }
	| MOVB R_A ',' R_r6 NL { u8 instr[2] = {0x26,0x99};  emit(instr,2); }
	| MOVB R_A ',' R_r7 NL { u8 instr[2] = {0x27,0x99};  emit(instr,2); }
	| MOVB R_A ',' R_PSWH NL { u8 instr[2] = {0xA2,0x99};  emit(instr,2); }
	| MOVB R_A ',' R_PSWL NL { u8 instr[2] = {0xA3,0x99};  emit(instr,2); }
	| MOVB R_A ',' OFFSET expr NL { u8 instr[3] = {0xC4,0,0x99}; instr[1] = $5; emit(instr,3); }
	| MOVB R_A ',' expr NL { u8 instr[3] = {0xC5,0,0x99}; instr[1] = $4; emit(instr,3); }
	| MOVB R_A ',' '[' R_DP ']' NL { u8 instr[2] = {0xC2,0x99};  emit(instr,2); }
	| MOVB R_A ',' expr '[' R_USP ']' NL { u8 instr[3] = {0xC3,0,0x99}; instr[1] = $4; emit(instr,3); }
	| MOVB R_A ',' expr '[' R_X1 ']' NL { u8 instr[4] = {0xC0,0,0,0x99}; _SET16(instr,1,$4); emit(instr,4); }
	| MOVB R_A ',' expr '[' R_X2 ']' NL { u8 instr[4] = {0xC1,0,0,0x99}; _SET16(instr,1,$4); emit(instr,4); }
	| MOVB R_r0 ',' R_A NL { u8 instr[2] = {0x20,0x8A};  emit(instr,2); }
	| MOVB R_r1 ',' R_A NL { u8 instr[2] = {0x21,0x8A};  emit(instr,2); }
	| MOVB R_r2 ',' R_A NL { u8 instr[2] = {0x22,0x8A};  emit(instr,2); }
	| MOVB R_r3 ',' R_A NL { u8 instr[2] = {0x23,0x8A};  emit(instr,2); }
	| MOVB R_r4 ',' R_A NL { u8 instr[2] = {0x24,0x8A};  emit(instr,2); }
	| MOVB R_r5 ',' R_A NL { u8 instr[2] = {0x25,0x8A};  emit(instr,2); }
	| MOVB R_r6 ',' R_A NL { u8 instr[2] = {0x26,0x8A};  emit(instr,2); }
	| MOVB R_r7 ',' R_A NL { u8 instr[2] = {0x27,0x8A};  emit(instr,2); }
	| MOVB R_PSWH ',' R_A NL { u8 instr[2] = {0xA2,0x8A};  emit(instr,2); }
	| MOVB R_PSWL ',' R_A NL { u8 instr[2] = {0xA3,0x8A};  emit(instr,2); }
	| MOVB OFFSET expr ',' R_A NL { u8 instr[3] = {0xC4,0,0x8A}; instr[1] = $3; emit(instr,3); }
	| MOVB expr ',' R_A NL { u8 instr[3] = {0xC5,0,0x8A}; instr[1] = $2; emit(instr,3); }
	| MOVB '[' R_DP ']' ',' R_A NL { u8 instr[2] = {0xC2,0x8A};  emit(instr,2); }
	| MOVB expr '[' R_USP ']' ',' R_A NL { u8 instr[3] = {0xC3,0,0x8A}; instr[1] = $2; emit(instr,3); }
	| MOVB expr '[' R_X1 ']' ',' R_A NL { u8 instr[4] = {0xC0,0,0,0x8A}; _SET16(instr,1,$2); emit(instr,4); }
	| MOVB expr '[' R_X2 ']' ',' R_A NL { u8 instr[4] = {0xC1,0,0,0x8A}; _SET16(instr,1,$2); emit(instr,4); }
	| MOVB OFFSET expr ',' R_r0 NL { u8 instr[3] = {0x20,0x7C,0}; instr[2] = $3; emit(instr,3); }
	| MOVB OFFSET expr ',' R_r1 NL { u8 instr[3] = {0x21,0x7C,0}; instr[2] = $3; emit(instr,3); }
	| MOVB OFFSET expr ',' R_r2 NL { u8 instr[3] = {0x22,0x7C,0}; instr[2] = $3; emit(instr,3); }
	| MOVB OFFSET expr ',' R_r3 NL { u8 instr[3] = {0x23,0x7C,0}; instr[2] = $3; emit(instr,3); }
	| MOVB OFFSET expr ',' R_r4 NL { u8 instr[3] = {0x24,0x7C,0}; instr[2] = $3; emit(instr,3); }
	| MOVB OFFSET expr ',' R_r5 NL { u8 instr[3] = {0x25,0x7C,0}; instr[2] = $3; emit(instr,3); }
	| MOVB OFFSET expr ',' R_r6 NL { u8 instr[3] = {0x26,0x7C,0}; instr[2] = $3; emit(instr,3); }
	| MOVB OFFSET expr ',' R_r7 NL { u8 instr[3] = {0x27,0x7C,0}; instr[2] = $3; emit(instr,3); }
	| MOVB OFFSET expr ',' R_PSWH NL { u8 instr[3] = {0xA2,0x7C,0}; instr[2] = $3; emit(instr,3); }
	| MOVB OFFSET expr ',' R_PSWL NL { u8 instr[3] = {0xA3,0x7C,0}; instr[2] = $3; emit(instr,3); }
	| MOVB OFFSET expr ',' OFFSET expr NL { u8 instr[4] = {0xC4,0,0x7C,0}; instr[3] = $3; instr[1] = $6; emit(instr,4); }
	| MOVB OFFSET expr ',' expr NL { u8 instr[4] = {0xC5,0,0x7C,0}; instr[3] = $3; instr[1] = $5; emit(instr,4); }
	| MOVB OFFSET expr ',' '[' R_DP ']' NL { u8 instr[3] = {0xC2,0x7C,0}; instr[2] = $3; emit(instr,3); }
	| MOVB OFFSET expr ',' expr '[' R_USP ']' NL { u8 instr[4] = {0xC3,0,0x7C,0}; instr[3] = $3; instr[1] = $5; emit(instr,4); }
	| MOVB OFFSET expr ',' expr '[' R_X1 ']' NL { u8 instr[5] = {0xC0,0,0,0x7C,0}; instr[4] = $3; _SET16(instr,1,$5); emit(instr,5); }
	| MOVB OFFSET expr ',' expr '[' R_X2 ']' NL { u8 instr[5] = {0xC1,0,0,0x7C,0}; instr[4] = $3; _SET16(instr,1,$5); emit(instr,5); }
	| MOVB R_r0 ',' '#' expr NL { u8 instr[2] = {0x98,0}; instr[1] = $5; emit(instr,2); }
	| MOVB R_r1 ',' '#' expr NL { u8 instr[2] = {0x99,0}; instr[1] = $5; emit(instr,2); }
	| MOVB R_r2 ',' '#' expr NL { u8 instr[2] = {0x9A,0}; instr[1] = $5; emit(instr,2); }
	| MOVB R_r3 ',' '#' expr NL { u8 instr[2] = {0x9B,0}; instr[1] = $5; emit(instr,2); }
	| MOVB R_r4 ',' '#' expr NL { u8 instr[2] = {0x9C,0}; instr[1] = $5; emit(instr,2); }
	| MOVB R_r5 ',' '#' expr NL { u8 instr[2] = {0x9D,0}; instr[1] = $5; emit(instr,2); }
	| MOVB R_r6 ',' '#' expr NL { u8 instr[2] = {0x9E,0}; instr[1] = $5; emit(instr,2); }
	| MOVB R_r7 ',' '#' expr NL { u8 instr[2] = {0x9F,0}; instr[1] = $5; emit(instr,2); }
	| MOVB R_PSWH ',' '#' expr NL { u8 instr[3] = {0xA2,0x98,0}; instr[2] = $5; emit(instr,3); }
	| MOVB R_PSWL ',' '#' expr NL { u8 instr[3] = {0xA3,0x98,0}; instr[2] = $5; emit(instr,3); }
	| MOVB OFFSET expr ',' '#' expr NL { u8 instr[4] = {0xC4,0,0x98,0}; instr[1] = $3; instr[3] = $6; emit(instr,4); }
	| MOVB expr ',' '#' expr NL { u8 instr[4] = {0xC5,0,0x98,0}; instr[1] = $2; instr[3] = $5; emit(instr,4); }
	| MOVB '[' R_DP ']' ',' '#' expr NL { u8 instr[3] = {0xC2,0x98,0}; instr[2] = $7; emit(instr,3); }
	| MOVB expr '[' R_USP ']' ',' '#' expr NL { u8 instr[4] = {0xC3,0,0x98,0}; instr[1] = $2; instr[3] = $8; emit(instr,4); }
	| MOVB expr '[' R_X1 ']' ',' '#' expr NL { u8 instr[5] = {0xC0,0,0,0x98,0}; _SET16(instr,1,$2); instr[4] = $8; emit(instr,5); }
	| MOVB expr '[' R_X2 ']' ',' '#' expr NL { u8 instr[5] = {0xC1,0,0,0x98,0}; _SET16(instr,1,$2); instr[4] = $8; emit(instr,5); }
	| MOVB R_PSWH ',' R_r0 NL { u8 instr[2] = {0x20,0x89};  emit(instr,2); }
	| MOVB R_PSWH ',' R_r1 NL { u8 instr[2] = {0x21,0x89};  emit(instr,2); }
	| MOVB R_PSWH ',' R_r2 NL { u8 instr[2] = {0x22,0x89};  emit(instr,2); }
	| MOVB R_PSWH ',' R_r3 NL { u8 instr[2] = {0x23,0x89};  emit(instr,2); }
	| MOVB R_PSWH ',' R_r4 NL { u8 instr[2] = {0x24,0x89};  emit(instr,2); }
	| MOVB R_PSWH ',' R_r5 NL { u8 instr[2] = {0x25,0x89};  emit(instr,2); }
	| MOVB R_PSWH ',' R_r6 NL { u8 instr[2] = {0x26,0x89};  emit(instr,2); }
	| MOVB R_PSWH ',' R_r7 NL { u8 instr[2] = {0x27,0x89};  emit(instr,2); }
	| MOVB R_PSWH ',' R_PSWH NL { u8 instr[2] = {0xA2,0x89};  emit(instr,2); }
	| MOVB R_PSWH ',' R_PSWL NL { u8 instr[2] = {0xA3,0x89};  emit(instr,2); }
	| MOVB R_PSWH ',' OFFSET expr NL { u8 instr[3] = {0xC4,0,0x89}; instr[1] = $5; emit(instr,3); }
	| MOVB R_PSWH ',' expr NL { u8 instr[3] = {0xC5,0,0x89}; instr[1] = $4; emit(instr,3); }
	| MOVB R_PSWH ',' '[' R_DP ']' NL { u8 instr[2] = {0xC2,0x89};  emit(instr,2); }
	| MOVB R_PSWH ',' expr '[' R_USP ']' NL { u8 instr[3] = {0xC3,0,0x89}; instr[1] = $4; emit(instr,3); }
	| MOVB R_PSWH ',' expr '[' R_X1 ']' NL { u8 instr[4] = {0xC0,0,0,0x89}; _SET16(instr,1,$4); emit(instr,4); }
	| MOVB R_PSWH ',' expr '[' R_X2 ']' NL { u8 instr[4] = {0xC1,0,0,0x89}; _SET16(instr,1,$4); emit(instr,4); }
	| MOVB R_PSWL ',' R_r0 NL { u8 instr[2] = {0x20,0x88};  emit(instr,2); }
	| MOVB R_PSWL ',' R_r1 NL { u8 instr[2] = {0x21,0x88};  emit(instr,2); }
	| MOVB R_PSWL ',' R_r2 NL { u8 instr[2] = {0x22,0x88};  emit(instr,2); }
	| MOVB R_PSWL ',' R_r3 NL { u8 instr[2] = {0x23,0x88};  emit(instr,2); }
	| MOVB R_PSWL ',' R_r4 NL { u8 instr[2] = {0x24,0x88};  emit(instr,2); }
	| MOVB R_PSWL ',' R_r5 NL { u8 instr[2] = {0x25,0x88};  emit(instr,2); }
	| MOVB R_PSWL ',' R_r6 NL { u8 instr[2] = {0x26,0x88};  emit(instr,2); }
	| MOVB R_PSWL ',' R_r7 NL { u8 instr[2] = {0x27,0x88};  emit(instr,2); }
	| MOVB R_PSWL ',' R_PSWH NL { u8 instr[2] = {0xA2,0x88};  emit(instr,2); }
	| MOVB R_PSWL ',' R_PSWL NL { u8 instr[2] = {0xA3,0x88};  emit(instr,2); }
	| MOVB R_PSWL ',' OFFSET expr NL { u8 instr[3] = {0xC4,0,0x88}; instr[1] = $5; emit(instr,3); }
	| MOVB R_PSWL ',' expr NL { u8 instr[3] = {0xC5,0,0x88}; instr[1] = $4; emit(instr,3); }
	| MOVB R_PSWL ',' '[' R_DP ']' NL { u8 instr[2] = {0xC2,0x88};  emit(instr,2); }
	| MOVB R_PSWL ',' expr '[' R_USP ']' NL { u8 instr[3] = {0xC3,0,0x88}; instr[1] = $4; emit(instr,3); }
	| MOVB R_PSWL ',' expr '[' R_X1 ']' NL { u8 instr[4] = {0xC0,0,0,0x88}; _SET16(instr,1,$4); emit(instr,4); }
	| MOVB R_PSWL ',' expr '[' R_X2 ']' NL { u8 instr[4] = {0xC1,0,0,0x88}; _SET16(instr,1,$4); emit(instr,4); }
	| MOVB R_r0 ',' R_r0 NL { u8 instr[2] = {0x20,0x48};  emit(instr,2); }
	| MOVB R_r1 ',' R_r0 NL { u8 instr[2] = {0x20,0x49};  emit(instr,2); }
	| MOVB R_r2 ',' R_r0 NL { u8 instr[2] = {0x20,0x4A};  emit(instr,2); }
	| MOVB R_r3 ',' R_r0 NL { u8 instr[2] = {0x20,0x4B};  emit(instr,2); }
	| MOVB R_r4 ',' R_r0 NL { u8 instr[2] = {0x20,0x4C};  emit(instr,2); }
	| MOVB R_r5 ',' R_r0 NL { u8 instr[2] = {0x20,0x4D};  emit(instr,2); }
	| MOVB R_r6 ',' R_r0 NL { u8 instr[2] = {0x20,0x4E};  emit(instr,2); }
	| MOVB R_r7 ',' R_r0 NL { u8 instr[2] = {0x20,0x4F};  emit(instr,2); }
	| MOVB R_r0 ',' R_r1 NL { u8 instr[2] = {0x21,0x48};  emit(instr,2); }
	| MOVB R_r1 ',' R_r1 NL { u8 instr[2] = {0x21,0x49};  emit(instr,2); }
	| MOVB R_r2 ',' R_r1 NL { u8 instr[2] = {0x21,0x4A};  emit(instr,2); }
	| MOVB R_r3 ',' R_r1 NL { u8 instr[2] = {0x21,0x4B};  emit(instr,2); }
	| MOVB R_r4 ',' R_r1 NL { u8 instr[2] = {0x21,0x4C};  emit(instr,2); }
	| MOVB R_r5 ',' R_r1 NL { u8 instr[2] = {0x21,0x4D};  emit(instr,2); }
	| MOVB R_r6 ',' R_r1 NL { u8 instr[2] = {0x21,0x4E};  emit(instr,2); }
	| MOVB R_r7 ',' R_r1 NL { u8 instr[2] = {0x21,0x4F};  emit(instr,2); }
	| MOVB R_r0 ',' R_r2 NL { u8 instr[2] = {0x22,0x48};  emit(instr,2); }
	| MOVB R_r1 ',' R_r2 NL { u8 instr[2] = {0x22,0x49};  emit(instr,2); }
	| MOVB R_r2 ',' R_r2 NL { u8 instr[2] = {0x22,0x4A};  emit(instr,2); }
	| MOVB R_r3 ',' R_r2 NL { u8 instr[2] = {0x22,0x4B};  emit(instr,2); }
	| MOVB R_r4 ',' R_r2 NL { u8 instr[2] = {0x22,0x4C};  emit(instr,2); }
	| MOVB R_r5 ',' R_r2 NL { u8 instr[2] = {0x22,0x4D};  emit(instr,2); }
	| MOVB R_r6 ',' R_r2 NL { u8 instr[2] = {0x22,0x4E};  emit(instr,2); }
	| MOVB R_r7 ',' R_r2 NL { u8 instr[2] = {0x22,0x4F};  emit(instr,2); }
	| MOVB R_r0 ',' R_r3 NL { u8 instr[2] = {0x23,0x48};  emit(instr,2); }
	| MOVB R_r1 ',' R_r3 NL { u8 instr[2] = {0x23,0x49};  emit(instr,2); }
	| MOVB R_r2 ',' R_r3 NL { u8 instr[2] = {0x23,0x4A};  emit(instr,2); }
	| MOVB R_r3 ',' R_r3 NL { u8 instr[2] = {0x23,0x4B};  emit(instr,2); }
	| MOVB R_r4 ',' R_r3 NL { u8 instr[2] = {0x23,0x4C};  emit(instr,2); }
	| MOVB R_r5 ',' R_r3 NL { u8 instr[2] = {0x23,0x4D};  emit(instr,2); }
	| MOVB R_r6 ',' R_r3 NL { u8 instr[2] = {0x23,0x4E};  emit(instr,2); }
	| MOVB R_r7 ',' R_r3 NL { u8 instr[2] = {0x23,0x4F};  emit(instr,2); }
	| MOVB R_r0 ',' R_r4 NL { u8 instr[2] = {0x24,0x48};  emit(instr,2); }
	| MOVB R_r1 ',' R_r4 NL { u8 instr[2] = {0x24,0x49};  emit(instr,2); }
	| MOVB R_r2 ',' R_r4 NL { u8 instr[2] = {0x24,0x4A};  emit(instr,2); }
	| MOVB R_r3 ',' R_r4 NL { u8 instr[2] = {0x24,0x4B};  emit(instr,2); }
	| MOVB R_r4 ',' R_r4 NL { u8 instr[2] = {0x24,0x4C};  emit(instr,2); }
	| MOVB R_r5 ',' R_r4 NL { u8 instr[2] = {0x24,0x4D};  emit(instr,2); }
	| MOVB R_r6 ',' R_r4 NL { u8 instr[2] = {0x24,0x4E};  emit(instr,2); }
	| MOVB R_r7 ',' R_r4 NL { u8 instr[2] = {0x24,0x4F};  emit(instr,2); }
	| MOVB R_r0 ',' R_r5 NL { u8 instr[2] = {0x25,0x48};  emit(instr,2); }
	| MOVB R_r1 ',' R_r5 NL { u8 instr[2] = {0x25,0x49};  emit(instr,2); }
	| MOVB R_r2 ',' R_r5 NL { u8 instr[2] = {0x25,0x4A};  emit(instr,2); }
	| MOVB R_r3 ',' R_r5 NL { u8 instr[2] = {0x25,0x4B};  emit(instr,2); }
	| MOVB R_r4 ',' R_r5 NL { u8 instr[2] = {0x25,0x4C};  emit(instr,2); }
	| MOVB R_r5 ',' R_r5 NL { u8 instr[2] = {0x25,0x4D};  emit(instr,2); }
	| MOVB R_r6 ',' R_r5 NL { u8 instr[2] = {0x25,0x4E};  emit(instr,2); }
	| MOVB R_r7 ',' R_r5 NL { u8 instr[2] = {0x25,0x4F};  emit(instr,2); }
	| MOVB R_r0 ',' R_r6 NL { u8 instr[2] = {0x26,0x48};  emit(instr,2); }
	| MOVB R_r1 ',' R_r6 NL { u8 instr[2] = {0x26,0x49};  emit(instr,2); }
	| MOVB R_r2 ',' R_r6 NL { u8 instr[2] = {0x26,0x4A};  emit(instr,2); }
	| MOVB R_r3 ',' R_r6 NL { u8 instr[2] = {0x26,0x4B};  emit(instr,2); }
	| MOVB R_r4 ',' R_r6 NL { u8 instr[2] = {0x26,0x4C};  emit(instr,2); }
	| MOVB R_r5 ',' R_r6 NL { u8 instr[2] = {0x26,0x4D};  emit(instr,2); }
	| MOVB R_r6 ',' R_r6 NL { u8 instr[2] = {0x26,0x4E};  emit(instr,2); }
	| MOVB R_r7 ',' R_r6 NL { u8 instr[2] = {0x26,0x4F};  emit(instr,2); }
	| MOVB R_r0 ',' R_r7 NL { u8 instr[2] = {0x27,0x48};  emit(instr,2); }
	| MOVB R_r1 ',' R_r7 NL { u8 instr[2] = {0x27,0x49};  emit(instr,2); }
	| MOVB R_r2 ',' R_r7 NL { u8 instr[2] = {0x27,0x4A};  emit(instr,2); }
	| MOVB R_r3 ',' R_r7 NL { u8 instr[2] = {0x27,0x4B};  emit(instr,2); }
	| MOVB R_r4 ',' R_r7 NL { u8 instr[2] = {0x27,0x4C};  emit(instr,2); }
	| MOVB R_r5 ',' R_r7 NL { u8 instr[2] = {0x27,0x4D};  emit(instr,2); }
	| MOVB R_r6 ',' R_r7 NL { u8 instr[2] = {0x27,0x4E};  emit(instr,2); }
	| MOVB R_r7 ',' R_r7 NL { u8 instr[2] = {0x27,0x4F};  emit(instr,2); }
	| MOVB R_r0 ',' R_PSWH NL { u8 instr[2] = {0xA2,0x48};  emit(instr,2); }
	| MOVB R_r1 ',' R_PSWH NL { u8 instr[2] = {0xA2,0x49};  emit(instr,2); }
	| MOVB R_r2 ',' R_PSWH NL { u8 instr[2] = {0xA2,0x4A};  emit(instr,2); }
	| MOVB R_r3 ',' R_PSWH NL { u8 instr[2] = {0xA2,0x4B};  emit(instr,2); }
	| MOVB R_r4 ',' R_PSWH NL { u8 instr[2] = {0xA2,0x4C};  emit(instr,2); }
	| MOVB R_r5 ',' R_PSWH NL { u8 instr[2] = {0xA2,0x4D};  emit(instr,2); }
	| MOVB R_r6 ',' R_PSWH NL { u8 instr[2] = {0xA2,0x4E};  emit(instr,2); }
	| MOVB R_r7 ',' R_PSWH NL { u8 instr[2] = {0xA2,0x4F};  emit(instr,2); }
	| MOVB R_r0 ',' R_PSWL NL { u8 instr[2] = {0xA3,0x48};  emit(instr,2); }
	| MOVB R_r1 ',' R_PSWL NL { u8 instr[2] = {0xA3,0x49};  emit(instr,2); }
	| MOVB R_r2 ',' R_PSWL NL { u8 instr[2] = {0xA3,0x4A};  emit(instr,2); }
	| MOVB R_r3 ',' R_PSWL NL { u8 instr[2] = {0xA3,0x4B};  emit(instr,2); }
	| MOVB R_r4 ',' R_PSWL NL { u8 instr[2] = {0xA3,0x4C};  emit(instr,2); }
	| MOVB R_r5 ',' R_PSWL NL { u8 instr[2] = {0xA3,0x4D};  emit(instr,2); }
	| MOVB R_r6 ',' R_PSWL NL { u8 instr[2] = {0xA3,0x4E};  emit(instr,2); }
	| MOVB R_r7 ',' R_PSWL NL { u8 instr[2] = {0xA3,0x4F};  emit(instr,2); }
	| MOVB R_r0 ',' OFFSET expr NL { u8 instr[3] = {0xC4,0,0x48}; instr[1] = $5; emit(instr,3); }
	| MOVB R_r1 ',' OFFSET expr NL { u8 instr[3] = {0xC4,0,0x49}; instr[1] = $5; emit(instr,3); }
	| MOVB R_r2 ',' OFFSET expr NL { u8 instr[3] = {0xC4,0,0x4A}; instr[1] = $5; emit(instr,3); }
	| MOVB R_r3 ',' OFFSET expr NL { u8 instr[3] = {0xC4,0,0x4B}; instr[1] = $5; emit(instr,3); }
	| MOVB R_r4 ',' OFFSET expr NL { u8 instr[3] = {0xC4,0,0x4C}; instr[1] = $5; emit(instr,3); }
	| MOVB R_r5 ',' OFFSET expr NL { u8 instr[3] = {0xC4,0,0x4D}; instr[1] = $5; emit(instr,3); }
	| MOVB R_r6 ',' OFFSET expr NL { u8 instr[3] = {0xC4,0,0x4E}; instr[1] = $5; emit(instr,3); }
	| MOVB R_r7 ',' OFFSET expr NL { u8 instr[3] = {0xC4,0,0x4F}; instr[1] = $5; emit(instr,3); }
	| MOVB R_r0 ',' expr NL { u8 instr[3] = {0xC5,0,0x48}; instr[1] = $4; emit(instr,3); }
	| MOVB R_r1 ',' expr NL { u8 instr[3] = {0xC5,0,0x49}; instr[1] = $4; emit(instr,3); }
	| MOVB R_r2 ',' expr NL { u8 instr[3] = {0xC5,0,0x4A}; instr[1] = $4; emit(instr,3); }
	| MOVB R_r3 ',' expr NL { u8 instr[3] = {0xC5,0,0x4B}; instr[1] = $4; emit(instr,3); }
	| MOVB R_r4 ',' expr NL { u8 instr[3] = {0xC5,0,0x4C}; instr[1] = $4; emit(instr,3); }
	| MOVB R_r5 ',' expr NL { u8 instr[3] = {0xC5,0,0x4D}; instr[1] = $4; emit(instr,3); }
	| MOVB R_r6 ',' expr NL { u8 instr[3] = {0xC5,0,0x4E}; instr[1] = $4; emit(instr,3); }
	| MOVB R_r7 ',' expr NL { u8 instr[3] = {0xC5,0,0x4F}; instr[1] = $4; emit(instr,3); }
	| MOVB R_r0 ',' '[' R_DP ']' NL { u8 instr[2] = {0xC2,0x48};  emit(instr,2); }
	| MOVB R_r1 ',' '[' R_DP ']' NL { u8 instr[2] = {0xC2,0x49};  emit(instr,2); }
	| MOVB R_r2 ',' '[' R_DP ']' NL { u8 instr[2] = {0xC2,0x4A};  emit(instr,2); }
	| MOVB R_r3 ',' '[' R_DP ']' NL { u8 instr[2] = {0xC2,0x4B};  emit(instr,2); }
	| MOVB R_r4 ',' '[' R_DP ']' NL { u8 instr[2] = {0xC2,0x4C};  emit(instr,2); }
	| MOVB R_r5 ',' '[' R_DP ']' NL { u8 instr[2] = {0xC2,0x4D};  emit(instr,2); }
	| MOVB R_r6 ',' '[' R_DP ']' NL { u8 instr[2] = {0xC2,0x4E};  emit(instr,2); }
	| MOVB R_r7 ',' '[' R_DP ']' NL { u8 instr[2] = {0xC2,0x4F};  emit(instr,2); }
	| MOVB R_r0 ',' expr '[' R_USP ']' NL { u8 instr[3] = {0xC3,0,0x48}; instr[1] = $4; emit(instr,3); }
	| MOVB R_r1 ',' expr '[' R_USP ']' NL { u8 instr[3] = {0xC3,0,0x49}; instr[1] = $4; emit(instr,3); }
	| MOVB R_r2 ',' expr '[' R_USP ']' NL { u8 instr[3] = {0xC3,0,0x4A}; instr[1] = $4; emit(instr,3); }
	| MOVB R_r3 ',' expr '[' R_USP ']' NL { u8 instr[3] = {0xC3,0,0x4B}; instr[1] = $4; emit(instr,3); }
	| MOVB R_r4 ',' expr '[' R_USP ']' NL { u8 instr[3] = {0xC3,0,0x4C}; instr[1] = $4; emit(instr,3); }
	| MOVB R_r5 ',' expr '[' R_USP ']' NL { u8 instr[3] = {0xC3,0,0x4D}; instr[1] = $4; emit(instr,3); }
	| MOVB R_r6 ',' expr '[' R_USP ']' NL { u8 instr[3] = {0xC3,0,0x4E}; instr[1] = $4; emit(instr,3); }
	| MOVB R_r7 ',' expr '[' R_USP ']' NL { u8 instr[3] = {0xC3,0,0x4F}; instr[1] = $4; emit(instr,3); }
	| MOVB R_r0 ',' expr '[' R_X1 ']' NL { u8 instr[4] = {0xC0,0,0,0x48}; _SET16(instr,1,$4); emit(instr,4); }
	| MOVB R_r1 ',' expr '[' R_X1 ']' NL { u8 instr[4] = {0xC0,0,0,0x49}; _SET16(instr,1,$4); emit(instr,4); }
	| MOVB R_r2 ',' expr '[' R_X1 ']' NL { u8 instr[4] = {0xC0,0,0,0x4A}; _SET16(instr,1,$4); emit(instr,4); }
	| MOVB R_r3 ',' expr '[' R_X1 ']' NL { u8 instr[4] = {0xC0,0,0,0x4B}; _SET16(instr,1,$4); emit(instr,4); }
	| MOVB R_r4 ',' expr '[' R_X1 ']' NL { u8 instr[4] = {0xC0,0,0,0x4C}; _SET16(instr,1,$4); emit(instr,4); }
	| MOVB R_r5 ',' expr '[' R_X1 ']' NL { u8 instr[4] = {0xC0,0,0,0x4D}; _SET16(instr,1,$4); emit(instr,4); }
	| MOVB R_r6 ',' expr '[' R_X1 ']' NL { u8 instr[4] = {0xC0,0,0,0x4E}; _SET16(instr,1,$4); emit(instr,4); }
	| MOVB R_r7 ',' expr '[' R_X1 ']' NL { u8 instr[4] = {0xC0,0,0,0x4F}; _SET16(instr,1,$4); emit(instr,4); }
	| MOVB R_r0 ',' expr '[' R_X2 ']' NL { u8 instr[4] = {0xC1,0,0,0x48}; _SET16(instr,1,$4); emit(instr,4); }
	| MOVB R_r1 ',' expr '[' R_X2 ']' NL { u8 instr[4] = {0xC1,0,0,0x49}; _SET16(instr,1,$4); emit(instr,4); }
	| MOVB R_r2 ',' expr '[' R_X2 ']' NL { u8 instr[4] = {0xC1,0,0,0x4A}; _SET16(instr,1,$4); emit(instr,4); }
	| MOVB R_r3 ',' expr '[' R_X2 ']' NL { u8 instr[4] = {0xC1,0,0,0x4B}; _SET16(instr,1,$4); emit(instr,4); }
	| MOVB R_r4 ',' expr '[' R_X2 ']' NL { u8 instr[4] = {0xC1,0,0,0x4C}; _SET16(instr,1,$4); emit(instr,4); }
	| MOVB R_r5 ',' expr '[' R_X2 ']' NL { u8 instr[4] = {0xC1,0,0,0x4D}; _SET16(instr,1,$4); emit(instr,4); }
	| MOVB R_r6 ',' expr '[' R_X2 ']' NL { u8 instr[4] = {0xC1,0,0,0x4E}; _SET16(instr,1,$4); emit(instr,4); }
	| MOVB R_r7 ',' expr '[' R_X2 ']' NL { u8 instr[4] = {0xC1,0,0,0x4F}; _SET16(instr,1,$4); emit(instr,4); }
	| MUL NL { u8 instr[2] = {0x90,0x35};  emit(instr,2); }
	| MULB NL { u8 instr[2] = {0xA2,0x34};  emit(instr,2); }
	| NOP NL { u8 instr[1] = {0x00};  emit(instr,1); }
	| OR R_A ',' '#' expr NL { u8 instr[3] = {0xE6,0,0}; _SET16(instr,1,$5); emit(instr,3); }
	| OR R_A ',' R_er0 NL { u8 instr[1] = {0x68};  emit(instr,1); }
	| OR R_A ',' R_er1 NL { u8 instr[1] = {0x69};  emit(instr,1); }
	| OR R_A ',' R_er2 NL { u8 instr[1] = {0x6A};  emit(instr,1); }
	| OR R_A ',' R_er3 NL { u8 instr[1] = {0x6B};  emit(instr,1); }
	| OR R_A ',' R_DP NL { u8 instr[2] = {0x92,0xE2};  emit(instr,2); }
	| OR R_A ',' R_X1 NL { u8 instr[2] = {0x90,0xE2};  emit(instr,2); }
	| OR R_A ',' R_X2 NL { u8 instr[2] = {0x91,0xE2};  emit(instr,2); }
	| OR R_A ',' R_USP NL { u8 instr[2] = {0xA1,0xE2};  emit(instr,2); }
	| OR R_A ',' R_SSP NL { u8 instr[2] = {0xA0,0xE2};  emit(instr,2); }
	| OR R_A ',' R_LRB NL { u8 instr[2] = {0xA4,0xE2};  emit(instr,2); }
	| OR R_A ',' OFFSET expr NL { u8 instr[3] = {0xB4,0,0xE2}; instr[1] = $5; emit(instr,3); }
	| OR R_A ',' expr NL { u8 instr[3] = {0xB5,0,0xE2}; instr[1] = $4; emit(instr,3); }
	| OR R_A ',' '[' R_DP ']' NL { u8 instr[2] = {0xB2,0xE2};  emit(instr,2); }
	| OR R_A ',' expr '[' R_USP ']' NL { u8 instr[3] = {0xB3,0,0xE2}; instr[1] = $4; emit(instr,3); }
	| OR R_A ',' expr '[' R_X1 ']' NL { u8 instr[4] = {0xB0,0,0,0xE2}; _SET16(instr,1,$4); emit(instr,4); }
	| OR R_A ',' expr '[' R_X2 ']' NL { u8 instr[4] = {0xB1,0,0,0xE2}; _SET16(instr,1,$4); emit(instr,4); }
	| OR R_er0 ',' R_A NL { u8 instr[2] = {0x44,0xE1};  emit(instr,2); }
	| OR R_er1 ',' R_A NL { u8 instr[2] = {0x45,0xE1};  emit(instr,2); }
	| OR R_er2 ',' R_A NL { u8 instr[2] = {0x46,0xE1};  emit(instr,2); }
	| OR R_er3 ',' R_A NL { u8 instr[2] = {0x47,0xE1};  emit(instr,2); }
	| OR R_DP ',' R_A NL { u8 instr[2] = {0x92,0xE1};  emit(instr,2); }
	| OR R_X1 ',' R_A NL { u8 instr[2] = {0x90,0xE1};  emit(instr,2); }
	| OR R_X2 ',' R_A NL { u8 instr[2] = {0x91,0xE1};  emit(instr,2); }
	| OR R_USP ',' R_A NL { u8 instr[2] = {0xA1,0xE1};  emit(instr,2); }
	| OR R_SSP ',' R_A NL { u8 instr[2] = {0xA0,0xE1};  emit(instr,2); }
	| OR R_LRB ',' R_A NL { u8 instr[2] = {0xA4,0xE1};  emit(instr,2); }
	| OR OFFSET expr ',' R_A NL { u8 instr[3] = {0xB4,0,0xE1}; instr[1] = $3; emit(instr,3); }
	| OR expr ',' R_A NL { u8 instr[3] = {0xB5,0,0xE1}; instr[1] = $2; emit(instr,3); }
	| OR '[' R_DP ']' ',' R_A NL { u8 instr[2] = {0xB2,0xE1};  emit(instr,2); }
	| OR expr '[' R_USP ']' ',' R_A NL { u8 instr[3] = {0xB3,0,0xE1}; instr[1] = $2; emit(instr,3); }
	| OR expr '[' R_X1 ']' ',' R_A NL { u8 instr[4] = {0xB0,0,0,0xE1}; _SET16(instr,1,$2); emit(instr,4); }
	| OR expr '[' R_X2 ']' ',' R_A NL { u8 instr[4] = {0xB1,0,0,0xE1}; _SET16(instr,1,$2); emit(instr,4); }
	| OR R_er0 ',' OFFSET expr NL { u8 instr[3] = {0x44,0xE3,0}; instr[2] = $5; emit(instr,3); }
	| OR R_er1 ',' OFFSET expr NL { u8 instr[3] = {0x45,0xE3,0}; instr[2] = $5; emit(instr,3); }
	| OR R_er2 ',' OFFSET expr NL { u8 instr[3] = {0x46,0xE3,0}; instr[2] = $5; emit(instr,3); }
	| OR R_er3 ',' OFFSET expr NL { u8 instr[3] = {0x47,0xE3,0}; instr[2] = $5; emit(instr,3); }
	| OR R_DP ',' OFFSET expr NL { u8 instr[3] = {0x92,0xE3,0}; instr[2] = $5; emit(instr,3); }
	| OR R_X1 ',' OFFSET expr NL { u8 instr[3] = {0x90,0xE3,0}; instr[2] = $5; emit(instr,3); }
	| OR R_X2 ',' OFFSET expr NL { u8 instr[3] = {0x91,0xE3,0}; instr[2] = $5; emit(instr,3); }
	| OR R_USP ',' OFFSET expr NL { u8 instr[3] = {0xA1,0xE3,0}; instr[2] = $5; emit(instr,3); }
	| OR R_SSP ',' OFFSET expr NL { u8 instr[3] = {0xA0,0xE3,0}; instr[2] = $5; emit(instr,3); }
	| OR R_LRB ',' OFFSET expr NL { u8 instr[3] = {0xA4,0xE3,0}; instr[2] = $5; emit(instr,3); }
	| OR OFFSET expr ',' OFFSET expr NL { u8 instr[4] = {0xB4,0,0xE3,0}; instr[1] = $3; instr[3] = $6; emit(instr,4); }
	| OR expr ',' OFFSET expr NL { u8 instr[4] = {0xB5,0,0xE3,0}; instr[1] = $2; instr[3] = $5; emit(instr,4); }
	| OR '[' R_DP ']' ',' OFFSET expr NL { u8 instr[3] = {0xB2,0xE3,0}; instr[2] = $7; emit(instr,3); }
	| OR expr '[' R_USP ']' ',' OFFSET expr NL { u8 instr[4] = {0xB3,0,0xE3,0}; instr[1] = $2; instr[3] = $8; emit(instr,4); }
	| OR expr '[' R_X1 ']' ',' OFFSET expr NL { u8 instr[5] = {0xB0,0,0,0xE3,0}; _SET16(instr,1,$2); instr[4] = $8; emit(instr,5); }
	| OR expr '[' R_X2 ']' ',' OFFSET expr NL { u8 instr[5] = {0xB1,0,0,0xE3,0}; _SET16(instr,1,$2); instr[4] = $8; emit(instr,5); }
	| OR R_er0 ',' '#' expr NL { u8 instr[4] = {0x44,0xD0,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| OR R_er1 ',' '#' expr NL { u8 instr[4] = {0x45,0xD0,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| OR R_er2 ',' '#' expr NL { u8 instr[4] = {0x46,0xD0,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| OR R_er3 ',' '#' expr NL { u8 instr[4] = {0x47,0xD0,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| OR R_DP ',' '#' expr NL { u8 instr[4] = {0x92,0xD0,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| OR R_X1 ',' '#' expr NL { u8 instr[4] = {0x90,0xD0,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| OR R_X2 ',' '#' expr NL { u8 instr[4] = {0x91,0xD0,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| OR R_USP ',' '#' expr NL { u8 instr[4] = {0xA1,0xD0,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| OR R_SSP ',' '#' expr NL { u8 instr[4] = {0xA0,0xD0,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| OR R_LRB ',' '#' expr NL { u8 instr[4] = {0xA4,0xD0,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| OR OFFSET expr ',' '#' expr NL { u8 instr[5] = {0xB4,0,0xD0,0,0}; instr[1] = $3; _SET16(instr,3,$6); emit(instr,5); }
	| OR expr ',' '#' expr NL { u8 instr[5] = {0xB5,0,0xD0,0,0}; instr[1] = $2; _SET16(instr,3,$5); emit(instr,5); }
	| OR '[' R_DP ']' ',' '#' expr NL { u8 instr[4] = {0xB2,0xD0,0,0}; _SET16(instr,2,$7); emit(instr,4); }
	| OR expr '[' R_USP ']' ',' '#' expr NL { u8 instr[5] = {0xB3,0,0xD0,0,0}; instr[1] = $2; _SET16(instr,3,$8); emit(instr,5); }
	| OR expr '[' R_X1 ']' ',' '#' expr NL { u8 instr[6] = {0xB0,0,0,0xD0,0,0}; _SET16(instr,1,$2); _SET16(instr,4,$8); emit(instr,6); }
	| OR expr '[' R_X2 ']' ',' '#' expr NL { u8 instr[6] = {0xB1,0,0,0xD0,0,0}; _SET16(instr,1,$2); _SET16(instr,4,$8); emit(instr,6); }
	| ORB R_A ',' '#' expr NL { u8 instr[2] = {0xE6,0}; instr[1] = $5; emit(instr,2); }
	| ORB R_A ',' R_r0 NL { u8 instr[1] = {0x68};  emit(instr,1); }
	| ORB R_A ',' R_r1 NL { u8 instr[1] = {0x69};  emit(instr,1); }
	| ORB R_A ',' R_r2 NL { u8 instr[1] = {0x6A};  emit(instr,1); }
	| ORB R_A ',' R_r3 NL { u8 instr[1] = {0x6B};  emit(instr,1); }
	| ORB R_A ',' R_r4 NL { u8 instr[1] = {0x6C};  emit(instr,1); }
	| ORB R_A ',' R_r5 NL { u8 instr[1] = {0x6D};  emit(instr,1); }
	| ORB R_A ',' R_r6 NL { u8 instr[1] = {0x6E};  emit(instr,1); }
	| ORB R_A ',' R_r7 NL { u8 instr[1] = {0x6F};  emit(instr,1); }
	| ORB R_A ',' R_PSWH NL { u8 instr[2] = {0xA2,0xE2};  emit(instr,2); }
	| ORB R_A ',' R_PSWL NL { u8 instr[2] = {0xA3,0xE2};  emit(instr,2); }
	| ORB R_A ',' OFFSET expr NL { u8 instr[2] = {0xE7,0}; instr[1] = $5; emit(instr,2); }
	| ORB R_A ',' expr NL { u8 instr[3] = {0xC5,0,0xE2}; instr[1] = $4; emit(instr,3); }
	| ORB R_A ',' '[' R_DP ']' NL { u8 instr[2] = {0xC2,0xE2};  emit(instr,2); }
	| ORB R_A ',' expr '[' R_USP ']' NL { u8 instr[3] = {0xC3,0,0xE2}; instr[1] = $4; emit(instr,3); }
	| ORB R_A ',' expr '[' R_X1 ']' NL { u8 instr[4] = {0xC0,0,0,0xE2}; _SET16(instr,1,$4); emit(instr,4); }
	| ORB R_A ',' expr '[' R_X2 ']' NL { u8 instr[4] = {0xC1,0,0,0xE2}; _SET16(instr,1,$4); emit(instr,4); }
	| ORB R_r0 ',' R_A NL { u8 instr[2] = {0x20,0xE1};  emit(instr,2); }
	| ORB R_r1 ',' R_A NL { u8 instr[2] = {0x21,0xE1};  emit(instr,2); }
	| ORB R_r2 ',' R_A NL { u8 instr[2] = {0x22,0xE1};  emit(instr,2); }
	| ORB R_r3 ',' R_A NL { u8 instr[2] = {0x23,0xE1};  emit(instr,2); }
	| ORB R_r4 ',' R_A NL { u8 instr[2] = {0x24,0xE1};  emit(instr,2); }
	| ORB R_r5 ',' R_A NL { u8 instr[2] = {0x25,0xE1};  emit(instr,2); }
	| ORB R_r6 ',' R_A NL { u8 instr[2] = {0x26,0xE1};  emit(instr,2); }
	| ORB R_r7 ',' R_A NL { u8 instr[2] = {0x27,0xE1};  emit(instr,2); }
	| ORB R_PSWH ',' R_A NL { u8 instr[2] = {0xA2,0xE1};  emit(instr,2); }
	| ORB R_PSWL ',' R_A NL { u8 instr[2] = {0xA3,0xE1};  emit(instr,2); }
	| ORB OFFSET expr ',' R_A NL { u8 instr[3] = {0xC4,0,0xE1}; instr[1] = $3; emit(instr,3); }
	| ORB expr ',' R_A NL { u8 instr[3] = {0xC5,0,0xE1}; instr[1] = $2; emit(instr,3); }
	| ORB '[' R_DP ']' ',' R_A NL { u8 instr[2] = {0xC2,0xE1};  emit(instr,2); }
	| ORB expr '[' R_USP ']' ',' R_A NL { u8 instr[3] = {0xC3,0,0xE1}; instr[1] = $2; emit(instr,3); }
	| ORB expr '[' R_X1 ']' ',' R_A NL { u8 instr[4] = {0xC0,0,0,0xE1}; _SET16(instr,1,$2); emit(instr,4); }
	| ORB expr '[' R_X2 ']' ',' R_A NL { u8 instr[4] = {0xC1,0,0,0xE1}; _SET16(instr,1,$2); emit(instr,4); }
	| ORB R_r0 ',' OFFSET expr NL { u8 instr[3] = {0x20,0xE3,0}; instr[2] = $5; emit(instr,3); }
	| ORB R_r1 ',' OFFSET expr NL { u8 instr[3] = {0x21,0xE3,0}; instr[2] = $5; emit(instr,3); }
	| ORB R_r2 ',' OFFSET expr NL { u8 instr[3] = {0x22,0xE3,0}; instr[2] = $5; emit(instr,3); }
	| ORB R_r3 ',' OFFSET expr NL { u8 instr[3] = {0x23,0xE3,0}; instr[2] = $5; emit(instr,3); }
	| ORB R_r4 ',' OFFSET expr NL { u8 instr[3] = {0x24,0xE3,0}; instr[2] = $5; emit(instr,3); }
	| ORB R_r5 ',' OFFSET expr NL { u8 instr[3] = {0x25,0xE3,0}; instr[2] = $5; emit(instr,3); }
	| ORB R_r6 ',' OFFSET expr NL { u8 instr[3] = {0x26,0xE3,0}; instr[2] = $5; emit(instr,3); }
	| ORB R_r7 ',' OFFSET expr NL { u8 instr[3] = {0x27,0xE3,0}; instr[2] = $5; emit(instr,3); }
	| ORB R_PSWH ',' OFFSET expr NL { u8 instr[3] = {0xA2,0xE3,0}; instr[2] = $5; emit(instr,3); }
	| ORB R_PSWL ',' OFFSET expr NL { u8 instr[3] = {0xA3,0xE3,0}; instr[2] = $5; emit(instr,3); }
	| ORB OFFSET expr ',' OFFSET expr NL { u8 instr[4] = {0xC4,0,0xE3,0}; instr[1] = $3; instr[3] = $6; emit(instr,4); }
	| ORB expr ',' OFFSET expr NL { u8 instr[4] = {0xC5,0,0xE3,0}; instr[1] = $2; instr[3] = $5; emit(instr,4); }
	| ORB '[' R_DP ']' ',' OFFSET expr NL { u8 instr[3] = {0xC2,0xE3,0}; instr[2] = $7; emit(instr,3); }
	| ORB expr '[' R_USP ']' ',' OFFSET expr NL { u8 instr[4] = {0xC3,0,0xE3,0}; instr[1] = $2; instr[3] = $8; emit(instr,4); }
	| ORB expr '[' R_X1 ']' ',' OFFSET expr NL { u8 instr[5] = {0xC0,0,0,0xE3,0}; _SET16(instr,1,$2); instr[4] = $8; emit(instr,5); }
	| ORB expr '[' R_X2 ']' ',' OFFSET expr NL { u8 instr[5] = {0xC1,0,0,0xE3,0}; _SET16(instr,1,$2); instr[4] = $8; emit(instr,5); }
	| ORB R_r0 ',' '#' expr NL { u8 instr[3] = {0x20,0xE0,0}; instr[2] = $5; emit(instr,3); }
	| ORB R_r1 ',' '#' expr NL { u8 instr[3] = {0x21,0xE0,0}; instr[2] = $5; emit(instr,3); }
	| ORB R_r2 ',' '#' expr NL { u8 instr[3] = {0x22,0xE0,0}; instr[2] = $5; emit(instr,3); }
	| ORB R_r3 ',' '#' expr NL { u8 instr[3] = {0x23,0xE0,0}; instr[2] = $5; emit(instr,3); }
	| ORB R_r4 ',' '#' expr NL { u8 instr[3] = {0x24,0xE0,0}; instr[2] = $5; emit(instr,3); }
	| ORB R_r5 ',' '#' expr NL { u8 instr[3] = {0x25,0xE0,0}; instr[2] = $5; emit(instr,3); }
	| ORB R_r6 ',' '#' expr NL { u8 instr[3] = {0x26,0xE0,0}; instr[2] = $5; emit(instr,3); }
	| ORB R_r7 ',' '#' expr NL { u8 instr[3] = {0x27,0xE0,0}; instr[2] = $5; emit(instr,3); }
	| ORB R_PSWH ',' '#' expr NL { u8 instr[3] = {0xA2,0xE0,0}; instr[2] = $5; emit(instr,3); }
	| ORB R_PSWL ',' '#' expr NL { u8 instr[3] = {0xA3,0xE0,0}; instr[2] = $5; emit(instr,3); }
	| ORB OFFSET expr ',' '#' expr NL { u8 instr[4] = {0xC4,0,0xE0,0}; instr[1] = $3; instr[3] = $6; emit(instr,4); }
	| ORB expr ',' '#' expr NL { u8 instr[4] = {0xC5,0,0xE0,0}; instr[1] = $2; instr[3] = $5; emit(instr,4); }
	| ORB '[' R_DP ']' ',' '#' expr NL { u8 instr[3] = {0xC2,0xE0,0}; instr[2] = $7; emit(instr,3); }
	| ORB expr '[' R_USP ']' ',' '#' expr NL { u8 instr[4] = {0xC3,0,0xE0,0}; instr[1] = $2; instr[3] = $8; emit(instr,4); }
	| ORB expr '[' R_X1 ']' ',' '#' expr NL { u8 instr[5] = {0xC0,0,0,0xE0,0}; _SET16(instr,1,$2); instr[4] = $8; emit(instr,5); }
	| ORB expr '[' R_X2 ']' ',' '#' expr NL { u8 instr[5] = {0xC1,0,0,0xE0,0}; _SET16(instr,1,$2); instr[4] = $8; emit(instr,5); }
	| POPS R_A NL { u8 instr[1] = {0x65};  emit(instr,1); }
	| POPS R_LRB NL { u8 instr[1] = {0x64};  emit(instr,1); }
	| PUSHS R_A NL { u8 instr[1] = {0x55};  emit(instr,1); }
	| PUSHS R_LRB NL { u8 instr[1] = {0x54};  emit(instr,1); }
	| RB R_r0 DOT0 NL { u8 instr[2] = {0x20,0x08};  emit(instr,2); }
	| RB R_r0 DOT1 NL { u8 instr[2] = {0x20,0x09};  emit(instr,2); }
	| RB R_r0 DOT2 NL { u8 instr[2] = {0x20,0x0A};  emit(instr,2); }
	| RB R_r0 DOT3 NL { u8 instr[2] = {0x20,0x0B};  emit(instr,2); }
	| RB R_r0 DOT4 NL { u8 instr[2] = {0x20,0x0C};  emit(instr,2); }
	| RB R_r0 DOT5 NL { u8 instr[2] = {0x20,0x0D};  emit(instr,2); }
	| RB R_r0 DOT6 NL { u8 instr[2] = {0x20,0x0E};  emit(instr,2); }
	| RB R_r0 DOT7 NL { u8 instr[2] = {0x20,0x0F};  emit(instr,2); }
	| RB R_r1 DOT0 NL { u8 instr[2] = {0x21,0x08};  emit(instr,2); }
	| RB R_r1 DOT1 NL { u8 instr[2] = {0x21,0x09};  emit(instr,2); }
	| RB R_r1 DOT2 NL { u8 instr[2] = {0x21,0x0A};  emit(instr,2); }
	| RB R_r1 DOT3 NL { u8 instr[2] = {0x21,0x0B};  emit(instr,2); }
	| RB R_r1 DOT4 NL { u8 instr[2] = {0x21,0x0C};  emit(instr,2); }
	| RB R_r1 DOT5 NL { u8 instr[2] = {0x21,0x0D};  emit(instr,2); }
	| RB R_r1 DOT6 NL { u8 instr[2] = {0x21,0x0E};  emit(instr,2); }
	| RB R_r1 DOT7 NL { u8 instr[2] = {0x21,0x0F};  emit(instr,2); }
	| RB R_r2 DOT0 NL { u8 instr[2] = {0x22,0x08};  emit(instr,2); }
	| RB R_r2 DOT1 NL { u8 instr[2] = {0x22,0x09};  emit(instr,2); }
	| RB R_r2 DOT2 NL { u8 instr[2] = {0x22,0x0A};  emit(instr,2); }
	| RB R_r2 DOT3 NL { u8 instr[2] = {0x22,0x0B};  emit(instr,2); }
	| RB R_r2 DOT4 NL { u8 instr[2] = {0x22,0x0C};  emit(instr,2); }
	| RB R_r2 DOT5 NL { u8 instr[2] = {0x22,0x0D};  emit(instr,2); }
	| RB R_r2 DOT6 NL { u8 instr[2] = {0x22,0x0E};  emit(instr,2); }
	| RB R_r2 DOT7 NL { u8 instr[2] = {0x22,0x0F};  emit(instr,2); }
	| RB R_r3 DOT0 NL { u8 instr[2] = {0x23,0x08};  emit(instr,2); }
	| RB R_r3 DOT1 NL { u8 instr[2] = {0x23,0x09};  emit(instr,2); }
	| RB R_r3 DOT2 NL { u8 instr[2] = {0x23,0x0A};  emit(instr,2); }
	| RB R_r3 DOT3 NL { u8 instr[2] = {0x23,0x0B};  emit(instr,2); }
	| RB R_r3 DOT4 NL { u8 instr[2] = {0x23,0x0C};  emit(instr,2); }
	| RB R_r3 DOT5 NL { u8 instr[2] = {0x23,0x0D};  emit(instr,2); }
	| RB R_r3 DOT6 NL { u8 instr[2] = {0x23,0x0E};  emit(instr,2); }
	| RB R_r3 DOT7 NL { u8 instr[2] = {0x23,0x0F};  emit(instr,2); }
	| RB R_r4 DOT0 NL { u8 instr[2] = {0x24,0x08};  emit(instr,2); }
	| RB R_r4 DOT1 NL { u8 instr[2] = {0x24,0x09};  emit(instr,2); }
	| RB R_r4 DOT2 NL { u8 instr[2] = {0x24,0x0A};  emit(instr,2); }
	| RB R_r4 DOT3 NL { u8 instr[2] = {0x24,0x0B};  emit(instr,2); }
	| RB R_r4 DOT4 NL { u8 instr[2] = {0x24,0x0C};  emit(instr,2); }
	| RB R_r4 DOT5 NL { u8 instr[2] = {0x24,0x0D};  emit(instr,2); }
	| RB R_r4 DOT6 NL { u8 instr[2] = {0x24,0x0E};  emit(instr,2); }
	| RB R_r4 DOT7 NL { u8 instr[2] = {0x24,0x0F};  emit(instr,2); }
	| RB R_r5 DOT0 NL { u8 instr[2] = {0x25,0x08};  emit(instr,2); }
	| RB R_r5 DOT1 NL { u8 instr[2] = {0x25,0x09};  emit(instr,2); }
	| RB R_r5 DOT2 NL { u8 instr[2] = {0x25,0x0A};  emit(instr,2); }
	| RB R_r5 DOT3 NL { u8 instr[2] = {0x25,0x0B};  emit(instr,2); }
	| RB R_r5 DOT4 NL { u8 instr[2] = {0x25,0x0C};  emit(instr,2); }
	| RB R_r5 DOT5 NL { u8 instr[2] = {0x25,0x0D};  emit(instr,2); }
	| RB R_r5 DOT6 NL { u8 instr[2] = {0x25,0x0E};  emit(instr,2); }
	| RB R_r5 DOT7 NL { u8 instr[2] = {0x25,0x0F};  emit(instr,2); }
	| RB R_r6 DOT0 NL { u8 instr[2] = {0x26,0x08};  emit(instr,2); }
	| RB R_r6 DOT1 NL { u8 instr[2] = {0x26,0x09};  emit(instr,2); }
	| RB R_r6 DOT2 NL { u8 instr[2] = {0x26,0x0A};  emit(instr,2); }
	| RB R_r6 DOT3 NL { u8 instr[2] = {0x26,0x0B};  emit(instr,2); }
	| RB R_r6 DOT4 NL { u8 instr[2] = {0x26,0x0C};  emit(instr,2); }
	| RB R_r6 DOT5 NL { u8 instr[2] = {0x26,0x0D};  emit(instr,2); }
	| RB R_r6 DOT6 NL { u8 instr[2] = {0x26,0x0E};  emit(instr,2); }
	| RB R_r6 DOT7 NL { u8 instr[2] = {0x26,0x0F};  emit(instr,2); }
	| RB R_r7 DOT0 NL { u8 instr[2] = {0x27,0x08};  emit(instr,2); }
	| RB R_r7 DOT1 NL { u8 instr[2] = {0x27,0x09};  emit(instr,2); }
	| RB R_r7 DOT2 NL { u8 instr[2] = {0x27,0x0A};  emit(instr,2); }
	| RB R_r7 DOT3 NL { u8 instr[2] = {0x27,0x0B};  emit(instr,2); }
	| RB R_r7 DOT4 NL { u8 instr[2] = {0x27,0x0C};  emit(instr,2); }
	| RB R_r7 DOT5 NL { u8 instr[2] = {0x27,0x0D};  emit(instr,2); }
	| RB R_r7 DOT6 NL { u8 instr[2] = {0x27,0x0E};  emit(instr,2); }
	| RB R_r7 DOT7 NL { u8 instr[2] = {0x27,0x0F};  emit(instr,2); }
	| RB R_PSWH DOT0 NL { u8 instr[2] = {0xA2,0x08};  emit(instr,2); }
	| RB R_PSWH DOT1 NL { u8 instr[2] = {0xA2,0x09};  emit(instr,2); }
	| RB R_PSWH DOT2 NL { u8 instr[2] = {0xA2,0x0A};  emit(instr,2); }
	| RB R_PSWH DOT3 NL { u8 instr[2] = {0xA2,0x0B};  emit(instr,2); }
	| RB R_PSWH DOT4 NL { u8 instr[2] = {0xA2,0x0C};  emit(instr,2); }
	| RB R_PSWH DOT5 NL { u8 instr[2] = {0xA2,0x0D};  emit(instr,2); }
	| RB R_PSWH DOT6 NL { u8 instr[2] = {0xA2,0x0E};  emit(instr,2); }
	| RB R_PSWH DOT7 NL { u8 instr[2] = {0xA2,0x0F};  emit(instr,2); }
	| RB R_PSWL DOT0 NL { u8 instr[2] = {0xA3,0x08};  emit(instr,2); }
	| RB R_PSWL DOT1 NL { u8 instr[2] = {0xA3,0x09};  emit(instr,2); }
	| RB R_PSWL DOT2 NL { u8 instr[2] = {0xA3,0x0A};  emit(instr,2); }
	| RB R_PSWL DOT3 NL { u8 instr[2] = {0xA3,0x0B};  emit(instr,2); }
	| RB R_PSWL DOT4 NL { u8 instr[2] = {0xA3,0x0C};  emit(instr,2); }
	| RB R_PSWL DOT5 NL { u8 instr[2] = {0xA3,0x0D};  emit(instr,2); }
	| RB R_PSWL DOT6 NL { u8 instr[2] = {0xA3,0x0E};  emit(instr,2); }
	| RB R_PSWL DOT7 NL { u8 instr[2] = {0xA3,0x0F};  emit(instr,2); }
	| RB OFFSET expr DOT0 NL { u8 instr[3] = {0xC4,0,0x08}; instr[1] = $3; emit(instr,3); }
	| RB OFFSET expr DOT1 NL { u8 instr[3] = {0xC4,0,0x09}; instr[1] = $3; emit(instr,3); }
	| RB OFFSET expr DOT2 NL { u8 instr[3] = {0xC4,0,0x0A}; instr[1] = $3; emit(instr,3); }
	| RB OFFSET expr DOT3 NL { u8 instr[3] = {0xC4,0,0x0B}; instr[1] = $3; emit(instr,3); }
	| RB OFFSET expr DOT4 NL { u8 instr[3] = {0xC4,0,0x0C}; instr[1] = $3; emit(instr,3); }
	| RB OFFSET expr DOT5 NL { u8 instr[3] = {0xC4,0,0x0D}; instr[1] = $3; emit(instr,3); }
	| RB OFFSET expr DOT6 NL { u8 instr[3] = {0xC4,0,0x0E}; instr[1] = $3; emit(instr,3); }
	| RB OFFSET expr DOT7 NL { u8 instr[3] = {0xC4,0,0x0F}; instr[1] = $3; emit(instr,3); }
	| RB expr DOT0 NL { u8 instr[3] = {0xC5,0,0x08}; instr[1] = $2; emit(instr,3); }
	| RB expr DOT1 NL { u8 instr[3] = {0xC5,0,0x09}; instr[1] = $2; emit(instr,3); }
	| RB expr DOT2 NL { u8 instr[3] = {0xC5,0,0x0A}; instr[1] = $2; emit(instr,3); }
	| RB expr DOT3 NL { u8 instr[3] = {0xC5,0,0x0B}; instr[1] = $2; emit(instr,3); }
	| RB expr DOT4 NL { u8 instr[3] = {0xC5,0,0x0C}; instr[1] = $2; emit(instr,3); }
	| RB expr DOT5 NL { u8 instr[3] = {0xC5,0,0x0D}; instr[1] = $2; emit(instr,3); }
	| RB expr DOT6 NL { u8 instr[3] = {0xC5,0,0x0E}; instr[1] = $2; emit(instr,3); }
	| RB expr DOT7 NL { u8 instr[3] = {0xC5,0,0x0F}; instr[1] = $2; emit(instr,3); }
	| RB '[' R_DP ']' DOT0 NL { u8 instr[2] = {0xC2,0x08};  emit(instr,2); }
	| RB '[' R_DP ']' DOT1 NL { u8 instr[2] = {0xC2,0x09};  emit(instr,2); }
	| RB '[' R_DP ']' DOT2 NL { u8 instr[2] = {0xC2,0x0A};  emit(instr,2); }
	| RB '[' R_DP ']' DOT3 NL { u8 instr[2] = {0xC2,0x0B};  emit(instr,2); }
	| RB '[' R_DP ']' DOT4 NL { u8 instr[2] = {0xC2,0x0C};  emit(instr,2); }
	| RB '[' R_DP ']' DOT5 NL { u8 instr[2] = {0xC2,0x0D};  emit(instr,2); }
	| RB '[' R_DP ']' DOT6 NL { u8 instr[2] = {0xC2,0x0E};  emit(instr,2); }
	| RB '[' R_DP ']' DOT7 NL { u8 instr[2] = {0xC2,0x0F};  emit(instr,2); }
	| RB expr '[' R_USP ']' DOT0 NL { u8 instr[3] = {0xC3,0,0x08}; instr[1] = $2; emit(instr,3); }
	| RB expr '[' R_USP ']' DOT1 NL { u8 instr[3] = {0xC3,0,0x09}; instr[1] = $2; emit(instr,3); }
	| RB expr '[' R_USP ']' DOT2 NL { u8 instr[3] = {0xC3,0,0x0A}; instr[1] = $2; emit(instr,3); }
	| RB expr '[' R_USP ']' DOT3 NL { u8 instr[3] = {0xC3,0,0x0B}; instr[1] = $2; emit(instr,3); }
	| RB expr '[' R_USP ']' DOT4 NL { u8 instr[3] = {0xC3,0,0x0C}; instr[1] = $2; emit(instr,3); }
	| RB expr '[' R_USP ']' DOT5 NL { u8 instr[3] = {0xC3,0,0x0D}; instr[1] = $2; emit(instr,3); }
	| RB expr '[' R_USP ']' DOT6 NL { u8 instr[3] = {0xC3,0,0x0E}; instr[1] = $2; emit(instr,3); }
	| RB expr '[' R_USP ']' DOT7 NL { u8 instr[3] = {0xC3,0,0x0F}; instr[1] = $2; emit(instr,3); }
	| RB expr '[' R_X1 ']' DOT0 NL { u8 instr[4] = {0xC0,0,0,0x08}; _SET16(instr,1,$2); emit(instr,4); }
	| RB expr '[' R_X1 ']' DOT1 NL { u8 instr[4] = {0xC0,0,0,0x09}; _SET16(instr,1,$2); emit(instr,4); }
	| RB expr '[' R_X1 ']' DOT2 NL { u8 instr[4] = {0xC0,0,0,0x0A}; _SET16(instr,1,$2); emit(instr,4); }
	| RB expr '[' R_X1 ']' DOT3 NL { u8 instr[4] = {0xC0,0,0,0x0B}; _SET16(instr,1,$2); emit(instr,4); }
	| RB expr '[' R_X1 ']' DOT4 NL { u8 instr[4] = {0xC0,0,0,0x0C}; _SET16(instr,1,$2); emit(instr,4); }
	| RB expr '[' R_X1 ']' DOT5 NL { u8 instr[4] = {0xC0,0,0,0x0D}; _SET16(instr,1,$2); emit(instr,4); }
	| RB expr '[' R_X1 ']' DOT6 NL { u8 instr[4] = {0xC0,0,0,0x0E}; _SET16(instr,1,$2); emit(instr,4); }
	| RB expr '[' R_X1 ']' DOT7 NL { u8 instr[4] = {0xC0,0,0,0x0F}; _SET16(instr,1,$2); emit(instr,4); }
	| RB expr '[' R_X2 ']' DOT0 NL { u8 instr[4] = {0xC1,0,0,0x08}; _SET16(instr,1,$2); emit(instr,4); }
	| RB expr '[' R_X2 ']' DOT1 NL { u8 instr[4] = {0xC1,0,0,0x09}; _SET16(instr,1,$2); emit(instr,4); }
	| RB expr '[' R_X2 ']' DOT2 NL { u8 instr[4] = {0xC1,0,0,0x0A}; _SET16(instr,1,$2); emit(instr,4); }
	| RB expr '[' R_X2 ']' DOT3 NL { u8 instr[4] = {0xC1,0,0,0x0B}; _SET16(instr,1,$2); emit(instr,4); }
	| RB expr '[' R_X2 ']' DOT4 NL { u8 instr[4] = {0xC1,0,0,0x0C}; _SET16(instr,1,$2); emit(instr,4); }
	| RB expr '[' R_X2 ']' DOT5 NL { u8 instr[4] = {0xC1,0,0,0x0D}; _SET16(instr,1,$2); emit(instr,4); }
	| RB expr '[' R_X2 ']' DOT6 NL { u8 instr[4] = {0xC1,0,0,0x0E}; _SET16(instr,1,$2); emit(instr,4); }
	| RB expr '[' R_X2 ']' DOT7 NL { u8 instr[4] = {0xC1,0,0,0x0F}; _SET16(instr,1,$2); emit(instr,4); }
	| RBR R_r0 NL { u8 instr[2] = {0x20,0x12};  emit(instr,2); }
	| RBR R_r1 NL { u8 instr[2] = {0x21,0x12};  emit(instr,2); }
	| RBR R_r2 NL { u8 instr[2] = {0x22,0x12};  emit(instr,2); }
	| RBR R_r3 NL { u8 instr[2] = {0x23,0x12};  emit(instr,2); }
	| RBR R_r4 NL { u8 instr[2] = {0x24,0x12};  emit(instr,2); }
	| RBR R_r5 NL { u8 instr[2] = {0x25,0x12};  emit(instr,2); }
	| RBR R_r6 NL { u8 instr[2] = {0x26,0x12};  emit(instr,2); }
	| RBR R_r7 NL { u8 instr[2] = {0x27,0x12};  emit(instr,2); }
	| RBR R_PSWH NL { u8 instr[2] = {0xA2,0x12};  emit(instr,2); }
	| RBR R_PSWL NL { u8 instr[2] = {0xA3,0x12};  emit(instr,2); }
	| RBR OFFSET expr NL { u8 instr[3] = {0xC4,0,0x12}; instr[1] = $3; emit(instr,3); }
	| RBR expr NL { u8 instr[3] = {0xC5,0,0x12}; instr[1] = $2; emit(instr,3); }
	| RBR '[' R_DP ']' NL { u8 instr[2] = {0xC2,0x12};  emit(instr,2); }
	| RBR expr '[' R_USP ']' NL { u8 instr[3] = {0xC3,0,0x12}; instr[1] = $2; emit(instr,3); }
	| RBR expr '[' R_X1 ']' NL { u8 instr[4] = {0xC0,0,0,0x12}; _SET16(instr,1,$2); emit(instr,4); }
	| RBR expr '[' R_X2 ']' NL { u8 instr[4] = {0xC1,0,0,0x12}; _SET16(instr,1,$2); emit(instr,4); }
	| RC NL { u8 instr[1] = {0x95};  emit(instr,1); }
	| ROL R_A NL { u8 instr[1] = {0x33};  emit(instr,1); }
	| ROL R_er0 NL { u8 instr[2] = {0x44,0xB7};  emit(instr,2); }
	| ROL R_er1 NL { u8 instr[2] = {0x45,0xB7};  emit(instr,2); }
	| ROL R_er2 NL { u8 instr[2] = {0x46,0xB7};  emit(instr,2); }
	| ROL R_er3 NL { u8 instr[2] = {0x47,0xB7};  emit(instr,2); }
	| ROL R_DP NL { u8 instr[2] = {0x92,0xB7};  emit(instr,2); }
	| ROL R_X1 NL { u8 instr[2] = {0x90,0xB7};  emit(instr,2); }
	| ROL R_X2 NL { u8 instr[2] = {0x91,0xB7};  emit(instr,2); }
	| ROL R_USP NL { u8 instr[2] = {0xA1,0xB7};  emit(instr,2); }
	| ROL R_SSP NL { u8 instr[2] = {0xA0,0xB7};  emit(instr,2); }
	| ROL R_LRB NL { u8 instr[2] = {0xA4,0xB7};  emit(instr,2); }
	| ROL OFFSET expr NL { u8 instr[3] = {0xB4,0,0xB7}; instr[1] = $3; emit(instr,3); }
	| ROL expr NL { u8 instr[3] = {0xB5,0,0xB7}; instr[1] = $2; emit(instr,3); }
	| ROL '[' R_DP ']' NL { u8 instr[2] = {0xB2,0xB7};  emit(instr,2); }
	| ROL expr '[' R_USP ']' NL { u8 instr[3] = {0xB3,0,0xB7}; instr[1] = $2; emit(instr,3); }
	| ROL expr '[' R_X1 ']' NL { u8 instr[4] = {0xB0,0,0,0xB7}; _SET16(instr,1,$2); emit(instr,4); }
	| ROL expr '[' R_X2 ']' NL { u8 instr[4] = {0xB1,0,0,0xB7}; _SET16(instr,1,$2); emit(instr,4); }
	| ROLB R_A NL { u8 instr[1] = {0x33};  emit(instr,1); }
	| ROLB R_r0 NL { u8 instr[2] = {0x20,0xB7};  emit(instr,2); }
	| ROLB R_r1 NL { u8 instr[2] = {0x21,0xB7};  emit(instr,2); }
	| ROLB R_r2 NL { u8 instr[2] = {0x22,0xB7};  emit(instr,2); }
	| ROLB R_r3 NL { u8 instr[2] = {0x23,0xB7};  emit(instr,2); }
	| ROLB R_r4 NL { u8 instr[2] = {0x24,0xB7};  emit(instr,2); }
	| ROLB R_r5 NL { u8 instr[2] = {0x25,0xB7};  emit(instr,2); }
	| ROLB R_r6 NL { u8 instr[2] = {0x26,0xB7};  emit(instr,2); }
	| ROLB R_r7 NL { u8 instr[2] = {0x27,0xB7};  emit(instr,2); }
	| ROLB R_PSWH NL { u8 instr[2] = {0xA2,0xB7};  emit(instr,2); }
	| ROLB R_PSWL NL { u8 instr[2] = {0xA3,0xB7};  emit(instr,2); }
	| ROLB OFFSET expr NL { u8 instr[3] = {0xC4,0,0xB7}; instr[1] = $3; emit(instr,3); }
	| ROLB expr NL { u8 instr[3] = {0xC5,0,0xB7}; instr[1] = $2; emit(instr,3); }
	| ROLB '[' R_DP ']' NL { u8 instr[2] = {0xC2,0xB7};  emit(instr,2); }
	| ROLB expr '[' R_USP ']' NL { u8 instr[3] = {0xC3,0,0xB7}; instr[1] = $2; emit(instr,3); }
	| ROLB expr '[' R_X1 ']' NL { u8 instr[4] = {0xC0,0,0,0xB7}; _SET16(instr,1,$2); emit(instr,4); }
	| ROLB expr '[' R_X2 ']' NL { u8 instr[4] = {0xC1,0,0,0xB7}; _SET16(instr,1,$2); emit(instr,4); }
	| ROR R_A NL { u8 instr[1] = {0x43};  emit(instr,1); }
	| ROR R_er0 NL { u8 instr[2] = {0x44,0xC7};  emit(instr,2); }
	| ROR R_er1 NL { u8 instr[2] = {0x45,0xC7};  emit(instr,2); }
	| ROR R_er2 NL { u8 instr[2] = {0x46,0xC7};  emit(instr,2); }
	| ROR R_er3 NL { u8 instr[2] = {0x47,0xC7};  emit(instr,2); }
	| ROR R_DP NL { u8 instr[2] = {0x92,0xC7};  emit(instr,2); }
	| ROR R_X1 NL { u8 instr[2] = {0x90,0xC7};  emit(instr,2); }
	| ROR R_X2 NL { u8 instr[2] = {0x91,0xC7};  emit(instr,2); }
	| ROR R_USP NL { u8 instr[2] = {0xA1,0xC7};  emit(instr,2); }
	| ROR R_SSP NL { u8 instr[2] = {0xA0,0xC7};  emit(instr,2); }
	| ROR R_LRB NL { u8 instr[2] = {0xA4,0xC7};  emit(instr,2); }
	| ROR OFFSET expr NL { u8 instr[3] = {0xB4,0,0xC7}; instr[1] = $3; emit(instr,3); }
	| ROR expr NL { u8 instr[3] = {0xB5,0,0xC7}; instr[1] = $2; emit(instr,3); }
	| ROR '[' R_DP ']' NL { u8 instr[2] = {0xB2,0xC7};  emit(instr,2); }
	| ROR expr '[' R_USP ']' NL { u8 instr[3] = {0xB3,0,0xC7}; instr[1] = $2; emit(instr,3); }
	| ROR expr '[' R_X1 ']' NL { u8 instr[4] = {0xB0,0,0,0xC7}; _SET16(instr,1,$2); emit(instr,4); }
	| ROR expr '[' R_X2 ']' NL { u8 instr[4] = {0xB1,0,0,0xC7}; _SET16(instr,1,$2); emit(instr,4); }
	| RORB R_A NL { u8 instr[1] = {0x43};  emit(instr,1); }
	| RORB R_r0 NL { u8 instr[2] = {0x20,0xC7};  emit(instr,2); }
	| RORB R_r1 NL { u8 instr[2] = {0x21,0xC7};  emit(instr,2); }
	| RORB R_r2 NL { u8 instr[2] = {0x22,0xC7};  emit(instr,2); }
	| RORB R_r3 NL { u8 instr[2] = {0x23,0xC7};  emit(instr,2); }
	| RORB R_r4 NL { u8 instr[2] = {0x24,0xC7};  emit(instr,2); }
	| RORB R_r5 NL { u8 instr[2] = {0x25,0xC7};  emit(instr,2); }
	| RORB R_r6 NL { u8 instr[2] = {0x26,0xC7};  emit(instr,2); }
	| RORB R_r7 NL { u8 instr[2] = {0x27,0xC7};  emit(instr,2); }
	| RORB R_PSWH NL { u8 instr[2] = {0xA2,0xC7};  emit(instr,2); }
	| RORB R_PSWL NL { u8 instr[2] = {0xA3,0xC7};  emit(instr,2); }
	| RORB OFFSET expr NL { u8 instr[3] = {0xC4,0,0xC7}; instr[1] = $3; emit(instr,3); }
	| RORB expr NL { u8 instr[3] = {0xC5,0,0xC7}; instr[1] = $2; emit(instr,3); }
	| RORB '[' R_DP ']' NL { u8 instr[2] = {0xC2,0xC7};  emit(instr,2); }
	| RORB expr '[' R_USP ']' NL { u8 instr[3] = {0xC3,0,0xC7}; instr[1] = $2; emit(instr,3); }
	| RORB expr '[' R_X1 ']' NL { u8 instr[4] = {0xC0,0,0,0xC7}; _SET16(instr,1,$2); emit(instr,4); }
	| RORB expr '[' R_X2 ']' NL { u8 instr[4] = {0xC1,0,0,0xC7}; _SET16(instr,1,$2); emit(instr,4); }
	| RT NL { u8 instr[1] = {0x01};  emit(instr,1); }
	| RTI NL { u8 instr[1] = {0x02};  emit(instr,1); }
	| SB R_r0 DOT0 NL { u8 instr[2] = {0x20,0x18};  emit(instr,2); }
	| SB R_r0 DOT1 NL { u8 instr[2] = {0x20,0x19};  emit(instr,2); }
	| SB R_r0 DOT2 NL { u8 instr[2] = {0x20,0x1A};  emit(instr,2); }
	| SB R_r0 DOT3 NL { u8 instr[2] = {0x20,0x1B};  emit(instr,2); }
	| SB R_r0 DOT4 NL { u8 instr[2] = {0x20,0x1C};  emit(instr,2); }
	| SB R_r0 DOT5 NL { u8 instr[2] = {0x20,0x1D};  emit(instr,2); }
	| SB R_r0 DOT6 NL { u8 instr[2] = {0x20,0x1E};  emit(instr,2); }
	| SB R_r0 DOT7 NL { u8 instr[2] = {0x20,0x1F};  emit(instr,2); }
	| SB R_r1 DOT0 NL { u8 instr[2] = {0x21,0x18};  emit(instr,2); }
	| SB R_r1 DOT1 NL { u8 instr[2] = {0x21,0x19};  emit(instr,2); }
	| SB R_r1 DOT2 NL { u8 instr[2] = {0x21,0x1A};  emit(instr,2); }
	| SB R_r1 DOT3 NL { u8 instr[2] = {0x21,0x1B};  emit(instr,2); }
	| SB R_r1 DOT4 NL { u8 instr[2] = {0x21,0x1C};  emit(instr,2); }
	| SB R_r1 DOT5 NL { u8 instr[2] = {0x21,0x1D};  emit(instr,2); }
	| SB R_r1 DOT6 NL { u8 instr[2] = {0x21,0x1E};  emit(instr,2); }
	| SB R_r1 DOT7 NL { u8 instr[2] = {0x21,0x1F};  emit(instr,2); }
	| SB R_r2 DOT0 NL { u8 instr[2] = {0x22,0x18};  emit(instr,2); }
	| SB R_r2 DOT1 NL { u8 instr[2] = {0x22,0x19};  emit(instr,2); }
	| SB R_r2 DOT2 NL { u8 instr[2] = {0x22,0x1A};  emit(instr,2); }
	| SB R_r2 DOT3 NL { u8 instr[2] = {0x22,0x1B};  emit(instr,2); }
	| SB R_r2 DOT4 NL { u8 instr[2] = {0x22,0x1C};  emit(instr,2); }
	| SB R_r2 DOT5 NL { u8 instr[2] = {0x22,0x1D};  emit(instr,2); }
	| SB R_r2 DOT6 NL { u8 instr[2] = {0x22,0x1E};  emit(instr,2); }
	| SB R_r2 DOT7 NL { u8 instr[2] = {0x22,0x1F};  emit(instr,2); }
	| SB R_r3 DOT0 NL { u8 instr[2] = {0x23,0x18};  emit(instr,2); }
	| SB R_r3 DOT1 NL { u8 instr[2] = {0x23,0x19};  emit(instr,2); }
	| SB R_r3 DOT2 NL { u8 instr[2] = {0x23,0x1A};  emit(instr,2); }
	| SB R_r3 DOT3 NL { u8 instr[2] = {0x23,0x1B};  emit(instr,2); }
	| SB R_r3 DOT4 NL { u8 instr[2] = {0x23,0x1C};  emit(instr,2); }
	| SB R_r3 DOT5 NL { u8 instr[2] = {0x23,0x1D};  emit(instr,2); }
	| SB R_r3 DOT6 NL { u8 instr[2] = {0x23,0x1E};  emit(instr,2); }
	| SB R_r3 DOT7 NL { u8 instr[2] = {0x23,0x1F};  emit(instr,2); }
	| SB R_r4 DOT0 NL { u8 instr[2] = {0x24,0x18};  emit(instr,2); }
	| SB R_r4 DOT1 NL { u8 instr[2] = {0x24,0x19};  emit(instr,2); }
	| SB R_r4 DOT2 NL { u8 instr[2] = {0x24,0x1A};  emit(instr,2); }
	| SB R_r4 DOT3 NL { u8 instr[2] = {0x24,0x1B};  emit(instr,2); }
	| SB R_r4 DOT4 NL { u8 instr[2] = {0x24,0x1C};  emit(instr,2); }
	| SB R_r4 DOT5 NL { u8 instr[2] = {0x24,0x1D};  emit(instr,2); }
	| SB R_r4 DOT6 NL { u8 instr[2] = {0x24,0x1E};  emit(instr,2); }
	| SB R_r4 DOT7 NL { u8 instr[2] = {0x24,0x1F};  emit(instr,2); }
	| SB R_r5 DOT0 NL { u8 instr[2] = {0x25,0x18};  emit(instr,2); }
	| SB R_r5 DOT1 NL { u8 instr[2] = {0x25,0x19};  emit(instr,2); }
	| SB R_r5 DOT2 NL { u8 instr[2] = {0x25,0x1A};  emit(instr,2); }
	| SB R_r5 DOT3 NL { u8 instr[2] = {0x25,0x1B};  emit(instr,2); }
	| SB R_r5 DOT4 NL { u8 instr[2] = {0x25,0x1C};  emit(instr,2); }
	| SB R_r5 DOT5 NL { u8 instr[2] = {0x25,0x1D};  emit(instr,2); }
	| SB R_r5 DOT6 NL { u8 instr[2] = {0x25,0x1E};  emit(instr,2); }
	| SB R_r5 DOT7 NL { u8 instr[2] = {0x25,0x1F};  emit(instr,2); }
	| SB R_r6 DOT0 NL { u8 instr[2] = {0x26,0x18};  emit(instr,2); }
	| SB R_r6 DOT1 NL { u8 instr[2] = {0x26,0x19};  emit(instr,2); }
	| SB R_r6 DOT2 NL { u8 instr[2] = {0x26,0x1A};  emit(instr,2); }
	| SB R_r6 DOT3 NL { u8 instr[2] = {0x26,0x1B};  emit(instr,2); }
	| SB R_r6 DOT4 NL { u8 instr[2] = {0x26,0x1C};  emit(instr,2); }
	| SB R_r6 DOT5 NL { u8 instr[2] = {0x26,0x1D};  emit(instr,2); }
	| SB R_r6 DOT6 NL { u8 instr[2] = {0x26,0x1E};  emit(instr,2); }
	| SB R_r6 DOT7 NL { u8 instr[2] = {0x26,0x1F};  emit(instr,2); }
	| SB R_r7 DOT0 NL { u8 instr[2] = {0x27,0x18};  emit(instr,2); }
	| SB R_r7 DOT1 NL { u8 instr[2] = {0x27,0x19};  emit(instr,2); }
	| SB R_r7 DOT2 NL { u8 instr[2] = {0x27,0x1A};  emit(instr,2); }
	| SB R_r7 DOT3 NL { u8 instr[2] = {0x27,0x1B};  emit(instr,2); }
	| SB R_r7 DOT4 NL { u8 instr[2] = {0x27,0x1C};  emit(instr,2); }
	| SB R_r7 DOT5 NL { u8 instr[2] = {0x27,0x1D};  emit(instr,2); }
	| SB R_r7 DOT6 NL { u8 instr[2] = {0x27,0x1E};  emit(instr,2); }
	| SB R_r7 DOT7 NL { u8 instr[2] = {0x27,0x1F};  emit(instr,2); }
	| SB R_PSWH DOT0 NL { u8 instr[2] = {0xA2,0x18};  emit(instr,2); }
	| SB R_PSWH DOT1 NL { u8 instr[2] = {0xA2,0x19};  emit(instr,2); }
	| SB R_PSWH DOT2 NL { u8 instr[2] = {0xA2,0x1A};  emit(instr,2); }
	| SB R_PSWH DOT3 NL { u8 instr[2] = {0xA2,0x1B};  emit(instr,2); }
	| SB R_PSWH DOT4 NL { u8 instr[2] = {0xA2,0x1C};  emit(instr,2); }
	| SB R_PSWH DOT5 NL { u8 instr[2] = {0xA2,0x1D};  emit(instr,2); }
	| SB R_PSWH DOT6 NL { u8 instr[2] = {0xA2,0x1E};  emit(instr,2); }
	| SB R_PSWH DOT7 NL { u8 instr[2] = {0xA2,0x1F};  emit(instr,2); }
	| SB R_PSWL DOT0 NL { u8 instr[2] = {0xA3,0x18};  emit(instr,2); }
	| SB R_PSWL DOT1 NL { u8 instr[2] = {0xA3,0x19};  emit(instr,2); }
	| SB R_PSWL DOT2 NL { u8 instr[2] = {0xA3,0x1A};  emit(instr,2); }
	| SB R_PSWL DOT3 NL { u8 instr[2] = {0xA3,0x1B};  emit(instr,2); }
	| SB R_PSWL DOT4 NL { u8 instr[2] = {0xA3,0x1C};  emit(instr,2); }
	| SB R_PSWL DOT5 NL { u8 instr[2] = {0xA3,0x1D};  emit(instr,2); }
	| SB R_PSWL DOT6 NL { u8 instr[2] = {0xA3,0x1E};  emit(instr,2); }
	| SB R_PSWL DOT7 NL { u8 instr[2] = {0xA3,0x1F};  emit(instr,2); }
	| SB OFFSET expr DOT0 NL { u8 instr[3] = {0xC4,0,0x18}; instr[1] = $3; emit(instr,3); }
	| SB OFFSET expr DOT1 NL { u8 instr[3] = {0xC4,0,0x19}; instr[1] = $3; emit(instr,3); }
	| SB OFFSET expr DOT2 NL { u8 instr[3] = {0xC4,0,0x1A}; instr[1] = $3; emit(instr,3); }
	| SB OFFSET expr DOT3 NL { u8 instr[3] = {0xC4,0,0x1B}; instr[1] = $3; emit(instr,3); }
	| SB OFFSET expr DOT4 NL { u8 instr[3] = {0xC4,0,0x1C}; instr[1] = $3; emit(instr,3); }
	| SB OFFSET expr DOT5 NL { u8 instr[3] = {0xC4,0,0x1D}; instr[1] = $3; emit(instr,3); }
	| SB OFFSET expr DOT6 NL { u8 instr[3] = {0xC4,0,0x1E}; instr[1] = $3; emit(instr,3); }
	| SB OFFSET expr DOT7 NL { u8 instr[3] = {0xC4,0,0x1F}; instr[1] = $3; emit(instr,3); }
	| SB expr DOT0 NL { u8 instr[3] = {0xC5,0,0x18}; instr[1] = $2; emit(instr,3); }
	| SB expr DOT1 NL { u8 instr[3] = {0xC5,0,0x19}; instr[1] = $2; emit(instr,3); }
	| SB expr DOT2 NL { u8 instr[3] = {0xC5,0,0x1A}; instr[1] = $2; emit(instr,3); }
	| SB expr DOT3 NL { u8 instr[3] = {0xC5,0,0x1B}; instr[1] = $2; emit(instr,3); }
	| SB expr DOT4 NL { u8 instr[3] = {0xC5,0,0x1C}; instr[1] = $2; emit(instr,3); }
	| SB expr DOT5 NL { u8 instr[3] = {0xC5,0,0x1D}; instr[1] = $2; emit(instr,3); }
	| SB expr DOT6 NL { u8 instr[3] = {0xC5,0,0x1E}; instr[1] = $2; emit(instr,3); }
	| SB expr DOT7 NL { u8 instr[3] = {0xC5,0,0x1F}; instr[1] = $2; emit(instr,3); }
	| SB '[' R_DP ']' DOT0 NL { u8 instr[2] = {0xC2,0x18};  emit(instr,2); }
	| SB '[' R_DP ']' DOT1 NL { u8 instr[2] = {0xC2,0x19};  emit(instr,2); }
	| SB '[' R_DP ']' DOT2 NL { u8 instr[2] = {0xC2,0x1A};  emit(instr,2); }
	| SB '[' R_DP ']' DOT3 NL { u8 instr[2] = {0xC2,0x1B};  emit(instr,2); }
	| SB '[' R_DP ']' DOT4 NL { u8 instr[2] = {0xC2,0x1C};  emit(instr,2); }
	| SB '[' R_DP ']' DOT5 NL { u8 instr[2] = {0xC2,0x1D};  emit(instr,2); }
	| SB '[' R_DP ']' DOT6 NL { u8 instr[2] = {0xC2,0x1E};  emit(instr,2); }
	| SB '[' R_DP ']' DOT7 NL { u8 instr[2] = {0xC2,0x1F};  emit(instr,2); }
	| SB expr '[' R_USP ']' DOT0 NL { u8 instr[3] = {0xC3,0,0x18}; instr[1] = $2; emit(instr,3); }
	| SB expr '[' R_USP ']' DOT1 NL { u8 instr[3] = {0xC3,0,0x19}; instr[1] = $2; emit(instr,3); }
	| SB expr '[' R_USP ']' DOT2 NL { u8 instr[3] = {0xC3,0,0x1A}; instr[1] = $2; emit(instr,3); }
	| SB expr '[' R_USP ']' DOT3 NL { u8 instr[3] = {0xC3,0,0x1B}; instr[1] = $2; emit(instr,3); }
	| SB expr '[' R_USP ']' DOT4 NL { u8 instr[3] = {0xC3,0,0x1C}; instr[1] = $2; emit(instr,3); }
	| SB expr '[' R_USP ']' DOT5 NL { u8 instr[3] = {0xC3,0,0x1D}; instr[1] = $2; emit(instr,3); }
	| SB expr '[' R_USP ']' DOT6 NL { u8 instr[3] = {0xC3,0,0x1E}; instr[1] = $2; emit(instr,3); }
	| SB expr '[' R_USP ']' DOT7 NL { u8 instr[3] = {0xC3,0,0x1F}; instr[1] = $2; emit(instr,3); }
	| SB expr '[' R_X1 ']' DOT0 NL { u8 instr[4] = {0xC0,0,0,0x18}; _SET16(instr,1,$2); emit(instr,4); }
	| SB expr '[' R_X1 ']' DOT1 NL { u8 instr[4] = {0xC0,0,0,0x19}; _SET16(instr,1,$2); emit(instr,4); }
	| SB expr '[' R_X1 ']' DOT2 NL { u8 instr[4] = {0xC0,0,0,0x1A}; _SET16(instr,1,$2); emit(instr,4); }
	| SB expr '[' R_X1 ']' DOT3 NL { u8 instr[4] = {0xC0,0,0,0x1B}; _SET16(instr,1,$2); emit(instr,4); }
	| SB expr '[' R_X1 ']' DOT4 NL { u8 instr[4] = {0xC0,0,0,0x1C}; _SET16(instr,1,$2); emit(instr,4); }
	| SB expr '[' R_X1 ']' DOT5 NL { u8 instr[4] = {0xC0,0,0,0x1D}; _SET16(instr,1,$2); emit(instr,4); }
	| SB expr '[' R_X1 ']' DOT6 NL { u8 instr[4] = {0xC0,0,0,0x1E}; _SET16(instr,1,$2); emit(instr,4); }
	| SB expr '[' R_X1 ']' DOT7 NL { u8 instr[4] = {0xC0,0,0,0x1F}; _SET16(instr,1,$2); emit(instr,4); }
	| SB expr '[' R_X2 ']' DOT0 NL { u8 instr[4] = {0xC1,0,0,0x18}; _SET16(instr,1,$2); emit(instr,4); }
	| SB expr '[' R_X2 ']' DOT1 NL { u8 instr[4] = {0xC1,0,0,0x19}; _SET16(instr,1,$2); emit(instr,4); }
	| SB expr '[' R_X2 ']' DOT2 NL { u8 instr[4] = {0xC1,0,0,0x1A}; _SET16(instr,1,$2); emit(instr,4); }
	| SB expr '[' R_X2 ']' DOT3 NL { u8 instr[4] = {0xC1,0,0,0x1B}; _SET16(instr,1,$2); emit(instr,4); }
	| SB expr '[' R_X2 ']' DOT4 NL { u8 instr[4] = {0xC1,0,0,0x1C}; _SET16(instr,1,$2); emit(instr,4); }
	| SB expr '[' R_X2 ']' DOT5 NL { u8 instr[4] = {0xC1,0,0,0x1D}; _SET16(instr,1,$2); emit(instr,4); }
	| SB expr '[' R_X2 ']' DOT6 NL { u8 instr[4] = {0xC1,0,0,0x1E}; _SET16(instr,1,$2); emit(instr,4); }
	| SB expr '[' R_X2 ']' DOT7 NL { u8 instr[4] = {0xC1,0,0,0x1F}; _SET16(instr,1,$2); emit(instr,4); }
	| SBC R_A ',' '#' expr NL { u8 instr[3] = {0xB6,0,0}; _SET16(instr,1,$5); emit(instr,3); }
	| SBC R_A ',' R_er0 NL { u8 instr[1] = {0x38};  emit(instr,1); }
	| SBC R_A ',' R_er1 NL { u8 instr[1] = {0x39};  emit(instr,1); }
	| SBC R_A ',' R_er2 NL { u8 instr[1] = {0x3A};  emit(instr,1); }
	| SBC R_A ',' R_er3 NL { u8 instr[1] = {0x3B};  emit(instr,1); }
	| SBC R_A ',' R_DP NL { u8 instr[2] = {0x92,0xB2};  emit(instr,2); }
	| SBC R_A ',' R_X1 NL { u8 instr[2] = {0x90,0xB2};  emit(instr,2); }
	| SBC R_A ',' R_X2 NL { u8 instr[2] = {0x91,0xB2};  emit(instr,2); }
	| SBC R_A ',' R_USP NL { u8 instr[2] = {0xA1,0xB2};  emit(instr,2); }
	| SBC R_A ',' R_SSP NL { u8 instr[2] = {0xA0,0xB2};  emit(instr,2); }
	| SBC R_A ',' R_LRB NL { u8 instr[2] = {0xA4,0xB2};  emit(instr,2); }
	| SBC R_A ',' OFFSET expr NL { u8 instr[2] = {0xB7,0}; instr[1] = $5; emit(instr,2); }
	| SBC R_A ',' expr NL { u8 instr[3] = {0xB5,0,0xB2}; instr[1] = $4; emit(instr,3); }
	| SBC R_A ',' '[' R_DP ']' NL { u8 instr[2] = {0xB2,0xB2};  emit(instr,2); }
	| SBC R_A ',' expr '[' R_USP ']' NL { u8 instr[3] = {0xB3,0,0xB2}; instr[1] = $4; emit(instr,3); }
	| SBC R_A ',' expr '[' R_X1 ']' NL { u8 instr[4] = {0xB0,0,0,0xB2}; _SET16(instr,1,$4); emit(instr,4); }
	| SBC R_A ',' expr '[' R_X2 ']' NL { u8 instr[4] = {0xB1,0,0,0xB2}; _SET16(instr,1,$4); emit(instr,4); }
	| SBC R_er0 ',' R_A NL { u8 instr[2] = {0x44,0xB1};  emit(instr,2); }
	| SBC R_er1 ',' R_A NL { u8 instr[2] = {0x45,0xB1};  emit(instr,2); }
	| SBC R_er2 ',' R_A NL { u8 instr[2] = {0x46,0xB1};  emit(instr,2); }
	| SBC R_er3 ',' R_A NL { u8 instr[2] = {0x47,0xB1};  emit(instr,2); }
	| SBC R_DP ',' R_A NL { u8 instr[2] = {0x92,0xB1};  emit(instr,2); }
	| SBC R_X1 ',' R_A NL { u8 instr[2] = {0x90,0xB1};  emit(instr,2); }
	| SBC R_X2 ',' R_A NL { u8 instr[2] = {0x91,0xB1};  emit(instr,2); }
	| SBC R_USP ',' R_A NL { u8 instr[2] = {0xA1,0xB1};  emit(instr,2); }
	| SBC R_SSP ',' R_A NL { u8 instr[2] = {0xA0,0xB1};  emit(instr,2); }
	| SBC R_LRB ',' R_A NL { u8 instr[2] = {0xA4,0xB1};  emit(instr,2); }
	| SBC OFFSET expr ',' R_A NL { u8 instr[3] = {0xB4,0,0xB1}; instr[1] = $3; emit(instr,3); }
	| SBC expr ',' R_A NL { u8 instr[3] = {0xB5,0,0xB1}; instr[1] = $2; emit(instr,3); }
	| SBC '[' R_DP ']' ',' R_A NL { u8 instr[2] = {0xB2,0xB1};  emit(instr,2); }
	| SBC expr '[' R_USP ']' ',' R_A NL { u8 instr[3] = {0xB3,0,0xB1}; instr[1] = $2; emit(instr,3); }
	| SBC expr '[' R_X1 ']' ',' R_A NL { u8 instr[4] = {0xB0,0,0,0xB1}; _SET16(instr,1,$2); emit(instr,4); }
	| SBC expr '[' R_X2 ']' ',' R_A NL { u8 instr[4] = {0xB1,0,0,0xB1}; _SET16(instr,1,$2); emit(instr,4); }
	| SBC R_er0 ',' OFFSET expr NL { u8 instr[3] = {0x44,0xB3,0}; instr[2] = $5; emit(instr,3); }
	| SBC R_er1 ',' OFFSET expr NL { u8 instr[3] = {0x45,0xB3,0}; instr[2] = $5; emit(instr,3); }
	| SBC R_er2 ',' OFFSET expr NL { u8 instr[3] = {0x46,0xB3,0}; instr[2] = $5; emit(instr,3); }
	| SBC R_er3 ',' OFFSET expr NL { u8 instr[3] = {0x47,0xB3,0}; instr[2] = $5; emit(instr,3); }
	| SBC R_DP ',' OFFSET expr NL { u8 instr[3] = {0x92,0xB3,0}; instr[2] = $5; emit(instr,3); }
	| SBC R_X1 ',' OFFSET expr NL { u8 instr[3] = {0x90,0xB3,0}; instr[2] = $5; emit(instr,3); }
	| SBC R_X2 ',' OFFSET expr NL { u8 instr[3] = {0x91,0xB3,0}; instr[2] = $5; emit(instr,3); }
	| SBC R_USP ',' OFFSET expr NL { u8 instr[3] = {0xA1,0xB3,0}; instr[2] = $5; emit(instr,3); }
	| SBC R_SSP ',' OFFSET expr NL { u8 instr[3] = {0xA0,0xB3,0}; instr[2] = $5; emit(instr,3); }
	| SBC R_LRB ',' OFFSET expr NL { u8 instr[3] = {0xA4,0xB3,0}; instr[2] = $5; emit(instr,3); }
	| SBC OFFSET expr ',' OFFSET expr NL { u8 instr[4] = {0xB4,0,0xB3,0}; instr[1] = $3; instr[3] = $6; emit(instr,4); }
	| SBC expr ',' OFFSET expr NL { u8 instr[4] = {0xB5,0,0xB3,0}; instr[1] = $2; instr[3] = $5; emit(instr,4); }
	| SBC '[' R_DP ']' ',' OFFSET expr NL { u8 instr[3] = {0xB2,0xB3,0}; instr[2] = $7; emit(instr,3); }
	| SBC expr '[' R_USP ']' ',' OFFSET expr NL { u8 instr[4] = {0xB3,0,0xB3,0}; instr[1] = $2; instr[3] = $8; emit(instr,4); }
	| SBC expr '[' R_X1 ']' ',' OFFSET expr NL { u8 instr[5] = {0xB0,0,0,0xB3,0}; _SET16(instr,1,$2); instr[4] = $8; emit(instr,5); }
	| SBC expr '[' R_X2 ']' ',' OFFSET expr NL { u8 instr[5] = {0xB1,0,0,0xB3,0}; _SET16(instr,1,$2); instr[4] = $8; emit(instr,5); }
	| SBC R_er0 ',' '#' expr NL { u8 instr[4] = {0x44,0xB0,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| SBC R_er1 ',' '#' expr NL { u8 instr[4] = {0x45,0xB0,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| SBC R_er2 ',' '#' expr NL { u8 instr[4] = {0x46,0xB0,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| SBC R_er3 ',' '#' expr NL { u8 instr[4] = {0x47,0xB0,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| SBC R_DP ',' '#' expr NL { u8 instr[4] = {0x92,0xB0,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| SBC R_X1 ',' '#' expr NL { u8 instr[4] = {0x90,0xB0,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| SBC R_X2 ',' '#' expr NL { u8 instr[4] = {0x91,0xB0,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| SBC R_USP ',' '#' expr NL { u8 instr[4] = {0xA1,0xB0,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| SBC R_SSP ',' '#' expr NL { u8 instr[4] = {0xA0,0xB0,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| SBC R_LRB ',' '#' expr NL { u8 instr[4] = {0xA4,0xB0,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| SBC OFFSET expr ',' '#' expr NL { u8 instr[5] = {0xB4,0,0xB0,0,0}; instr[1] = $3; _SET16(instr,3,$6); emit(instr,5); }
	| SBC expr ',' '#' expr NL { u8 instr[5] = {0xB5,0,0xB0,0,0}; instr[1] = $2; _SET16(instr,3,$5); emit(instr,5); }
	| SBC '[' R_DP ']' ',' '#' expr NL { u8 instr[4] = {0xB2,0xB0,0,0}; _SET16(instr,2,$7); emit(instr,4); }
	| SBC expr '[' R_USP ']' ',' '#' expr NL { u8 instr[5] = {0xB3,0,0xB0,0,0}; instr[1] = $2; _SET16(instr,3,$8); emit(instr,5); }
	| SBC expr '[' R_X1 ']' ',' '#' expr NL { u8 instr[6] = {0xB0,0,0,0xB0,0,0}; _SET16(instr,1,$2); _SET16(instr,4,$8); emit(instr,6); }
	| SBC expr '[' R_X2 ']' ',' '#' expr NL { u8 instr[6] = {0xB1,0,0,0xB0,0,0}; _SET16(instr,1,$2); _SET16(instr,4,$8); emit(instr,6); }
	| SBCB R_A ',' '#' expr NL { u8 instr[2] = {0xB6,0}; instr[1] = $5; emit(instr,2); }
	| SBCB R_A ',' R_r0 NL { u8 instr[1] = {0x38};  emit(instr,1); }
	| SBCB R_A ',' R_r1 NL { u8 instr[1] = {0x39};  emit(instr,1); }
	| SBCB R_A ',' R_r2 NL { u8 instr[1] = {0x3A};  emit(instr,1); }
	| SBCB R_A ',' R_r3 NL { u8 instr[1] = {0x3B};  emit(instr,1); }
	| SBCB R_A ',' R_r4 NL { u8 instr[1] = {0x3C};  emit(instr,1); }
	| SBCB R_A ',' R_r5 NL { u8 instr[1] = {0x3D};  emit(instr,1); }
	| SBCB R_A ',' R_r6 NL { u8 instr[1] = {0x3E};  emit(instr,1); }
	| SBCB R_A ',' R_r7 NL { u8 instr[1] = {0x3F};  emit(instr,1); }
	| SBCB R_A ',' R_PSWH NL { u8 instr[2] = {0xA2,0xB2};  emit(instr,2); }
	| SBCB R_A ',' R_PSWL NL { u8 instr[2] = {0xA3,0xB2};  emit(instr,2); }
	| SBCB R_A ',' OFFSET expr NL { u8 instr[2] = {0xB7,0}; instr[1] = $5; emit(instr,2); }
	| SBCB R_A ',' expr NL { u8 instr[3] = {0xC5,0,0xB2}; instr[1] = $4; emit(instr,3); }
	| SBCB R_A ',' '[' R_DP ']' NL { u8 instr[2] = {0xC2,0xB2};  emit(instr,2); }
	| SBCB R_A ',' expr '[' R_USP ']' NL { u8 instr[3] = {0xC3,0,0xB2}; instr[1] = $4; emit(instr,3); }
	| SBCB R_A ',' expr '[' R_X1 ']' NL { u8 instr[4] = {0xC0,0,0,0xB2}; _SET16(instr,1,$4); emit(instr,4); }
	| SBCB R_A ',' expr '[' R_X2 ']' NL { u8 instr[4] = {0xC1,0,0,0xB2}; _SET16(instr,1,$4); emit(instr,4); }
	| SBCB R_r0 ',' R_A NL { u8 instr[2] = {0x20,0xB1};  emit(instr,2); }
	| SBCB R_r1 ',' R_A NL { u8 instr[2] = {0x21,0xB1};  emit(instr,2); }
	| SBCB R_r2 ',' R_A NL { u8 instr[2] = {0x22,0xB1};  emit(instr,2); }
	| SBCB R_r3 ',' R_A NL { u8 instr[2] = {0x23,0xB1};  emit(instr,2); }
	| SBCB R_r4 ',' R_A NL { u8 instr[2] = {0x24,0xB1};  emit(instr,2); }
	| SBCB R_r5 ',' R_A NL { u8 instr[2] = {0x25,0xB1};  emit(instr,2); }
	| SBCB R_r6 ',' R_A NL { u8 instr[2] = {0x26,0xB1};  emit(instr,2); }
	| SBCB R_r7 ',' R_A NL { u8 instr[2] = {0x27,0xB1};  emit(instr,2); }
	| SBCB R_PSWH ',' R_A NL { u8 instr[2] = {0xA2,0xB1};  emit(instr,2); }
	| SBCB R_PSWL ',' R_A NL { u8 instr[2] = {0xA3,0xB1};  emit(instr,2); }
	| SBCB OFFSET expr ',' R_A NL { u8 instr[3] = {0xC4,0,0xB1}; instr[1] = $3; emit(instr,3); }
	| SBCB expr ',' R_A NL { u8 instr[3] = {0xC5,0,0xB1}; instr[1] = $2; emit(instr,3); }
	| SBCB '[' R_DP ']' ',' R_A NL { u8 instr[2] = {0xC2,0xB1};  emit(instr,2); }
	| SBCB expr '[' R_USP ']' ',' R_A NL { u8 instr[3] = {0xC3,0,0xB1}; instr[1] = $2; emit(instr,3); }
	| SBCB expr '[' R_X1 ']' ',' R_A NL { u8 instr[4] = {0xC0,0,0,0xB1}; _SET16(instr,1,$2); emit(instr,4); }
	| SBCB expr '[' R_X2 ']' ',' R_A NL { u8 instr[4] = {0xC1,0,0,0xB1}; _SET16(instr,1,$2); emit(instr,4); }
	| SBCB R_r0 ',' OFFSET expr NL { u8 instr[3] = {0x20,0xB3,0}; instr[2] = $5; emit(instr,3); }
	| SBCB R_r1 ',' OFFSET expr NL { u8 instr[3] = {0x21,0xB3,0}; instr[2] = $5; emit(instr,3); }
	| SBCB R_r2 ',' OFFSET expr NL { u8 instr[3] = {0x22,0xB3,0}; instr[2] = $5; emit(instr,3); }
	| SBCB R_r3 ',' OFFSET expr NL { u8 instr[3] = {0x23,0xB3,0}; instr[2] = $5; emit(instr,3); }
	| SBCB R_r4 ',' OFFSET expr NL { u8 instr[3] = {0x24,0xB3,0}; instr[2] = $5; emit(instr,3); }
	| SBCB R_r5 ',' OFFSET expr NL { u8 instr[3] = {0x25,0xB3,0}; instr[2] = $5; emit(instr,3); }
	| SBCB R_r6 ',' OFFSET expr NL { u8 instr[3] = {0x26,0xB3,0}; instr[2] = $5; emit(instr,3); }
	| SBCB R_r7 ',' OFFSET expr NL { u8 instr[3] = {0x27,0xB3,0}; instr[2] = $5; emit(instr,3); }
	| SBCB R_PSWH ',' OFFSET expr NL { u8 instr[3] = {0xA2,0xB3,0}; instr[2] = $5; emit(instr,3); }
	| SBCB R_PSWL ',' OFFSET expr NL { u8 instr[3] = {0xA3,0xB3,0}; instr[2] = $5; emit(instr,3); }
	| SBCB OFFSET expr ',' OFFSET expr NL { u8 instr[4] = {0xC4,0,0xB3,0}; instr[1] = $3; instr[3] = $6; emit(instr,4); }
	| SBCB expr ',' OFFSET expr NL { u8 instr[4] = {0xC5,0,0xB3,0}; instr[1] = $2; instr[3] = $5; emit(instr,4); }
	| SBCB '[' R_DP ']' ',' OFFSET expr NL { u8 instr[3] = {0xC2,0xB3,0}; instr[2] = $7; emit(instr,3); }
	| SBCB expr '[' R_USP ']' ',' OFFSET expr NL { u8 instr[4] = {0xC3,0,0xB3,0}; instr[1] = $2; instr[3] = $8; emit(instr,4); }
	| SBCB expr '[' R_X1 ']' ',' OFFSET expr NL { u8 instr[5] = {0xC0,0,0,0xB3,0}; _SET16(instr,1,$2); instr[4] = $8; emit(instr,5); }
	| SBCB expr '[' R_X2 ']' ',' OFFSET expr NL { u8 instr[5] = {0xC1,0,0,0xB3,0}; _SET16(instr,1,$2); instr[4] = $8; emit(instr,5); }
	| SBCB R_r0 ',' '#' expr NL { u8 instr[3] = {0x20,0xB0,0}; instr[2] = $5; emit(instr,3); }
	| SBCB R_r1 ',' '#' expr NL { u8 instr[3] = {0x21,0xB0,0}; instr[2] = $5; emit(instr,3); }
	| SBCB R_r2 ',' '#' expr NL { u8 instr[3] = {0x22,0xB0,0}; instr[2] = $5; emit(instr,3); }
	| SBCB R_r3 ',' '#' expr NL { u8 instr[3] = {0x23,0xB0,0}; instr[2] = $5; emit(instr,3); }
	| SBCB R_r4 ',' '#' expr NL { u8 instr[3] = {0x24,0xB0,0}; instr[2] = $5; emit(instr,3); }
	| SBCB R_r5 ',' '#' expr NL { u8 instr[3] = {0x25,0xB0,0}; instr[2] = $5; emit(instr,3); }
	| SBCB R_r6 ',' '#' expr NL { u8 instr[3] = {0x26,0xB0,0}; instr[2] = $5; emit(instr,3); }
	| SBCB R_r7 ',' '#' expr NL { u8 instr[3] = {0x27,0xB0,0}; instr[2] = $5; emit(instr,3); }
	| SBCB R_PSWH ',' '#' expr NL { u8 instr[3] = {0xA2,0xB0,0}; instr[2] = $5; emit(instr,3); }
	| SBCB R_PSWL ',' '#' expr NL { u8 instr[3] = {0xA3,0xB0,0}; instr[2] = $5; emit(instr,3); }
	| SBCB OFFSET expr ',' '#' expr NL { u8 instr[4] = {0xC4,0,0xB0,0}; instr[1] = $3; instr[3] = $6; emit(instr,4); }
	| SBCB expr ',' '#' expr NL { u8 instr[4] = {0xC5,0,0xB0,0}; instr[1] = $2; instr[3] = $5; emit(instr,4); }
	| SBCB '[' R_DP ']' ',' '#' expr NL { u8 instr[3] = {0xC2,0xB0,0}; instr[2] = $7; emit(instr,3); }
	| SBCB expr '[' R_USP ']' ',' '#' expr NL { u8 instr[4] = {0xC3,0,0xB0,0}; instr[1] = $2; instr[3] = $8; emit(instr,4); }
	| SBCB expr '[' R_X1 ']' ',' '#' expr NL { u8 instr[5] = {0xC0,0,0,0xB0,0}; _SET16(instr,1,$2); instr[4] = $8; emit(instr,5); }
	| SBCB expr '[' R_X2 ']' ',' '#' expr NL { u8 instr[5] = {0xC1,0,0,0xB0,0}; _SET16(instr,1,$2); instr[4] = $8; emit(instr,5); }
	| SBR R_r0 NL { u8 instr[2] = {0x20,0x11};  emit(instr,2); }
	| SBR R_r1 NL { u8 instr[2] = {0x21,0x11};  emit(instr,2); }
	| SBR R_r2 NL { u8 instr[2] = {0x22,0x11};  emit(instr,2); }
	| SBR R_r3 NL { u8 instr[2] = {0x23,0x11};  emit(instr,2); }
	| SBR R_r4 NL { u8 instr[2] = {0x24,0x11};  emit(instr,2); }
	| SBR R_r5 NL { u8 instr[2] = {0x25,0x11};  emit(instr,2); }
	| SBR R_r6 NL { u8 instr[2] = {0x26,0x11};  emit(instr,2); }
	| SBR R_r7 NL { u8 instr[2] = {0x27,0x11};  emit(instr,2); }
	| SBR R_PSWH NL { u8 instr[2] = {0xA2,0x11};  emit(instr,2); }
	| SBR R_PSWL NL { u8 instr[2] = {0xA3,0x11};  emit(instr,2); }
	| SBR OFFSET expr NL { u8 instr[3] = {0xC4,0,0x11}; instr[1] = $3; emit(instr,3); }
	| SBR expr NL { u8 instr[3] = {0xC5,0,0x11}; instr[1] = $2; emit(instr,3); }
	| SBR '[' R_DP ']' NL { u8 instr[2] = {0xC2,0x11};  emit(instr,2); }
	| SBR expr '[' R_USP ']' NL { u8 instr[3] = {0xC3,0,0x11}; instr[1] = $2; emit(instr,3); }
	| SBR expr '[' R_X1 ']' NL { u8 instr[4] = {0xC0,0,0,0x11}; _SET16(instr,1,$2); emit(instr,4); }
	| SBR expr '[' R_X2 ']' NL { u8 instr[4] = {0xC1,0,0,0x11}; _SET16(instr,1,$2); emit(instr,4); }
	| SC NL { u8 instr[1] = {0x85};  emit(instr,1); }
	| SCAL expr NL { u8 instr[2] = {0x31,0}; instr[1] = _REL8(2,$2); emit(instr,2); }
	| SJ expr NL { u8 instr[2] = {0xCB,0}; instr[1] = _REL8(2,$2); emit(instr,2); }
	| SLL R_A NL { u8 instr[1] = {0x53};  emit(instr,1); }
	| SLL R_er0 NL { u8 instr[2] = {0x44,0xD7};  emit(instr,2); }
	| SLL R_er1 NL { u8 instr[2] = {0x45,0xD7};  emit(instr,2); }
	| SLL R_er2 NL { u8 instr[2] = {0x46,0xD7};  emit(instr,2); }
	| SLL R_er3 NL { u8 instr[2] = {0x47,0xD7};  emit(instr,2); }
	| SLL R_DP NL { u8 instr[2] = {0x92,0xD7};  emit(instr,2); }
	| SLL R_X1 NL { u8 instr[2] = {0x90,0xD7};  emit(instr,2); }
	| SLL R_X2 NL { u8 instr[2] = {0x91,0xD7};  emit(instr,2); }
	| SLL R_USP NL { u8 instr[2] = {0xA1,0xD7};  emit(instr,2); }
	| SLL R_SSP NL { u8 instr[2] = {0xA0,0xD7};  emit(instr,2); }
	| SLL R_LRB NL { u8 instr[2] = {0xA4,0xD7};  emit(instr,2); }
	| SLL OFFSET expr NL { u8 instr[3] = {0xB4,0,0xD7}; instr[1] = $3; emit(instr,3); }
	| SLL expr NL { u8 instr[3] = {0xB5,0,0xD7}; instr[1] = $2; emit(instr,3); }
	| SLL '[' R_DP ']' NL { u8 instr[2] = {0xB2,0xD7};  emit(instr,2); }
	| SLL expr '[' R_USP ']' NL { u8 instr[3] = {0xB3,0,0xD7}; instr[1] = $2; emit(instr,3); }
	| SLL expr '[' R_X1 ']' NL { u8 instr[4] = {0xB0,0,0,0xD7}; _SET16(instr,1,$2); emit(instr,4); }
	| SLL expr '[' R_X2 ']' NL { u8 instr[4] = {0xB1,0,0,0xD7}; _SET16(instr,1,$2); emit(instr,4); }
	| SLLB R_A NL { u8 instr[1] = {0x53};  emit(instr,1); }
	| SLLB R_r0 NL { u8 instr[2] = {0x20,0xD7};  emit(instr,2); }
	| SLLB R_r1 NL { u8 instr[2] = {0x21,0xD7};  emit(instr,2); }
	| SLLB R_r2 NL { u8 instr[2] = {0x22,0xD7};  emit(instr,2); }
	| SLLB R_r3 NL { u8 instr[2] = {0x23,0xD7};  emit(instr,2); }
	| SLLB R_r4 NL { u8 instr[2] = {0x24,0xD7};  emit(instr,2); }
	| SLLB R_r5 NL { u8 instr[2] = {0x25,0xD7};  emit(instr,2); }
	| SLLB R_r6 NL { u8 instr[2] = {0x26,0xD7};  emit(instr,2); }
	| SLLB R_r7 NL { u8 instr[2] = {0x27,0xD7};  emit(instr,2); }
	| SLLB R_PSWH NL { u8 instr[2] = {0xA2,0xD7};  emit(instr,2); }
	| SLLB R_PSWL NL { u8 instr[2] = {0xA3,0xD7};  emit(instr,2); }
	| SLLB OFFSET expr NL { u8 instr[3] = {0xC4,0,0xD7}; instr[1] = $3; emit(instr,3); }
	| SLLB expr NL { u8 instr[3] = {0xC5,0,0xD7}; instr[1] = $2; emit(instr,3); }
	| SLLB '[' R_DP ']' NL { u8 instr[2] = {0xC2,0xD7};  emit(instr,2); }
	| SLLB expr '[' R_USP ']' NL { u8 instr[3] = {0xC3,0,0xD7}; instr[1] = $2; emit(instr,3); }
	| SLLB expr '[' R_X1 ']' NL { u8 instr[4] = {0xC0,0,0,0xD7}; _SET16(instr,1,$2); emit(instr,4); }
	| SLLB expr '[' R_X2 ']' NL { u8 instr[4] = {0xC1,0,0,0xD7}; _SET16(instr,1,$2); emit(instr,4); }
	| SRA R_A NL { u8 instr[1] = {0x73};  emit(instr,1); }
	| SRA R_er0 NL { u8 instr[2] = {0x44,0xF7};  emit(instr,2); }
	| SRA R_er1 NL { u8 instr[2] = {0x45,0xF7};  emit(instr,2); }
	| SRA R_er2 NL { u8 instr[2] = {0x46,0xF7};  emit(instr,2); }
	| SRA R_er3 NL { u8 instr[2] = {0x47,0xF7};  emit(instr,2); }
	| SRA R_DP NL { u8 instr[2] = {0x92,0xF7};  emit(instr,2); }
	| SRA R_X1 NL { u8 instr[2] = {0x90,0xF7};  emit(instr,2); }
	| SRA R_X2 NL { u8 instr[2] = {0x91,0xF7};  emit(instr,2); }
	| SRA R_USP NL { u8 instr[2] = {0xA1,0xF7};  emit(instr,2); }
	| SRA R_SSP NL { u8 instr[2] = {0xA0,0xF7};  emit(instr,2); }
	| SRA R_LRB NL { u8 instr[2] = {0xA4,0xF7};  emit(instr,2); }
	| SRA OFFSET expr NL { u8 instr[3] = {0xB4,0,0xF7}; instr[1] = $3; emit(instr,3); }
	| SRA expr NL { u8 instr[3] = {0xB5,0,0xF7}; instr[1] = $2; emit(instr,3); }
	| SRA '[' R_DP ']' NL { u8 instr[2] = {0xB2,0xF7};  emit(instr,2); }
	| SRA expr '[' R_USP ']' NL { u8 instr[3] = {0xB3,0,0xF7}; instr[1] = $2; emit(instr,3); }
	| SRA expr '[' R_X1 ']' NL { u8 instr[4] = {0xB0,0,0,0xF7}; _SET16(instr,1,$2); emit(instr,4); }
	| SRA expr '[' R_X2 ']' NL { u8 instr[4] = {0xB1,0,0,0xF7}; _SET16(instr,1,$2); emit(instr,4); }
	| SRAB R_A NL { u8 instr[1] = {0x73};  emit(instr,1); }
	| SRAB R_r0 NL { u8 instr[2] = {0x20,0xF7};  emit(instr,2); }
	| SRAB R_r1 NL { u8 instr[2] = {0x21,0xF7};  emit(instr,2); }
	| SRAB R_r2 NL { u8 instr[2] = {0x22,0xF7};  emit(instr,2); }
	| SRAB R_r3 NL { u8 instr[2] = {0x23,0xF7};  emit(instr,2); }
	| SRAB R_r4 NL { u8 instr[2] = {0x24,0xF7};  emit(instr,2); }
	| SRAB R_r5 NL { u8 instr[2] = {0x25,0xF7};  emit(instr,2); }
	| SRAB R_r6 NL { u8 instr[2] = {0x26,0xF7};  emit(instr,2); }
	| SRAB R_r7 NL { u8 instr[2] = {0x27,0xF7};  emit(instr,2); }
	| SRAB R_PSWH NL { u8 instr[2] = {0xA2,0xF7};  emit(instr,2); }
	| SRAB R_PSWL NL { u8 instr[2] = {0xA3,0xF7};  emit(instr,2); }
	| SRAB OFFSET expr NL { u8 instr[3] = {0xC4,0,0xF7}; instr[1] = $3; emit(instr,3); }
	| SRAB expr NL { u8 instr[3] = {0xC5,0,0xF7}; instr[1] = $2; emit(instr,3); }
	| SRAB '[' R_DP ']' NL { u8 instr[2] = {0xC2,0xF7};  emit(instr,2); }
	| SRAB expr '[' R_USP ']' NL { u8 instr[3] = {0xC3,0,0xF7}; instr[1] = $2; emit(instr,3); }
	| SRAB expr '[' R_X1 ']' NL { u8 instr[4] = {0xC0,0,0,0xF7}; _SET16(instr,1,$2); emit(instr,4); }
	| SRAB expr '[' R_X2 ']' NL { u8 instr[4] = {0xC1,0,0,0xF7}; _SET16(instr,1,$2); emit(instr,4); }
	| SRL R_A NL { u8 instr[1] = {0x63};  emit(instr,1); }
	| SRL R_er0 NL { u8 instr[2] = {0x44,0xE7};  emit(instr,2); }
	| SRL R_er1 NL { u8 instr[2] = {0x45,0xE7};  emit(instr,2); }
	| SRL R_er2 NL { u8 instr[2] = {0x46,0xE7};  emit(instr,2); }
	| SRL R_er3 NL { u8 instr[2] = {0x47,0xE7};  emit(instr,2); }
	| SRL R_DP NL { u8 instr[2] = {0x92,0xE7};  emit(instr,2); }
	| SRL R_X1 NL { u8 instr[2] = {0x90,0xE7};  emit(instr,2); }
	| SRL R_X2 NL { u8 instr[2] = {0x91,0xE7};  emit(instr,2); }
	| SRL R_USP NL { u8 instr[2] = {0xA1,0xE7};  emit(instr,2); }
	| SRL R_SSP NL { u8 instr[2] = {0xA0,0xE7};  emit(instr,2); }
	| SRL R_LRB NL { u8 instr[2] = {0xA4,0xE7};  emit(instr,2); }
	| SRL OFFSET expr NL { u8 instr[3] = {0xB4,0,0xE7}; instr[1] = $3; emit(instr,3); }
	| SRL expr NL { u8 instr[3] = {0xB5,0,0xE7}; instr[1] = $2; emit(instr,3); }
	| SRL '[' R_DP ']' NL { u8 instr[2] = {0xB2,0xE7};  emit(instr,2); }
	| SRL expr '[' R_USP ']' NL { u8 instr[3] = {0xB3,0,0xE7}; instr[1] = $2; emit(instr,3); }
	| SRL expr '[' R_X1 ']' NL { u8 instr[4] = {0xB0,0,0,0xE7}; _SET16(instr,1,$2); emit(instr,4); }
	| SRL expr '[' R_X2 ']' NL { u8 instr[4] = {0xB1,0,0,0xE7}; _SET16(instr,1,$2); emit(instr,4); }
	| SRLB R_A NL { u8 instr[1] = {0x63};  emit(instr,1); }
	| SRLB R_r0 NL { u8 instr[2] = {0x20,0xE7};  emit(instr,2); }
	| SRLB R_r1 NL { u8 instr[2] = {0x21,0xE7};  emit(instr,2); }
	| SRLB R_r2 NL { u8 instr[2] = {0x22,0xE7};  emit(instr,2); }
	| SRLB R_r3 NL { u8 instr[2] = {0x23,0xE7};  emit(instr,2); }
	| SRLB R_r4 NL { u8 instr[2] = {0x24,0xE7};  emit(instr,2); }
	| SRLB R_r5 NL { u8 instr[2] = {0x25,0xE7};  emit(instr,2); }
	| SRLB R_r6 NL { u8 instr[2] = {0x26,0xE7};  emit(instr,2); }
	| SRLB R_r7 NL { u8 instr[2] = {0x27,0xE7};  emit(instr,2); }
	| SRLB R_PSWH NL { u8 instr[2] = {0xA2,0xE7};  emit(instr,2); }
	| SRLB R_PSWL NL { u8 instr[2] = {0xA3,0xE7};  emit(instr,2); }
	| SRLB OFFSET expr NL { u8 instr[3] = {0xC4,0,0xE7}; instr[1] = $3; emit(instr,3); }
	| SRLB expr NL { u8 instr[3] = {0xC5,0,0xE7}; instr[1] = $2; emit(instr,3); }
	| SRLB '[' R_DP ']' NL { u8 instr[2] = {0xC2,0xE7};  emit(instr,2); }
	| SRLB expr '[' R_USP ']' NL { u8 instr[3] = {0xC3,0,0xE7}; instr[1] = $2; emit(instr,3); }
	| SRLB expr '[' R_X1 ']' NL { u8 instr[4] = {0xC0,0,0,0xE7}; _SET16(instr,1,$2); emit(instr,4); }
	| SRLB expr '[' R_X2 ']' NL { u8 instr[4] = {0xC1,0,0,0xE7}; _SET16(instr,1,$2); emit(instr,4); }
	| ST R_A ',' R_er0 NL { u8 instr[1] = {0x88};  emit(instr,1); }
	| ST R_A ',' R_er1 NL { u8 instr[1] = {0x89};  emit(instr,1); }
	| ST R_A ',' R_er2 NL { u8 instr[1] = {0x8A};  emit(instr,1); }
	| ST R_A ',' R_er3 NL { u8 instr[1] = {0x8B};  emit(instr,1); }
	| ST R_A ',' OFFSET expr NL { u8 instr[2] = {0xD4,0}; instr[1] = $5; emit(instr,2); }
	| ST R_A ',' expr NL { u8 instr[2] = {0xD5,0}; instr[1] = $4; emit(instr,2); }
	| ST R_A ',' '[' R_DP ']' NL { u8 instr[1] = {0xD2};  emit(instr,1); }
	| ST R_A ',' expr '[' R_USP ']' NL { u8 instr[2] = {0xD3,0}; instr[1] = $4; emit(instr,2); }
	| ST R_A ',' expr '[' R_X1 ']' NL { u8 instr[3] = {0xD0,0,0}; _SET16(instr,1,$4); emit(instr,3); }
	| ST R_A ',' expr '[' R_X2 ']' NL { u8 instr[3] = {0xD1,0,0}; _SET16(instr,1,$4); emit(instr,3); }
	| STB R_A ',' R_r0 NL { u8 instr[1] = {0x88};  emit(instr,1); }
	| STB R_A ',' R_r1 NL { u8 instr[1] = {0x89};  emit(instr,1); }
	| STB R_A ',' R_r2 NL { u8 instr[1] = {0x8A};  emit(instr,1); }
	| STB R_A ',' R_r3 NL { u8 instr[1] = {0x8B};  emit(instr,1); }
	| STB R_A ',' R_r4 NL { u8 instr[1] = {0x8C};  emit(instr,1); }
	| STB R_A ',' R_r5 NL { u8 instr[1] = {0x8D};  emit(instr,1); }
	| STB R_A ',' R_r6 NL { u8 instr[1] = {0x8E};  emit(instr,1); }
	| STB R_A ',' R_r7 NL { u8 instr[1] = {0x8F};  emit(instr,1); }
	| STB R_A ',' OFFSET expr NL { u8 instr[2] = {0xD4,0}; instr[1] = $5; emit(instr,2); }
	| STB R_A ',' expr NL { u8 instr[2] = {0xD5,0}; instr[1] = $4; emit(instr,2); }
	| STB R_A ',' '[' R_DP ']' NL { u8 instr[1] = {0xD2};  emit(instr,1); }
	| STB R_A ',' expr '[' R_USP ']' NL { u8 instr[2] = {0xD3,0}; instr[1] = $4; emit(instr,2); }
	| STB R_A ',' expr '[' R_X1 ']' NL { u8 instr[3] = {0xD0,0,0}; _SET16(instr,1,$4); emit(instr,3); }
	| STB R_A ',' expr '[' R_X2 ']' NL { u8 instr[3] = {0xD1,0,0}; _SET16(instr,1,$4); emit(instr,3); }
	| SUB R_A ',' '#' expr NL { u8 instr[3] = {0xA6,0,0}; _SET16(instr,1,$5); emit(instr,3); }
	| SUB R_A ',' R_er0 NL { u8 instr[1] = {0x28};  emit(instr,1); }
	| SUB R_A ',' R_er1 NL { u8 instr[1] = {0x29};  emit(instr,1); }
	| SUB R_A ',' R_er2 NL { u8 instr[1] = {0x2A};  emit(instr,1); }
	| SUB R_A ',' R_er3 NL { u8 instr[1] = {0x2B};  emit(instr,1); }
	| SUB R_A ',' R_DP NL { u8 instr[2] = {0x92,0xA2};  emit(instr,2); }
	| SUB R_A ',' R_X1 NL { u8 instr[2] = {0x90,0xA2};  emit(instr,2); }
	| SUB R_A ',' R_X2 NL { u8 instr[2] = {0x91,0xA2};  emit(instr,2); }
	| SUB R_A ',' R_USP NL { u8 instr[2] = {0xA1,0xA2};  emit(instr,2); }
	| SUB R_A ',' R_SSP NL { u8 instr[2] = {0xA0,0xA2};  emit(instr,2); }
	| SUB R_A ',' R_LRB NL { u8 instr[2] = {0xA4,0xA2};  emit(instr,2); }
	| SUB R_A ',' OFFSET expr NL { u8 instr[2] = {0xA7,0}; instr[1] = $5; emit(instr,2); }
	| SUB R_A ',' expr NL { u8 instr[3] = {0xB5,0,0xA2}; instr[1] = $4; emit(instr,3); }
	| SUB R_A ',' '[' R_DP ']' NL { u8 instr[2] = {0xB2,0xA2};  emit(instr,2); }
	| SUB R_A ',' expr '[' R_USP ']' NL { u8 instr[3] = {0xB3,0,0xA2}; instr[1] = $4; emit(instr,3); }
	| SUB R_A ',' expr '[' R_X1 ']' NL { u8 instr[4] = {0xB0,0,0,0xA2}; _SET16(instr,1,$4); emit(instr,4); }
	| SUB R_A ',' expr '[' R_X2 ']' NL { u8 instr[4] = {0xB1,0,0,0xA2}; _SET16(instr,1,$4); emit(instr,4); }
	| SUB R_er0 ',' R_A NL { u8 instr[2] = {0x44,0xA1};  emit(instr,2); }
	| SUB R_er1 ',' R_A NL { u8 instr[2] = {0x45,0xA1};  emit(instr,2); }
	| SUB R_er2 ',' R_A NL { u8 instr[2] = {0x46,0xA1};  emit(instr,2); }
	| SUB R_er3 ',' R_A NL { u8 instr[2] = {0x47,0xA1};  emit(instr,2); }
	| SUB R_DP ',' R_A NL { u8 instr[2] = {0x92,0xA1};  emit(instr,2); }
	| SUB R_X1 ',' R_A NL { u8 instr[2] = {0x90,0xA1};  emit(instr,2); }
	| SUB R_X2 ',' R_A NL { u8 instr[2] = {0x91,0xA1};  emit(instr,2); }
	| SUB R_USP ',' R_A NL { u8 instr[2] = {0xA1,0xA1};  emit(instr,2); }
	| SUB R_SSP ',' R_A NL { u8 instr[2] = {0xA0,0xA1};  emit(instr,2); }
	| SUB R_LRB ',' R_A NL { u8 instr[2] = {0xA4,0xA1};  emit(instr,2); }
	| SUB OFFSET expr ',' R_A NL { u8 instr[3] = {0xB4,0,0xA1}; instr[1] = $3; emit(instr,3); }
	| SUB expr ',' R_A NL { u8 instr[3] = {0xB5,0,0xA1}; instr[1] = $2; emit(instr,3); }
	| SUB '[' R_DP ']' ',' R_A NL { u8 instr[2] = {0xB2,0xA1};  emit(instr,2); }
	| SUB expr '[' R_USP ']' ',' R_A NL { u8 instr[3] = {0xB3,0,0xA1}; instr[1] = $2; emit(instr,3); }
	| SUB expr '[' R_X1 ']' ',' R_A NL { u8 instr[4] = {0xB0,0,0,0xA1}; _SET16(instr,1,$2); emit(instr,4); }
	| SUB expr '[' R_X2 ']' ',' R_A NL { u8 instr[4] = {0xB1,0,0,0xA1}; _SET16(instr,1,$2); emit(instr,4); }
	| SUB R_er0 ',' OFFSET expr NL { u8 instr[3] = {0x44,0xA3,0}; instr[2] = $5; emit(instr,3); }
	| SUB R_er1 ',' OFFSET expr NL { u8 instr[3] = {0x45,0xA3,0}; instr[2] = $5; emit(instr,3); }
	| SUB R_er2 ',' OFFSET expr NL { u8 instr[3] = {0x46,0xA3,0}; instr[2] = $5; emit(instr,3); }
	| SUB R_er3 ',' OFFSET expr NL { u8 instr[3] = {0x47,0xA3,0}; instr[2] = $5; emit(instr,3); }
	| SUB R_DP ',' OFFSET expr NL { u8 instr[3] = {0x92,0xA3,0}; instr[2] = $5; emit(instr,3); }
	| SUB R_X1 ',' OFFSET expr NL { u8 instr[3] = {0x90,0xA3,0}; instr[2] = $5; emit(instr,3); }
	| SUB R_X2 ',' OFFSET expr NL { u8 instr[3] = {0x91,0xA3,0}; instr[2] = $5; emit(instr,3); }
	| SUB R_USP ',' OFFSET expr NL { u8 instr[3] = {0xA1,0xA3,0}; instr[2] = $5; emit(instr,3); }
	| SUB R_SSP ',' OFFSET expr NL { u8 instr[3] = {0xA0,0xA3,0}; instr[2] = $5; emit(instr,3); }
	| SUB R_LRB ',' OFFSET expr NL { u8 instr[3] = {0xA4,0xA3,0}; instr[2] = $5; emit(instr,3); }
	| SUB OFFSET expr ',' OFFSET expr NL { u8 instr[4] = {0xB4,0,0xA3,0}; instr[1] = $3; instr[3] = $6; emit(instr,4); }
	| SUB expr ',' OFFSET expr NL { u8 instr[4] = {0xB5,0,0xA3,0}; instr[1] = $2; instr[3] = $5; emit(instr,4); }
	| SUB '[' R_DP ']' ',' OFFSET expr NL { u8 instr[3] = {0xB2,0xA3,0}; instr[2] = $7; emit(instr,3); }
	| SUB expr '[' R_USP ']' ',' OFFSET expr NL { u8 instr[4] = {0xB3,0,0xA3,0}; instr[1] = $2; instr[3] = $8; emit(instr,4); }
	| SUB expr '[' R_X1 ']' ',' OFFSET expr NL { u8 instr[5] = {0xB0,0,0,0xA3,0}; _SET16(instr,1,$2); instr[4] = $8; emit(instr,5); }
	| SUB expr '[' R_X2 ']' ',' OFFSET expr NL { u8 instr[5] = {0xB1,0,0,0xA3,0}; _SET16(instr,1,$2); instr[4] = $8; emit(instr,5); }
	| SUB R_er0 ',' '#' expr NL { u8 instr[4] = {0x44,0xA0,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| SUB R_er1 ',' '#' expr NL { u8 instr[4] = {0x45,0xA0,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| SUB R_er2 ',' '#' expr NL { u8 instr[4] = {0x46,0xA0,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| SUB R_er3 ',' '#' expr NL { u8 instr[4] = {0x47,0xA0,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| SUB R_DP ',' '#' expr NL { u8 instr[4] = {0x92,0xA0,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| SUB R_X1 ',' '#' expr NL { u8 instr[4] = {0x90,0xA0,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| SUB R_X2 ',' '#' expr NL { u8 instr[4] = {0x91,0xA0,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| SUB R_USP ',' '#' expr NL { u8 instr[4] = {0xA1,0xA0,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| SUB R_SSP ',' '#' expr NL { u8 instr[4] = {0xA0,0xA0,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| SUB R_LRB ',' '#' expr NL { u8 instr[4] = {0xA4,0xA0,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| SUB OFFSET expr ',' '#' expr NL { u8 instr[5] = {0xB4,0,0xA0,0,0}; instr[1] = $3; _SET16(instr,3,$6); emit(instr,5); }
	| SUB expr ',' '#' expr NL { u8 instr[5] = {0xB5,0,0xA0,0,0}; instr[1] = $2; _SET16(instr,3,$5); emit(instr,5); }
	| SUB '[' R_DP ']' ',' '#' expr NL { u8 instr[4] = {0xB2,0xA0,0,0}; _SET16(instr,2,$7); emit(instr,4); }
	| SUB expr '[' R_USP ']' ',' '#' expr NL { u8 instr[5] = {0xB3,0,0xA0,0,0}; instr[1] = $2; _SET16(instr,3,$8); emit(instr,5); }
	| SUB expr '[' R_X1 ']' ',' '#' expr NL { u8 instr[6] = {0xB0,0,0,0xA0,0,0}; _SET16(instr,1,$2); _SET16(instr,4,$8); emit(instr,6); }
	| SUB expr '[' R_X2 ']' ',' '#' expr NL { u8 instr[6] = {0xB1,0,0,0xA0,0,0}; _SET16(instr,1,$2); _SET16(instr,4,$8); emit(instr,6); }
	| SUBB R_A ',' '#' expr NL { u8 instr[2] = {0xA6,0}; instr[1] = $5; emit(instr,2); }
	| SUBB R_A ',' R_r0 NL { u8 instr[1] = {0x28};  emit(instr,1); }
	| SUBB R_A ',' R_r1 NL { u8 instr[1] = {0x29};  emit(instr,1); }
	| SUBB R_A ',' R_r2 NL { u8 instr[1] = {0x2A};  emit(instr,1); }
	| SUBB R_A ',' R_r3 NL { u8 instr[1] = {0x2B};  emit(instr,1); }
	| SUBB R_A ',' R_r4 NL { u8 instr[1] = {0x2C};  emit(instr,1); }
	| SUBB R_A ',' R_r5 NL { u8 instr[1] = {0x2D};  emit(instr,1); }
	| SUBB R_A ',' R_r6 NL { u8 instr[1] = {0x2E};  emit(instr,1); }
	| SUBB R_A ',' R_r7 NL { u8 instr[1] = {0x2F};  emit(instr,1); }
	| SUBB R_A ',' R_PSWH NL { u8 instr[2] = {0xA2,0xA2};  emit(instr,2); }
	| SUBB R_A ',' R_PSWL NL { u8 instr[2] = {0xA3,0xA2};  emit(instr,2); }
	| SUBB R_A ',' OFFSET expr NL { u8 instr[2] = {0xA7,0}; instr[1] = $5; emit(instr,2); }
	| SUBB R_A ',' expr NL { u8 instr[3] = {0xC5,0,0xA2}; instr[1] = $4; emit(instr,3); }
	| SUBB R_A ',' '[' R_DP ']' NL { u8 instr[2] = {0xC2,0xA2};  emit(instr,2); }
	| SUBB R_A ',' expr '[' R_USP ']' NL { u8 instr[3] = {0xC3,0,0xA2}; instr[1] = $4; emit(instr,3); }
	| SUBB R_A ',' expr '[' R_X1 ']' NL { u8 instr[4] = {0xC0,0,0,0xA2}; _SET16(instr,1,$4); emit(instr,4); }
	| SUBB R_A ',' expr '[' R_X2 ']' NL { u8 instr[4] = {0xC1,0,0,0xA2}; _SET16(instr,1,$4); emit(instr,4); }
	| SUBB R_r0 ',' R_A NL { u8 instr[2] = {0x20,0xA1};  emit(instr,2); }
	| SUBB R_r1 ',' R_A NL { u8 instr[2] = {0x21,0xA1};  emit(instr,2); }
	| SUBB R_r2 ',' R_A NL { u8 instr[2] = {0x22,0xA1};  emit(instr,2); }
	| SUBB R_r3 ',' R_A NL { u8 instr[2] = {0x23,0xA1};  emit(instr,2); }
	| SUBB R_r4 ',' R_A NL { u8 instr[2] = {0x24,0xA1};  emit(instr,2); }
	| SUBB R_r5 ',' R_A NL { u8 instr[2] = {0x25,0xA1};  emit(instr,2); }
	| SUBB R_r6 ',' R_A NL { u8 instr[2] = {0x26,0xA1};  emit(instr,2); }
	| SUBB R_r7 ',' R_A NL { u8 instr[2] = {0x27,0xA1};  emit(instr,2); }
	| SUBB R_PSWH ',' R_A NL { u8 instr[2] = {0xA2,0xA1};  emit(instr,2); }
	| SUBB R_PSWL ',' R_A NL { u8 instr[2] = {0xA3,0xA1};  emit(instr,2); }
	| SUBB OFFSET expr ',' R_A NL { u8 instr[3] = {0xC4,0,0xA1}; instr[1] = $3; emit(instr,3); }
	| SUBB expr ',' R_A NL { u8 instr[3] = {0xC5,0,0xA1}; instr[1] = $2; emit(instr,3); }
	| SUBB '[' R_DP ']' ',' R_A NL { u8 instr[2] = {0xC2,0xA1};  emit(instr,2); }
	| SUBB expr '[' R_USP ']' ',' R_A NL { u8 instr[3] = {0xC3,0,0xA1}; instr[1] = $2; emit(instr,3); }
	| SUBB expr '[' R_X1 ']' ',' R_A NL { u8 instr[4] = {0xC0,0,0,0xA1}; _SET16(instr,1,$2); emit(instr,4); }
	| SUBB expr '[' R_X2 ']' ',' R_A NL { u8 instr[4] = {0xC1,0,0,0xA1}; _SET16(instr,1,$2); emit(instr,4); }
	| SUBB R_r0 ',' OFFSET expr NL { u8 instr[3] = {0x20,0xA3,0}; instr[2] = $5; emit(instr,3); }
	| SUBB R_r1 ',' OFFSET expr NL { u8 instr[3] = {0x21,0xA3,0}; instr[2] = $5; emit(instr,3); }
	| SUBB R_r2 ',' OFFSET expr NL { u8 instr[3] = {0x22,0xA3,0}; instr[2] = $5; emit(instr,3); }
	| SUBB R_r3 ',' OFFSET expr NL { u8 instr[3] = {0x23,0xA3,0}; instr[2] = $5; emit(instr,3); }
	| SUBB R_r4 ',' OFFSET expr NL { u8 instr[3] = {0x24,0xA3,0}; instr[2] = $5; emit(instr,3); }
	| SUBB R_r5 ',' OFFSET expr NL { u8 instr[3] = {0x25,0xA3,0}; instr[2] = $5; emit(instr,3); }
	| SUBB R_r6 ',' OFFSET expr NL { u8 instr[3] = {0x26,0xA3,0}; instr[2] = $5; emit(instr,3); }
	| SUBB R_r7 ',' OFFSET expr NL { u8 instr[3] = {0x27,0xA3,0}; instr[2] = $5; emit(instr,3); }
	| SUBB R_PSWH ',' OFFSET expr NL { u8 instr[3] = {0xA2,0xA3,0}; instr[2] = $5; emit(instr,3); }
	| SUBB R_PSWL ',' OFFSET expr NL { u8 instr[3] = {0xA3,0xA3,0}; instr[2] = $5; emit(instr,3); }
	| SUBB OFFSET expr ',' OFFSET expr NL { u8 instr[4] = {0xC4,0,0xA3,0}; instr[1] = $3; instr[3] = $6; emit(instr,4); }
	| SUBB expr ',' OFFSET expr NL { u8 instr[4] = {0xC5,0,0xA3,0}; instr[1] = $2; instr[3] = $5; emit(instr,4); }
	| SUBB '[' R_DP ']' ',' OFFSET expr NL { u8 instr[3] = {0xC2,0xA3,0}; instr[2] = $7; emit(instr,3); }
	| SUBB expr '[' R_USP ']' ',' OFFSET expr NL { u8 instr[4] = {0xC3,0,0xA3,0}; instr[1] = $2; instr[3] = $8; emit(instr,4); }
	| SUBB expr '[' R_X1 ']' ',' OFFSET expr NL { u8 instr[5] = {0xC0,0,0,0xA3,0}; _SET16(instr,1,$2); instr[4] = $8; emit(instr,5); }
	| SUBB expr '[' R_X2 ']' ',' OFFSET expr NL { u8 instr[5] = {0xC1,0,0,0xA3,0}; _SET16(instr,1,$2); instr[4] = $8; emit(instr,5); }
	| SUBB R_r0 ',' '#' expr NL { u8 instr[3] = {0x20,0xA0,0}; instr[2] = $5; emit(instr,3); }
	| SUBB R_r1 ',' '#' expr NL { u8 instr[3] = {0x21,0xA0,0}; instr[2] = $5; emit(instr,3); }
	| SUBB R_r2 ',' '#' expr NL { u8 instr[3] = {0x22,0xA0,0}; instr[2] = $5; emit(instr,3); }
	| SUBB R_r3 ',' '#' expr NL { u8 instr[3] = {0x23,0xA0,0}; instr[2] = $5; emit(instr,3); }
	| SUBB R_r4 ',' '#' expr NL { u8 instr[3] = {0x24,0xA0,0}; instr[2] = $5; emit(instr,3); }
	| SUBB R_r5 ',' '#' expr NL { u8 instr[3] = {0x25,0xA0,0}; instr[2] = $5; emit(instr,3); }
	| SUBB R_r6 ',' '#' expr NL { u8 instr[3] = {0x26,0xA0,0}; instr[2] = $5; emit(instr,3); }
	| SUBB R_r7 ',' '#' expr NL { u8 instr[3] = {0x27,0xA0,0}; instr[2] = $5; emit(instr,3); }
	| SUBB R_PSWH ',' '#' expr NL { u8 instr[3] = {0xA2,0xA0,0}; instr[2] = $5; emit(instr,3); }
	| SUBB R_PSWL ',' '#' expr NL { u8 instr[3] = {0xA3,0xA0,0}; instr[2] = $5; emit(instr,3); }
	| SUBB OFFSET expr ',' '#' expr NL { u8 instr[4] = {0xC4,0,0xA0,0}; instr[1] = $3; instr[3] = $6; emit(instr,4); }
	| SUBB expr ',' '#' expr NL { u8 instr[4] = {0xC5,0,0xA0,0}; instr[1] = $2; instr[3] = $5; emit(instr,4); }
	| SUBB '[' R_DP ']' ',' '#' expr NL { u8 instr[3] = {0xC2,0xA0,0}; instr[2] = $7; emit(instr,3); }
	| SUBB expr '[' R_USP ']' ',' '#' expr NL { u8 instr[4] = {0xC3,0,0xA0,0}; instr[1] = $2; instr[3] = $8; emit(instr,4); }
	| SUBB expr '[' R_X1 ']' ',' '#' expr NL { u8 instr[5] = {0xC0,0,0,0xA0,0}; _SET16(instr,1,$2); instr[4] = $8; emit(instr,5); }
	| SUBB expr '[' R_X2 ']' ',' '#' expr NL { u8 instr[5] = {0xC1,0,0,0xA0,0}; _SET16(instr,1,$2); instr[4] = $8; emit(instr,5); }
	| SWAP NL { u8 instr[1] = {0x83};  emit(instr,1); }
	| SWAPB NL { u8 instr[1] = {0x83};  emit(instr,1); }
	| TRB R_r0 NL { u8 instr[2] = {0x20,0x13};  emit(instr,2); }
	| TRB R_r1 NL { u8 instr[2] = {0x21,0x13};  emit(instr,2); }
	| TRB R_r2 NL { u8 instr[2] = {0x22,0x13};  emit(instr,2); }
	| TRB R_r3 NL { u8 instr[2] = {0x23,0x13};  emit(instr,2); }
	| TRB R_r4 NL { u8 instr[2] = {0x24,0x13};  emit(instr,2); }
	| TRB R_r5 NL { u8 instr[2] = {0x25,0x13};  emit(instr,2); }
	| TRB R_r6 NL { u8 instr[2] = {0x26,0x13};  emit(instr,2); }
	| TRB R_r7 NL { u8 instr[2] = {0x27,0x13};  emit(instr,2); }
	| TRB R_PSWH NL { u8 instr[2] = {0xA2,0x13};  emit(instr,2); }
	| TRB R_PSWL NL { u8 instr[2] = {0xA3,0x13};  emit(instr,2); }
	| TRB OFFSET expr NL { u8 instr[3] = {0xC4,0,0x13}; instr[1] = $3; emit(instr,3); }
	| TRB expr NL { u8 instr[3] = {0xC5,0,0x13}; instr[1] = $2; emit(instr,3); }
	| TRB '[' R_DP ']' NL { u8 instr[2] = {0xC2,0x13};  emit(instr,2); }
	| TRB expr '[' R_USP ']' NL { u8 instr[3] = {0xC3,0,0x13}; instr[1] = $2; emit(instr,3); }
	| TRB expr '[' R_X1 ']' NL { u8 instr[4] = {0xC0,0,0,0x13}; _SET16(instr,1,$2); emit(instr,4); }
	| TRB expr '[' R_X2 ']' NL { u8 instr[4] = {0xC1,0,0,0x13}; _SET16(instr,1,$2); emit(instr,4); }
	| XCHG R_A ',' R_er0 NL { u8 instr[2] = {0x44,0x10};  emit(instr,2); }
	| XCHG R_A ',' R_er1 NL { u8 instr[2] = {0x45,0x10};  emit(instr,2); }
	| XCHG R_A ',' R_er2 NL { u8 instr[2] = {0x46,0x10};  emit(instr,2); }
	| XCHG R_A ',' R_er3 NL { u8 instr[2] = {0x47,0x10};  emit(instr,2); }
	| XCHG R_A ',' R_DP NL { u8 instr[2] = {0x92,0x10};  emit(instr,2); }
	| XCHG R_A ',' R_X1 NL { u8 instr[2] = {0x90,0x10};  emit(instr,2); }
	| XCHG R_A ',' R_X2 NL { u8 instr[2] = {0x91,0x10};  emit(instr,2); }
	| XCHG R_A ',' R_USP NL { u8 instr[2] = {0xA1,0x10};  emit(instr,2); }
	| XCHG R_A ',' R_SSP NL { u8 instr[2] = {0xA0,0x10};  emit(instr,2); }
	| XCHG R_A ',' R_LRB NL { u8 instr[2] = {0xA4,0x10};  emit(instr,2); }
	| XCHG R_A ',' OFFSET expr NL { u8 instr[3] = {0xB4,0,0x10}; instr[1] = $5; emit(instr,3); }
	| XCHG R_A ',' expr NL { u8 instr[3] = {0xB5,0,0x10}; instr[1] = $4; emit(instr,3); }
	| XCHG R_A ',' '[' R_DP ']' NL { u8 instr[2] = {0xB2,0x10};  emit(instr,2); }
	| XCHG R_A ',' expr '[' R_USP ']' NL { u8 instr[3] = {0xB3,0,0x10}; instr[1] = $4; emit(instr,3); }
	| XCHG R_A ',' expr '[' R_X1 ']' NL { u8 instr[4] = {0xB0,0,0,0x10}; _SET16(instr,1,$4); emit(instr,4); }
	| XCHG R_A ',' expr '[' R_X2 ']' NL { u8 instr[4] = {0xB1,0,0,0x10}; _SET16(instr,1,$4); emit(instr,4); }
	| XCHGB R_A ',' R_r0 NL { u8 instr[2] = {0x20,0x10};  emit(instr,2); }
	| XCHGB R_A ',' R_r1 NL { u8 instr[2] = {0x21,0x10};  emit(instr,2); }
	| XCHGB R_A ',' R_r2 NL { u8 instr[2] = {0x22,0x10};  emit(instr,2); }
	| XCHGB R_A ',' R_r3 NL { u8 instr[2] = {0x23,0x10};  emit(instr,2); }
	| XCHGB R_A ',' R_r4 NL { u8 instr[2] = {0x24,0x10};  emit(instr,2); }
	| XCHGB R_A ',' R_r5 NL { u8 instr[2] = {0x25,0x10};  emit(instr,2); }
	| XCHGB R_A ',' R_r6 NL { u8 instr[2] = {0x26,0x10};  emit(instr,2); }
	| XCHGB R_A ',' R_r7 NL { u8 instr[2] = {0x27,0x10};  emit(instr,2); }
	| XCHGB R_A ',' R_PSWH NL { u8 instr[2] = {0xA2,0x10};  emit(instr,2); }
	| XCHGB R_A ',' R_PSWL NL { u8 instr[2] = {0xA3,0x10};  emit(instr,2); }
	| XCHGB R_A ',' OFFSET expr NL { u8 instr[3] = {0xC4,0,0x10}; instr[1] = $5; emit(instr,3); }
	| XCHGB R_A ',' expr NL { u8 instr[3] = {0xC5,0,0x10}; instr[1] = $4; emit(instr,3); }
	| XCHGB R_A ',' '[' R_DP ']' NL { u8 instr[2] = {0xC2,0x10};  emit(instr,2); }
	| XCHGB R_A ',' expr '[' R_USP ']' NL { u8 instr[3] = {0xC3,0,0x10}; instr[1] = $4; emit(instr,3); }
	| XCHGB R_A ',' expr '[' R_X1 ']' NL { u8 instr[4] = {0xC0,0,0,0x10}; _SET16(instr,1,$4); emit(instr,4); }
	| XCHGB R_A ',' expr '[' R_X2 ']' NL { u8 instr[4] = {0xC1,0,0,0x10}; _SET16(instr,1,$4); emit(instr,4); }
	| XNBL R_A ',' OFFSET expr NL { u8 instr[2] = {0x84,0}; instr[1] = $5; emit(instr,2); }
	| XOR R_A ',' '#' expr NL { u8 instr[3] = {0xF6,0,0}; _SET16(instr,1,$5); emit(instr,3); }
	| XOR R_A ',' R_DP NL { u8 instr[2] = {0x92,0xF2};  emit(instr,2); }
	| XOR R_A ',' R_X1 NL { u8 instr[2] = {0x90,0xF2};  emit(instr,2); }
	| XOR R_A ',' R_X2 NL { u8 instr[2] = {0x91,0xF2};  emit(instr,2); }
	| XOR R_A ',' R_USP NL { u8 instr[2] = {0xA1,0xF2};  emit(instr,2); }
	| XOR R_A ',' R_SSP NL { u8 instr[2] = {0xA0,0xF2};  emit(instr,2); }
	| XOR R_A ',' R_LRB NL { u8 instr[2] = {0xA4,0xF2};  emit(instr,2); }
	| XOR R_A ',' OFFSET expr NL { u8 instr[2] = {0xF7,0}; instr[1] = $5; emit(instr,2); }
	| XOR R_A ',' expr NL { u8 instr[3] = {0xB5,0,0xF2}; instr[1] = $4; emit(instr,3); }
	| XOR R_A ',' '[' R_DP ']' NL { u8 instr[2] = {0xB2,0xF2};  emit(instr,2); }
	| XOR R_A ',' expr '[' R_USP ']' NL { u8 instr[3] = {0xB3,0,0xF2}; instr[1] = $4; emit(instr,3); }
	| XOR R_A ',' expr '[' R_X1 ']' NL { u8 instr[4] = {0xB0,0,0,0xF2}; _SET16(instr,1,$4); emit(instr,4); }
	| XOR R_A ',' expr '[' R_X2 ']' NL { u8 instr[4] = {0xB1,0,0,0xF2}; _SET16(instr,1,$4); emit(instr,4); }
	| XOR R_er0 ',' R_A NL { u8 instr[2] = {0x44,0xF1};  emit(instr,2); }
	| XOR R_er1 ',' R_A NL { u8 instr[2] = {0x45,0xF1};  emit(instr,2); }
	| XOR R_er2 ',' R_A NL { u8 instr[2] = {0x46,0xF1};  emit(instr,2); }
	| XOR R_er3 ',' R_A NL { u8 instr[2] = {0x47,0xF1};  emit(instr,2); }
	| XOR R_DP ',' R_A NL { u8 instr[2] = {0x92,0xF1};  emit(instr,2); }
	| XOR R_X1 ',' R_A NL { u8 instr[2] = {0x90,0xF1};  emit(instr,2); }
	| XOR R_X2 ',' R_A NL { u8 instr[2] = {0x91,0xF1};  emit(instr,2); }
	| XOR R_USP ',' R_A NL { u8 instr[2] = {0xA1,0xF1};  emit(instr,2); }
	| XOR R_SSP ',' R_A NL { u8 instr[2] = {0xA0,0xF1};  emit(instr,2); }
	| XOR R_LRB ',' R_A NL { u8 instr[2] = {0xA4,0xF1};  emit(instr,2); }
	| XOR OFFSET expr ',' R_A NL { u8 instr[3] = {0xB4,0,0xF1}; instr[1] = $3; emit(instr,3); }
	| XOR expr ',' R_A NL { u8 instr[3] = {0xB5,0,0xF1}; instr[1] = $2; emit(instr,3); }
	| XOR '[' R_DP ']' ',' R_A NL { u8 instr[2] = {0xB2,0xF1};  emit(instr,2); }
	| XOR expr '[' R_USP ']' ',' R_A NL { u8 instr[3] = {0xB3,0,0xF1}; instr[1] = $2; emit(instr,3); }
	| XOR expr '[' R_X1 ']' ',' R_A NL { u8 instr[4] = {0xB0,0,0,0xF1}; _SET16(instr,1,$2); emit(instr,4); }
	| XOR expr '[' R_X2 ']' ',' R_A NL { u8 instr[4] = {0xB1,0,0,0xF1}; _SET16(instr,1,$2); emit(instr,4); }
	| XOR R_er0 ',' OFFSET expr NL { u8 instr[3] = {0x44,0xF3,0}; instr[2] = $5; emit(instr,3); }
	| XOR R_er1 ',' OFFSET expr NL { u8 instr[3] = {0x45,0xF3,0}; instr[2] = $5; emit(instr,3); }
	| XOR R_er2 ',' OFFSET expr NL { u8 instr[3] = {0x46,0xF3,0}; instr[2] = $5; emit(instr,3); }
	| XOR R_er3 ',' OFFSET expr NL { u8 instr[3] = {0x47,0xF3,0}; instr[2] = $5; emit(instr,3); }
	| XOR R_DP ',' OFFSET expr NL { u8 instr[3] = {0x92,0xF3,0}; instr[2] = $5; emit(instr,3); }
	| XOR R_X1 ',' OFFSET expr NL { u8 instr[3] = {0x90,0xF3,0}; instr[2] = $5; emit(instr,3); }
	| XOR R_X2 ',' OFFSET expr NL { u8 instr[3] = {0x91,0xF3,0}; instr[2] = $5; emit(instr,3); }
	| XOR R_USP ',' OFFSET expr NL { u8 instr[3] = {0xA1,0xF3,0}; instr[2] = $5; emit(instr,3); }
	| XOR R_SSP ',' OFFSET expr NL { u8 instr[3] = {0xA0,0xF3,0}; instr[2] = $5; emit(instr,3); }
	| XOR R_LRB ',' OFFSET expr NL { u8 instr[3] = {0xA4,0xF3,0}; instr[2] = $5; emit(instr,3); }
	| XOR OFFSET expr ',' OFFSET expr NL { u8 instr[4] = {0xB4,0,0xF3,0}; instr[1] = $3; instr[3] = $6; emit(instr,4); }
	| XOR expr ',' OFFSET expr NL { u8 instr[4] = {0xB5,0,0xF3,0}; instr[1] = $2; instr[3] = $5; emit(instr,4); }
	| XOR '[' R_DP ']' ',' OFFSET expr NL { u8 instr[3] = {0xB2,0xF3,0}; instr[2] = $7; emit(instr,3); }
	| XOR expr '[' R_USP ']' ',' OFFSET expr NL { u8 instr[4] = {0xB3,0,0xF3,0}; instr[1] = $2; instr[3] = $8; emit(instr,4); }
	| XOR expr '[' R_X1 ']' ',' OFFSET expr NL { u8 instr[5] = {0xB0,0,0,0xF3,0}; _SET16(instr,1,$2); instr[4] = $8; emit(instr,5); }
	| XOR expr '[' R_X2 ']' ',' OFFSET expr NL { u8 instr[5] = {0xB1,0,0,0xF3,0}; _SET16(instr,1,$2); instr[4] = $8; emit(instr,5); }
	| XOR R_er0 ',' '#' expr NL { u8 instr[4] = {0x44,0xF0,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| XOR R_er1 ',' '#' expr NL { u8 instr[4] = {0x45,0xF0,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| XOR R_er2 ',' '#' expr NL { u8 instr[4] = {0x46,0xF0,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| XOR R_er3 ',' '#' expr NL { u8 instr[4] = {0x47,0xF0,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| XOR R_DP ',' '#' expr NL { u8 instr[4] = {0x92,0xF0,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| XOR R_X1 ',' '#' expr NL { u8 instr[4] = {0x90,0xF0,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| XOR R_X2 ',' '#' expr NL { u8 instr[4] = {0x91,0xF0,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| XOR R_USP ',' '#' expr NL { u8 instr[4] = {0xA1,0xF0,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| XOR R_SSP ',' '#' expr NL { u8 instr[4] = {0xA0,0xF0,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| XOR R_LRB ',' '#' expr NL { u8 instr[4] = {0xA4,0xF0,0,0}; _SET16(instr,2,$5); emit(instr,4); }
	| XOR OFFSET expr ',' '#' expr NL { u8 instr[5] = {0xB4,0,0xF0,0,0}; instr[1] = $3; _SET16(instr,3,$6); emit(instr,5); }
	| XOR expr ',' '#' expr NL { u8 instr[5] = {0xB5,0,0xF0,0,0}; instr[1] = $2; _SET16(instr,3,$5); emit(instr,5); }
	| XOR '[' R_DP ']' ',' '#' expr NL { u8 instr[4] = {0xB2,0xF0,0,0}; _SET16(instr,2,$7); emit(instr,4); }
	| XOR expr '[' R_USP ']' ',' '#' expr NL { u8 instr[5] = {0xB3,0,0xF0,0,0}; instr[1] = $2; _SET16(instr,3,$8); emit(instr,5); }
	| XOR expr '[' R_X1 ']' ',' '#' expr NL { u8 instr[6] = {0xB0,0,0,0xF0,0,0}; _SET16(instr,1,$2); _SET16(instr,4,$8); emit(instr,6); }
	| XOR expr '[' R_X2 ']' ',' '#' expr NL { u8 instr[6] = {0xB1,0,0,0xF0,0,0}; _SET16(instr,1,$2); _SET16(instr,4,$8); emit(instr,6); }
	| XORB R_A ',' '#' expr NL { u8 instr[2] = {0xF6,0}; instr[1] = $5; emit(instr,2); }
	| XORB R_A ',' R_r0 NL { u8 instr[2] = {0x20,0xF2};  emit(instr,2); }
	| XORB R_A ',' R_r1 NL { u8 instr[2] = {0x21,0xF2};  emit(instr,2); }
	| XORB R_A ',' R_r2 NL { u8 instr[2] = {0x22,0xF2};  emit(instr,2); }
	| XORB R_A ',' R_r3 NL { u8 instr[2] = {0x23,0xF2};  emit(instr,2); }
	| XORB R_A ',' R_r4 NL { u8 instr[2] = {0x24,0xF2};  emit(instr,2); }
	| XORB R_A ',' R_r5 NL { u8 instr[2] = {0x25,0xF2};  emit(instr,2); }
	| XORB R_A ',' R_r6 NL { u8 instr[2] = {0x26,0xF2};  emit(instr,2); }
	| XORB R_A ',' R_r7 NL { u8 instr[2] = {0x27,0xF2};  emit(instr,2); }
	| XORB R_A ',' R_PSWH NL { u8 instr[2] = {0xA2,0xF2};  emit(instr,2); }
	| XORB R_A ',' R_PSWL NL { u8 instr[2] = {0xA3,0xF2};  emit(instr,2); }
	| XORB R_A ',' OFFSET expr NL { u8 instr[2] = {0xF7,0}; instr[1] = $5; emit(instr,2); }
	| XORB R_A ',' expr NL { u8 instr[3] = {0xC5,0,0xF2}; instr[1] = $4; emit(instr,3); }
	| XORB R_A ',' '[' R_DP ']' NL { u8 instr[2] = {0xC2,0xF2};  emit(instr,2); }
	| XORB R_A ',' expr '[' R_USP ']' NL { u8 instr[3] = {0xC3,0,0xF2}; instr[1] = $4; emit(instr,3); }
	| XORB R_A ',' expr '[' R_X1 ']' NL { u8 instr[4] = {0xC0,0,0,0xF2}; _SET16(instr,1,$4); emit(instr,4); }
	| XORB R_A ',' expr '[' R_X2 ']' NL { u8 instr[4] = {0xC1,0,0,0xF2}; _SET16(instr,1,$4); emit(instr,4); }
	| XORB R_r0 ',' R_A NL { u8 instr[2] = {0x20,0xF1};  emit(instr,2); }
	| XORB R_r1 ',' R_A NL { u8 instr[2] = {0x21,0xF1};  emit(instr,2); }
	| XORB R_r2 ',' R_A NL { u8 instr[2] = {0x22,0xF1};  emit(instr,2); }
	| XORB R_r3 ',' R_A NL { u8 instr[2] = {0x23,0xF1};  emit(instr,2); }
	| XORB R_r4 ',' R_A NL { u8 instr[2] = {0x24,0xF1};  emit(instr,2); }
	| XORB R_r5 ',' R_A NL { u8 instr[2] = {0x25,0xF1};  emit(instr,2); }
	| XORB R_r6 ',' R_A NL { u8 instr[2] = {0x26,0xF1};  emit(instr,2); }
	| XORB R_r7 ',' R_A NL { u8 instr[2] = {0x27,0xF1};  emit(instr,2); }
	| XORB R_PSWH ',' R_A NL { u8 instr[2] = {0xA2,0xF1};  emit(instr,2); }
	| XORB R_PSWL ',' R_A NL { u8 instr[2] = {0xA3,0xF1};  emit(instr,2); }
	| XORB OFFSET expr ',' R_A NL { u8 instr[3] = {0xC4,0,0xF1}; instr[1] = $3; emit(instr,3); }
	| XORB expr ',' R_A NL { u8 instr[3] = {0xC5,0,0xF1}; instr[1] = $2; emit(instr,3); }
	| XORB '[' R_DP ']' ',' R_A NL { u8 instr[2] = {0xC2,0xF1};  emit(instr,2); }
	| XORB expr '[' R_USP ']' ',' R_A NL { u8 instr[3] = {0xC3,0,0xF1}; instr[1] = $2; emit(instr,3); }
	| XORB expr '[' R_X1 ']' ',' R_A NL { u8 instr[4] = {0xC0,0,0,0xF1}; _SET16(instr,1,$2); emit(instr,4); }
	| XORB expr '[' R_X2 ']' ',' R_A NL { u8 instr[4] = {0xC1,0,0,0xF1}; _SET16(instr,1,$2); emit(instr,4); }
	| XORB R_r0 ',' OFFSET expr NL { u8 instr[3] = {0x20,0xF3,0}; instr[2] = $5; emit(instr,3); }
	| XORB R_r1 ',' OFFSET expr NL { u8 instr[3] = {0x21,0xF3,0}; instr[2] = $5; emit(instr,3); }
	| XORB R_r2 ',' OFFSET expr NL { u8 instr[3] = {0x22,0xF3,0}; instr[2] = $5; emit(instr,3); }
	| XORB R_r3 ',' OFFSET expr NL { u8 instr[3] = {0x23,0xF3,0}; instr[2] = $5; emit(instr,3); }
	| XORB R_r4 ',' OFFSET expr NL { u8 instr[3] = {0x24,0xF3,0}; instr[2] = $5; emit(instr,3); }
	| XORB R_r5 ',' OFFSET expr NL { u8 instr[3] = {0x25,0xF3,0}; instr[2] = $5; emit(instr,3); }
	| XORB R_r6 ',' OFFSET expr NL { u8 instr[3] = {0x26,0xF3,0}; instr[2] = $5; emit(instr,3); }
	| XORB R_r7 ',' OFFSET expr NL { u8 instr[3] = {0x27,0xF3,0}; instr[2] = $5; emit(instr,3); }
	| XORB R_PSWH ',' OFFSET expr NL { u8 instr[3] = {0xA2,0xF3,0}; instr[2] = $5; emit(instr,3); }
	| XORB R_PSWL ',' OFFSET expr NL { u8 instr[3] = {0xA3,0xF3,0}; instr[2] = $5; emit(instr,3); }
	| XORB OFFSET expr ',' OFFSET expr NL { u8 instr[4] = {0xC4,0,0xF3,0}; instr[1] = $3; instr[3] = $6; emit(instr,4); }
	| XORB expr ',' OFFSET expr NL { u8 instr[4] = {0xC5,0,0xF3,0}; instr[1] = $2; instr[3] = $5; emit(instr,4); }
	| XORB '[' R_DP ']' ',' OFFSET expr NL { u8 instr[3] = {0xC2,0xF3,0}; instr[2] = $7; emit(instr,3); }
	| XORB expr '[' R_USP ']' ',' OFFSET expr NL { u8 instr[4] = {0xC3,0,0xF3,0}; instr[1] = $2; instr[3] = $8; emit(instr,4); }
	| XORB expr '[' R_X1 ']' ',' OFFSET expr NL { u8 instr[5] = {0xC0,0,0,0xF3,0}; _SET16(instr,1,$2); instr[4] = $8; emit(instr,5); }
	| XORB expr '[' R_X2 ']' ',' OFFSET expr NL { u8 instr[5] = {0xC1,0,0,0xF3,0}; _SET16(instr,1,$2); instr[4] = $8; emit(instr,5); }
	| XORB R_r0 ',' '#' expr NL { u8 instr[3] = {0x20,0xF0,0}; instr[2] = $5; emit(instr,3); }
	| XORB R_r1 ',' '#' expr NL { u8 instr[3] = {0x21,0xF0,0}; instr[2] = $5; emit(instr,3); }
	| XORB R_r2 ',' '#' expr NL { u8 instr[3] = {0x22,0xF0,0}; instr[2] = $5; emit(instr,3); }
	| XORB R_r3 ',' '#' expr NL { u8 instr[3] = {0x23,0xF0,0}; instr[2] = $5; emit(instr,3); }
	| XORB R_r4 ',' '#' expr NL { u8 instr[3] = {0x24,0xF0,0}; instr[2] = $5; emit(instr,3); }
	| XORB R_r5 ',' '#' expr NL { u8 instr[3] = {0x25,0xF0,0}; instr[2] = $5; emit(instr,3); }
	| XORB R_r6 ',' '#' expr NL { u8 instr[3] = {0x26,0xF0,0}; instr[2] = $5; emit(instr,3); }
	| XORB R_r7 ',' '#' expr NL { u8 instr[3] = {0x27,0xF0,0}; instr[2] = $5; emit(instr,3); }
	| XORB R_PSWH ',' '#' expr NL { u8 instr[3] = {0xA2,0xF0,0}; instr[2] = $5; emit(instr,3); }
	| XORB R_PSWL ',' '#' expr NL { u8 instr[3] = {0xA3,0xF0,0}; instr[2] = $5; emit(instr,3); }
	| XORB OFFSET expr ',' '#' expr NL { u8 instr[4] = {0xC4,0,0xF0,0}; instr[1] = $3; instr[3] = $6; emit(instr,4); }
	| XORB expr ',' '#' expr NL { u8 instr[4] = {0xC5,0,0xF0,0}; instr[1] = $2; instr[3] = $5; emit(instr,4); }
	| XORB '[' R_DP ']' ',' '#' expr NL { u8 instr[3] = {0xC2,0xF0,0}; instr[2] = $7; emit(instr,3); }
	| XORB expr '[' R_USP ']' ',' '#' expr NL { u8 instr[4] = {0xC3,0,0xF0,0}; instr[1] = $2; instr[3] = $8; emit(instr,4); }
	| XORB expr '[' R_X1 ']' ',' '#' expr NL { u8 instr[5] = {0xC0,0,0,0xF0,0}; _SET16(instr,1,$2); instr[4] = $8; emit(instr,5); }
	| XORB expr '[' R_X2 ']' ',' '#' expr NL { u8 instr[5] = {0xC1,0,0,0xF0,0}; _SET16(instr,1,$2); instr[4] = $8; emit(instr,5); }
	;
