                      // I/O Switch Interface //
#include <lpc214x.h> 

int main()
{
	IO0DIR |= (1<<0)  /* Make P0.0 bit as output bit, P0.1 bit as an input pin  */
	 
	while(1)
	{  
		if(IO0PIN & (1<<1))  /* If switch is ON , pin is HIGH */
			{
			IO0SET=0x00000001;}    /* Turn on LED */
		else       /* If switch is OFF , pin is LOW */
			IO0CLR=0x00000001;    /* Turn off LED */
	}
}	