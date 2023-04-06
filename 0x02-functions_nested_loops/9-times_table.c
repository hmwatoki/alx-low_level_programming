#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 * @x & @y: values of two numbers.
 *
 */
void times_table(void)
{
int i, mult, res;
for (i = 0; i <= 9; i++)
{
_putchar('0');
for (mult = 1; mult <= 9; mult++)
{
_putchar(',');
_putchar(' ');
res = i * mult;
if (res <= 9)
_putchar(' ');
else
_putchar((res / 10) + '0');
_putchar((res % 10) + '0');
}
_putchar('\n');
}
}
