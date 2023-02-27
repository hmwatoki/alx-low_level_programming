#include "main.h"
/**
 * _strlen - length of a string
 * @s: string to find length of
 * return: length
*/

int _strlen(char *s)
{
int len = 0;
while (*s != 0)
{
len++;
s++;
}
return (len);
}

