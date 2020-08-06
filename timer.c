#include <lpc214x.h>

void delay(void)
{ 
	T0MR0=100000;
  T0MCR=0x00000004;
  T0TCR=1;
  while(T0TC!=T0MR0);
  T0TC=0;
  
 }
  
int main(){
IO0DIR=0x00000001;
while(1)
{ 
	IO0SET=0x00000001;
  delay();
  IO0CLR=0x00000001;
  delay();
}
}