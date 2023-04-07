#include "main.h"
#include <stdio.h>
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: unsigned long int
 * @index: unsigned int
 * Return: 1 on success 0 on failure
 *
*/
int set_bit(unsigned long int *n, unsigned int index)
{
/*check if ind is within bounds*/
if (index >= (sizeof(unsigned long int) * 8))
{
return (-1);
}
/*set the bit to 1 at index*/
*n = *n | (1 << index);
return (1);
}
