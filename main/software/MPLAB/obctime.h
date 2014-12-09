#ifndef _OBCTIME_H_
#define _OBCTIME_H_


#define TINYPERIOD (100)//CYCLEPERIODと合わせて10secになるように

#define ZEROPHASE		(22)//220秒
#define FIRSTPHASE		(100)//8時間、debug用、仮
#define SECONDPHASE		(38880)//4日

uint16_t obctime1;
uint16_t obctime2;
uint16_t obctime3;

uint8_t tinytime1;
uint8_t tinytime2;
uint8_t tinytime3;


void getobctime();
void saveobctime();
void advanceobctime();

#endif