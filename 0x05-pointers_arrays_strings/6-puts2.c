#include "main.h"
/**
 * puts2 - prints every other char
 * @str: strings arg
 *
*/
void puts2(char *str)
{
int i;
i = 0;
while (str[i] != '\0')
{
putchar (str[i]);
i += 2;
}
putchar('\n');
}
