#include "stm32f10x.h"                  // Device header
#include "Delay.h"                  // Device header
 
int main(void)
{
	int delay=50;
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE);
	GPIO_InitTypeDef GPIO_InitStructure;
	GPIO_InitStructure.GPIO_Mode=GPIO_Mode_Out_PP;
	GPIO_InitStructure.GPIO_Pin=GPIO_Pin_0;
	GPIO_InitStructure.GPIO_Speed=GPIO_Speed_50MHz;
	GPIO_Init(GPIOA,&GPIO_InitStructure);
  while(1)
  {
		//GPIO_SetBits(GPIOA,GPIO_Pin_0);//给PA0口高电平，LED反接同样可亮
		//GPIO_ResetBits(GPIOA,GPIO_Pin_0);//给PA0口低电平
		GPIO_WriteBit(GPIOA,GPIO_Pin_0,Bit_SET);
		Delay_ms(delay);
		GPIO_WriteBit(GPIOA,GPIO_Pin_0,Bit_RESET);
		Delay_ms(delay);

	}		
	
	
}
