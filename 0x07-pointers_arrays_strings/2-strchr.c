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
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
return (NULL);
}
