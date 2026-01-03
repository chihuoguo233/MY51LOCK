/*
用于判断输入的密码正确与否
*/

#include "matrixkey.h"
#include "LCD1602.H"


unsigned int Password;		 //记录输入的密码
unsigned int right_Password=2345;	 //设定的密码
unsigned int count;					//记录按了几次按键，不能超过四次，超了也没用
unsigned char KeyNum;		 //接受MatrixKey()函数的返回值，也就是按键值


void password_check(void)
{
	KeyNum=MatrixKey();
		if(KeyNum<=10&&KeyNum>0)  //密码区输入，按下按键S1-S10才有用
			{
			   	if(count<4)
				{
					Password*=10;
					Password+=KeyNum%10;
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
