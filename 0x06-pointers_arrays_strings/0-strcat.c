#include "main.h"
#include <string.h>
/**
 * *_strcat - concatenates two strings.
 * @dest: destination
 * @src: source
 * Return: Character
*/
char *_strcat(char *dest, char *src)
{
int len = strlen(dest);

int i;

for (i = 0; src[i] != '\0'; i++)
dest[len + i] = src[i];
dest[len + i] = '\0';
return (dest);
}
