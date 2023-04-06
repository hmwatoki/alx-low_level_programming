#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * cap_string - capitalizes all words of a string
 * @s: string to be capitalized
 *
 * Return: pointer to the capitalized string
 */
char *cap_string(char *s)
{
int i = 0;
int cap_next_char = 1;

while (s[i] != '\0')
{
if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
s[i] == ',' || s[i] == ';' || s[i] == '.' ||
s[i] == '!' || s[i] == '?' || s[i] == '"' ||
s[i] == '(' || s[i] == ')' || s[i] == '{' ||
s[i] == '}')
{
cap_next_char = 1;
}
else if (cap_next_char == 1)
{
s[i] = toupper(s[i]);
cap_next_char = 0;
}
i++;
}
return (s);
}
