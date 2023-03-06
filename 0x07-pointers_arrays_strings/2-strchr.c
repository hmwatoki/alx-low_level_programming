#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string to search
 *  @c: character to search for
 *  Return: a pointer to the occurrence of the character
 *  null if the character is not found
*/
char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
return (s + i);
}
return (NULL);
}
