#include <stdio.h>
#include <string.h>
#include "uart.h"
#include "rfid.h"

#define VALID_CARD "1234567890"

char rfid_data[20];

void System_Init(void);

int main(void)
{
    
    System_Init();

    UART_SendString("RFID Attendance System Started\r\n");

    while(1)
    {
        UART_SendString("Scan RFID Card...\r\n");

      
        RFID_Read(rfid_data);

        UART_SendString("Card Detected: ");
        UART_SendString(rfid_data);
        UART_SendString("\r\n");

     
        if(strcmp(rfid_data, VALID_CARD) == 0)
        {
            UART_SendString("Access Granted\r\n");
            UART_SendString("Attendance Marked\r\n");
        }
        else
        {
            UART_SendString("Access Denied\r\n");
        }

        UART_SendString("-------------------------\r\n");
    }

    return 0;
}


void System_Init(void)
{
    UART_Init();
    RFID_Init();
}
