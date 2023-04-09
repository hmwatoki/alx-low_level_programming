#include "main.h"
#include <stdio.h>
/**
 * flip_bits - function to flip the bits of a number
 * @n: number to flip
 * @m: number of bits to flip
 * Return: number of bits flipped
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int diff;
unsigned int i;
/*XOR of 2 numbers get bit diffrence*/
diff = n ^ m;
i = 0;

while (diff)
{
i++;
diff &= diff - 1;
/*remove rightmost set bit*/
}
return (i);
}
