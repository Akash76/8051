#include<regx51.h>
#define adc P2
void delay();
void main()
{
while(1)
{
adc=0XFF;
delay();
adc=0X0F;
delay();
adc=0XF0;
delay();
adc=0X55;
delay();
adc=0XAA;
delay();
}
}
void delay()
{
int i,j;
for(i=0;i<l000;i++)
for(j=0;j<1000;j++);
}
