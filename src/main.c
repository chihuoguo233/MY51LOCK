#include <regx51.h>
#include "LCD1602.H"
#include "password.h"

void main()
{
	LCD_Init();//LCD1602初始化
	LCD_ShowString(1,1,"password:");   //显示password的字符串
	while(1)
	{
		password_check();		
	}
}


