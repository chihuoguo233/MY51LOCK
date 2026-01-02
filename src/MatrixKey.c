#include <REGX51.H>
#include <DELAY.H>
#include <LCD1602.H>
#include <INTRINS.H>
//unsigned char keynumber = 0;  // 静态变量，只初始化一次！



unsigned char MatrixKey()
{
	P1=0XF7;
	if(P1_7==0){Delay(20);while(P1_7==0);Delay(20);return 1;}
	if(P1_6==0){Delay(20);while(P1_6==0);Delay(20);return 5;}
	if(P1_5==0){Delay(20);while(P1_5==0);Delay(20);return 9;}
	if(P1_4==0){Delay(20);while(P1_4==0);Delay(20);return 13;}

	P1=0XFB;
	if(P1_7==0){Delay(20);while(P1_7==0);Delay(20);return 2;}
	if(P1_6==0){Delay(20);while(P1_6==0);Delay(20);return 6;}
	if(P1_5==0){Delay(20);while(P1_5==0);Delay(20);return 10;}
	if(P1_4==0){Delay(20);while(P1_4==0);Delay(20);return 14;}

	P1=0XFD;
	if(P1_7==0){Delay(20);while(P1_7==0);Delay(20);return 3;}
	if(P1_6==0){Delay(20);while(P1_6==0);Delay(20);return 7;}
	if(P1_5==0){Delay(20);while(P1_5==0);Delay(20);return 11;}
	if(P1_4==0){Delay(20);while(P1_4==0);Delay(20);return 15;}  

	P1=0XFE;
	if(P1_7==0){Delay(20);while(P1_7==0);Delay(20);return 4;}
	if(P1_6==0){Delay(20);while(P1_6==0);Delay(20);return 8;}
	if(P1_5==0){Delay(20);while(P1_5==0);Delay(20);return 12;}
	if(P1_4==0){Delay(20);while(P1_4==0);Delay(20);return 16;}

	return 0;
}