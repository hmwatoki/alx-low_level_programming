#include "main.h"
/**
 * print_most_numbers - 1-9 except for 2 and 4
 *
 * Return: 0
 *
 */
void print_most_numbers(void)
{
int i;
for (i = 0; i < 10; i++)
{
if (i == 2 || i == 4)
{
continue;
}
else
{
_putchar (i + '0');
}
}
_putchar ('\n');
}

