#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_binary - prints  binary rep of a number
 * @n: number to be printed
 * Return: void
 */
void print_binary(unsigned long int n)
{
if (n > 1)
/*shift the number to the right by a bit*/
print_binary(n >> 1);
/*print the last bit using & operator*/
_putchar((n & 1) + '0');
}
