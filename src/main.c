#include <regx51.h>
#include "LCD1602.H"
#include "delay.h"
#include "matrixkey.h"
unsigned char KeyNum;
unsigned int Password;
unsigned int right_Password=2345;
unsigned int count;


void main()
{
	LCD_Init();//LCD1602初始化
	LCD_ShowString(1,1,"password:");
	while(1)
	{
		
		KeyNum=MatrixKey();
		if(KeyNum<=10&&KeyNum>0)  //密码区输入
			{
			   	if(count<4)
				{
					Password*=10;
					Password+=KeyNum%10;
	//		 		if (KeyNum==10){KeyNum;}	 //按下S10按键，输入0，暂时似乎没用
					LCD_ShowNum(2,1,Password,4);
					count++;
				}
			}
		if(KeyNum==11)
		{
			if(Password==right_Password)	  //确认密码
			{
				LCD_ShowString(1,14,"OK ");
				Password=0;
				LCD_ShowNum(2,1,Password,4);
				count=0;
			}
			else 
			{
				LCD_ShowString(1,14,"ERR");
				Password=0;
				LCD_ShowNum(2,1,Password,4);
				count=0;
			}
		}

		if(KeyNum==12)		   //取消输入
		{
			Password=0;
			LCD_ShowNum(2,1,Password,4);
			LCD_ShowString(1,14,"   ");
			count=0;
		}

	}
}


