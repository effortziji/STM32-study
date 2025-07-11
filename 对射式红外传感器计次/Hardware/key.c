#include "stm32f10x.h"                  // Device header
#include "Delay.h"
void key_Init(void)
{
 RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB,ENABLE);
	
	GPIO_InitTypeDef GPIO_InitStructure;
	GPIO_InitStructure.GPIO_Mode=GPIO_Mode_IPU;
	GPIO_InitStructure.GPIO_Pin=GPIO_Pin_0|GPIO_Pin_11;
	GPIO_InitStructure.GPIO_Speed=GPIO_Speed_50MHz;
	GPIO_Init(GPIOB,&GPIO_InitStructure);
	GPIO_SetBits(GPIOB,GPIO_Pin_0);
	GPIO_SetBits(GPIOB,GPIO_Pin_11);
	
}
uint8_t key_GetNum(void)
 {
   uint8_t key_GetNum=0;
	 if(GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_0)==0)
	 {
	  Delay_ms(20);
		while(GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_0)==0);
		Delay_ms(20);
		key_GetNum=1;
	 }
	 
	 if(GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_11)==0)
	 {
	  Delay_ms(20);
		while(GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_11)==0);
		Delay_ms(20);
		key_GetNum=2;
	 }
	 
 	 return key_GetNum; 
 }
 
 
 