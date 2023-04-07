#include <stdio.h>
#include "main.h"
/**
 * get_bit - returns the value of  bit at a given index
 * @n: an unsigned long int
 * @index: an unsigned int
 * Return: value of bit
*/

int get_bit(unsigned long int n, unsigned int index)
{
/*check if ind is within bounds*/
if (index >= (sizeof(unsigned long int) * 8))
{
return (-1);
}
/**get value of bit at index*/
return ((n & (1 << index)) != 0);
}
