//blink led on P1

#include<reg52.h>

void ms_delay(unsigned int time);

void main ()
{
	while (1)
	{
		P1=0x0ff; //LEDs ON
		ms_delay(1000); //1s delay
		P1=0x00; //LEDs OFF
		ms_delay(1000);//1s delay
	}
}

void ms_delay(unsigned int time)
{
	unsigned int i,j;
	for(i=0;i<time;i++)
	{
		for(j=0;j<113;j++);
	}
}