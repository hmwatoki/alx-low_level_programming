#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _pow_recursion - returns x^y
 * @x: number to find power of
 * @y: power
 * Return: result of power
*/

int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else if (y == 0)
return (1);
else
return (x * _pow_recursion(x, (y - 1)));
}
