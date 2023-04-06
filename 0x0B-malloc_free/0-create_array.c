#include "main.h"
#include <stdlib.h>
/**
 * *create_array - creates array of chars
 * @size: size of array
 * @c: char to fill array with
 * Return: pointer to array
*/
char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i;
if (size == 0)
{
return (NULL);
}
arr = (char *)malloc(size * sizeof(char));
if (arr == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
arr[i] = c;
}
return (arr);
free(arr);
}
