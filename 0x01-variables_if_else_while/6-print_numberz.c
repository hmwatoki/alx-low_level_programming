#include <stdio.h>
/**
 * main - entry point
 *
 * Description:
 * this program prints "Programming is positive, zero, or negative
 * Return: 0
 */
int main(void)
{
int c;
for (c = 0; c <= 9; c++)
{
putchar((c % 10) + '0');
}
putchar('\n');
return (0);
}
