/**
 * @file Print_Binary.c
 * @brief Source code for Print_Binary function implementation.
 *
 * This file contains the function implementation for the Print_Binary function,
 * which takes in a uint8_t value and prints the value in binary format.
 * It relies on the EUSCI_A0_UART driver.
 *
 * @author Aaron Nanas
 *
 */

#include "../inc/Print_Binary.h"

void Print_Binary(uint8_t value_to_convert)
{
    char binVers[10];
    for (int i = 0; i < 4; i++)
    {
    binVers[i] = '0' + (value_to_convert >> (7-i) & 1);
    }
    for (int i = 4; i < 8; i++)
    {
    binVers[i+1] = '0' + ((value_to_convert >> (7-i)) & 1);
    }
    binVers[4] = '_';
    binVers[9] = '\0';
    printf("Binary: %s", binVers);
}

