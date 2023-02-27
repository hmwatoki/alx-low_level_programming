#include "main.h"
#include "2-strlen.c"
/**
 * print_rev - prints strings in reverse
 * @s: strings
*/
void print_rev(char *s)
{
	int index;

	for (index = _strlen(s) - 1; index >= 0; index--)
	{
		putchar(*(s + index));
	}
	putchar('\n');
}
