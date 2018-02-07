#include<regx51.h>
#define b P1
#define m P2
void main()
{
	if(b==0xFE){m=0xD7;}
	else if(b==0xFD){m=0xEB;}
	else if(b==0xFB){m=0xC5;}
	else if(b==0xF7){m=0xD2;}
	else{m=0xC0;}
}