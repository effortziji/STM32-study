#include "stm32f10x.h"                  // Device header
#include "Delay.h"                  // Device header
 
int main(void)
{
	int delay=600;
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE);
	GPIO_InitTypeDef GPIO_InitStructure;
	GPIO_InitStructure.GPIO_Mode=GPIO_Mode_Out_PP;
	GPIO_InitStructure.GPIO_Pin=GPIO_Pin_All;
	GPIO_InitStructure.GPIO_Speed=GPIO_Speed_50MHz;
	GPIO_Init(GPIOA,&GPIO_InitStructure);
  while(1)
  {
		// GPIO_Write(GPIOA,~0x0001);
		// Delay_ms(delay);
		// GPIO_Write(GPIOA,~0x0002);
		// Delay_ms(delay);
		// GPIO_Write(GPIOA,~0x0004);
		// Delay_ms(delay);
		// GPIO_Write(GPIOA,~0x0008);
		// Delay_ms(delay);
		// GPIO_Write(GPIOA,~0x0010);
		// Delay_ms(delay);
		// GPIO_Write(GPIOA,~0x0020);
		// Delay_ms(delay);
		// GPIO_Write(GPIOA,~0x0040);
		// Delay_ms(delay);
		// GPIO_Write(GPIOA,~0x0080);
		// Delay_ms(delay);
		// GPIO_Write(GPIOA,~0x0055);
		// Delay_ms(delay);
		// GPIO_Write(GPIOA,0x0055);
		// Delay_ms(delay);
		
	}		
	
	
}
