#include "stm32f10x.h"
#include <stdio.h>
#include <stdlib.h>
#include "uart.h"
#include "delay.h"



int main(void)
{
    USART1_Init(); // ³õÊ¼»¯´®¿Ú
    while (1)
    {
        printf("abcder \r\n");
        delay_ms(2000);
    }
}