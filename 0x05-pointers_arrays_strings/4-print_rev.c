#include "main.h"
/**
 * print_rev - prints strings in reverse
 * @s: strings
*/
void print_rev(char *s)
{
if (*s == '\0')
return;
else
{
print_rev(s + 1);
putchar(*s);
}
}
