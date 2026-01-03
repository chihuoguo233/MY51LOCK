void Delay(unsigned char xms)	//@12.000MHz£¬ÑÓÊ±º¯Êý
{
	unsigned char data i, j;

	while(xms--)
	{
		i = 2;
		j = 239;
		do
		{
			while (--j);
		} while (--i);
	}

}

