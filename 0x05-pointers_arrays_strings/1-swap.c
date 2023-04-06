#include "main.h"
/**
 * swap_int - swaps to values
 * @a: value to be swapped
 * @b: value to be swapped
 * return: void
*/
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}

