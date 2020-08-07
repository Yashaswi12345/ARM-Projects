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
	IO0DIR=0x000000FF; //Made P0.0-P0.7 for output//
	while(1)
	{
		IO0PIN=IO0PIN | 0x00000001; // Set P0.0 high//
		delay_ms(300);
		IO0PIN=IO0PIN & 0xFFFFFF00; // Set P0.0 low//
		delay_ms(300);
		IO0PIN=IO0PIN | 0x00000002; // Set P0.1 high//
		delay_ms(300);
		IO0PIN=IO0PIN & 0xFFFFFF00; // Set P0.1 low//
		delay_ms(300);
		IO0PIN=IO0PIN | 0x00000004; // Set P0.2 high//
		delay_ms(300);
		IO0PIN=IO0PIN & 0xFFFFFF00;  // Set P0.2 low//
	}
}