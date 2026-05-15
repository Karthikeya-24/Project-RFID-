#include <stdio.h>
#include "rfid.h"


void RFID_Init(void)
{
    printf("RFID Module Initialized\n");
}


void RFID_Read(char *data)
{
    printf("Enter RFID Card ID: ");

    scanf("%s", data);
}
