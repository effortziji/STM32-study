#include "stm32f10x.h"                  // Device header
#include "Delay.h"                  // Device header
 
int main(void)
{
	int delay=600;
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB,ENABLE);
	GPIO_InitTypeDef GPIO_InitStructure;
	GPIO_InitStructure.GPIO_Mode=GPIO_Mode_Out_PP;
	GPIO_InitStructure.GPIO_Pin=GPIO_Pin_12;
	GPIO_InitStructure.GPIO_Speed=GPIO_Speed_50MHz;
	GPIO_Init(GPIOB,&GPIO_InitStructure);
  while(1)
  {
		GPIO_ResetBits(GPIOB,GPIO_Pin_12);
		Delay_ms(delay);
		GPIO_SetBits(GPIOB,GPIO_Pin_12);
		Delay_ms(delay);
	}		
	
	
}
