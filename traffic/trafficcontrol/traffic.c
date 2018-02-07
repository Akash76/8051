#include<regx51.h>
#define tl P2
void delay();
void main()
{
	while(1)
	{
		tl=0x40;
		delay();
		tl=0x08;
		delay();
		tl=0x01;
		delay();
	}
}

void delay()
{
	int i,j;
	for(i=0;i<1000;i++)
	for(j=0;j<100;j++);
}
	
