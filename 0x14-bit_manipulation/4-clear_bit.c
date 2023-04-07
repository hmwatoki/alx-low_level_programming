#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to an unsigned long int
 * @index: index of the bit to set
 * Return: 1 if it worked or -1 if an error
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
/*check if index wthin bounds*/
if (index >= (sizeof(unsigned long int) * 8))
{
return (-1);
}
/*set the bit to 0 at index*/
*n &= ~(1 << index);
return (1);
}
