#include "main.h"
#include "2-strlen.c"
#include <string.h>
/**
 * rev_string - function defination
 * @s: pointer argument
 *
*/
void rev_string(char *s)
{
int length = strlen(s);
int i;
char temp;

for (i = 0; i < length / 2; i++)
{
temp = s[i];
s[i] = s[length - i - 1];
s[length - i - 1] = temp;
}
}

