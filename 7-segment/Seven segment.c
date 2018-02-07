#include<regx51.h>
#define led P2
void delay();
void main()
{
	while(1)
	{
		led=0x3F;
		delay();
		led=0x06;
		delay();
		led=0X5B;
		delay();
		led=0x4F;
		delay();
		led=0x66;
		delay();
		led=0x6D;
		delay();
		led=0x7D;
		delay();
		led=0x07;
		delay();
		led=0x7F;
		delay();
		led=0x6F;
		delay();
		
	}
}

void delay()
{
	int i,j;
	for(i=0;i<1000;i++)
	for(j=0;j<100;j++);
}