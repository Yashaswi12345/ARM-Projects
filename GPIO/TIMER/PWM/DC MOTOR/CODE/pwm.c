#include<LPC214x.h>

void pwm(void)
{
	PINSEL0=0x0000800A;
	PWMPCR=0xE00;
	PWMMR0=200000;
	PWMTCR=0x09;
	PWMMCR=0x02;
}


void main()
{
	pwm();
	
  while(1)
	{
		PWMMR1=100000 ;
		PWMMR2=195000;
		PWMMR3=160000;
		PWMLER=0xE;
	}
	
	
}