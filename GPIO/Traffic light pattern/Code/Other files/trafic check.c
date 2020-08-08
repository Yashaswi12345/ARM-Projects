#include<lpc214x.h>
#include<stdint.h>

void delay_ms(uint16_t j) //Delay Function//
{
	uint16_t x,i;
	for(i=0;i<j;++i)
	{
		for(x=0;x<6000;x++);
	}
	
}

int main(void)
{
	IO0DIR=0x0000000F; //Made P0.0-P0.7 for output//
	while(1)
	{
		IO0SET|=(1<<0); // Set P0.0 high//
		delay_ms(300);
		IO0CLR|=(1<<0); // Set P0.0 low//
		delay_ms(300);
		IO0SET|=(1<<1); // Set P0.1 high//
		delay_ms(300);
		IO0CLR|=(1<<1); // Set P0.1 low//
		delay_ms(300);
		IO0SET|=(1<<2); // Set P0.2 high//
		delay_ms(300);
		IO0CLR|=(1<<2);  // Set P0.2 low//
	}
}
