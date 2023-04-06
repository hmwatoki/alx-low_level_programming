#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * @str: string to be duplicated
 * Return: pointer to duplicated string
*/
char *_strdup(char *str)
{
char *cp;
int i;
int len;
len = 0;
if (str == NULL)
{
return (NULL);
}
while (str[len])
{
len++;
}
cp = (char *)malloc(len *sizeof(char) + 1);
if (cp == NULL)
{
return (NULL);
}
for (i = 0; i < len; i++)
{
cp[i] = str[i];
}
cp[i] = '\0';
return (cp);
free(cp);
}
