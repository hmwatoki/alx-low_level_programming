#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to concatenated string
*/

char *str_concat(char *s1, char *s2)
{
int len_s1;
int len_s2;
char *str_concat;
int i;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
if (s1 != NULL)
{
len_s1 = 0;
while (s1[len_s1] != '\0')
len_s1++;
}
if (s2 != NULL)
{
len_s2 = 0;
while (s2[len_s2] != '\0')
len_s2++;
}
str_concat = malloc(len_s1 + len_s2 + 1);
if (str_concat == NULL)
return (NULL);
for (i = 0; i < len_s1; i++)
str_concat[i] = s1[i];
for (i = 0; i < len_s2; i++)
str_concat[len_s1 + i] = s2[i];
str_concat[len_s1 + len_s2] = '\0';
return (str_concat);
free(str_concat);
}
