#include<regx51.h>
#define led P2
 void delay();
 void main()
 {
 while(1)
 {
 led=0XFF;
 delay();
 led=0X0F;
 delay();
 led=0XF0;
 delay();
 led=0X55;
 delay();
 led=0XAA;
 delay();
 }
 }
 void delay()
 {
 int i,j;
 for(i=0;i<1000;i++)
 for(j=0;j<1000;j++);
 }