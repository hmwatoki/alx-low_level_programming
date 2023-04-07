#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * binary_to_uint - converts a binary number to  unsigned int
 * @b: string to convert
 * Return: unsigned int
 * Convert a binary number to an unsigned int
*/
unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int conv;
conv = 0;
if (b == NULL)
return (0);
for (i =0; b[i] != '\0'; i++)
{
if (b[i] != '0'&& b[i] != '1')
return (0);
conv <<= 1;
if(b[i] == '1')
{
conv += 1;
}
}
return (conv);
}
