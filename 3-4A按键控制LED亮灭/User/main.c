#include "stm32f10x.h"                  // Device header
#include "Delay.h"                  // Device header
#include "LED.h" 
#include "key.h" 

uint8_t keynum;
int main(void)
{
	LED_Init();
	key_Init();
  int delay=500;
	while(1)
  {
		
		 keynum = key_GetNum();
		
		if(keynum == 1)
		{
		 LED1_Turn();
		
		}
		if(keynum == 2)
		{
			LED2_Turn();
		}
	}		
	
	
}
