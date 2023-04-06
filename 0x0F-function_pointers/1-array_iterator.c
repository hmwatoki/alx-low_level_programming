#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * array_iterator - iterates through an array
 * @array: array to iterate
 * @size: size of array
 * @action: pointer to function
 * Return: Nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array == NULL || action == NULL)
exit(98);
for (i = 0; i < size; i++)
{
action(array[i]);
}
}

