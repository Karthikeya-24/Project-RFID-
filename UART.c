#include <stdio.h>
#include "uart.h"


void UART_Init(void)
{
  
    printf("UART Initialized\n");
}


void UART_SendChar(char ch)
{
    putchar(ch);
}


void UART_SendString(char *str)
{
    while(*str)
    {
        UART_SendChar(*str++);
    }
}


char UART_ReceiveChar(void)
{
    char ch;

    scanf("%c", &ch);

    return ch;
}
