#include<regx51.h>
void delay();
sbit abc=P2^5;
sbit def=P3^4;
void main()
{
	while(1)
	{
abc=0;
def=0;
	delay();
	abc=1;
	def=1;
	delay();
	}
}
void delay()
{
	int i,j;
	for(i=0;i<1000;i++)
	for(j=0;j<1000;j++);
}