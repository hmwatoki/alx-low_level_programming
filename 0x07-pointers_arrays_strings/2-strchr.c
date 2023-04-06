#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string to search
 *  @c: character to search for
 *  Return: a pointer to the occurrence of char
 *  null if the character is not found
*/
char *_strchr(char *s, char c)
{
int a;
while (1)
{
a = *s++;
if (a == c)
{
return (s - 1);
}
if (a == 0)
{
return (NULL);
}
}
}
