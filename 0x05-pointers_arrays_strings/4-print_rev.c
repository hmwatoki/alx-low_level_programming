#include "main.h"
#include "2-strlen.c"
/**
 * print_rev - prints strings in reverse
 * @s: strings
*/
void print_rev(char *s)
{
	int index;
	char temporary;

	for (index = 0; index < _strlen(s) / 2; index++)
	{
		temporary = s[index];
		s[index] = s[_strlen(s) - (index + 1)];
		s[_strlen(s) - (index + 1)] = temporary;
	}
}