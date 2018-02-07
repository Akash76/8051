#include<regx51.h>
#define display P2
sbit red=P1^0;
sbit green=P1^2;
sbit yellow=P1^4;
void delay();
void main()
{
	while(1)
	{
	display=0XBF;
		delay();
	red=1;
	green=0;
	yellow=0;
	delay();
		display=0X86;
		delay();
		red=1;
	green=0;
	yellow=0;
	delay();
		display=0XDB;
		delay();
		red=1;
	green=0;
	yellow=0;
	delay();
		display=0XCF;
		delay();
		red=1;
	green=0;
	yellow=0;
	delay();
		
	
	display=0XE6;
	//display<=0X87;display++)
	delay();
	red=0;
		green=1;
		yellow=0;
		delay();
		display=0XED;
		delay();
		red=0;
		green=1;
		yellow=0;
		delay();
		display=0XFD;
		delay();
		red=0;
		green=1;
		yellow=0;
		delay();
		display=0X87;
		delay();
		red=0;
		green=1;
		yellow=0;
		delay();
	
	display=0XFF;//display<=0XEF;display++)
	delay();
		red=0;
		green=0;
		yellow=1;
		delay();
	display=0XEF;
	delay();
		red=0;
		green=0;
		yellow=1;
		delay();
	
}
}
void delay()
{
	int i,j;
	for(i=0;i<1000;i++)
	for(j=0;j<100;j++);
}
	
	
	
	
	
	
	
		