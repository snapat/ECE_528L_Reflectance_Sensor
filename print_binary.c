/**
* @file print_binary.c
*
* @brief Main source code for Print_Binary program.
*
* This file contains the main entry point and the implementation
* of the Print_Binary function that takes in a uint8_t value and
* prints the value in binary format.
*
* @author Aaron Nanas and PJ
*/

#include <stdio.h>
#include <stdint.h>
void Print_Binary(uint8_t value_to_convert);
int main()
{
 uint8_t value_to_convert = 170;
 printf("Decimal: %d\n", value_to_convert);
 Print_Binary(value_to_convert);
 return 0;
}
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