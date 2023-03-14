#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid - returns a pointer to a newly allocated space in memory
 * @width: width of the grid
 * @height: height of the grid
 * Return: pointer to a pointer to a newly allocated space in memory
*/
int **alloc_grid(int width, int height)
{
int **dim;
int i, j;
if (width == 0 || height == 0)
{
return (NULL);
}
dim = malloc(height * sizeof(int *));
if (dim == NULL)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
dim[i] = (int *) malloc(width * sizeof(int));
if (dim[i] == NULL)
{
for (j = 0; j < i; j++)
{
free(dim[j]);
free(dim);
return (NULL);
}
for (j = 0; j < i; j++)
{
free(dim[j]);
}
}
return (dim);
}
