#include "main.h"

/**
 * get_endianness - check for the endianness
 * Return: 0 if little endian, 1 if big endian
*/
int get_endianness(void)
{
int h;
char *p;
h = 1;
p = (char *)&h;
if (*p == 1)
{
return (1);
}
else
{
return (0);
}
}
