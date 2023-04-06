#include "variadic_functions.h"
#include <string.h>
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 * @...: arguments passed to the function
 * Return: void
 *
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *str;
va_list args;
va_start(args, n);

for (i = 0; i < n; i++)
{
str = va_arg(args, char*);
printf("%s", (str != NULL ? str : "(nil)"));
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
va_end(args);
}
printf("\n");
}
