#include "main.h"
/**
 * _isdigit - checks for a digit 0-9
 * @c: The character to check
 *
 * Return: 1 if is a digit 0 if not
 *
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
