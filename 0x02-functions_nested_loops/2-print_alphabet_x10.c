#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet in lowercase, 10X.
 */
void print_alphabet_x10(void)
{
int outer_counter;
int inner_counter;

for (outer_counter = 0 ; outer_counter < 10 ; outer_counter++)
{
for (inner_counter = 'a' ; inner_counter <= 'z' ; inner_counter++)
{
_putchar (inner_counter);
}
_putchar ('\n');
}
}
