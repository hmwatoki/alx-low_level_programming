#include <stdio.h>
/**
 * main - entry point
 * description: print a-z
 * Return: always return 0
 *
 */

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
		putchar(i);
		putchar('\n');
	return (0);
}
