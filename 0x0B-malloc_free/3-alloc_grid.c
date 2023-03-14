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
dim = (int **) malloc(height * sizeof(int *));
for (i = 0; i < height; i++)
{
dim[i] = (int *) malloc(width * sizeof(int));
for (j = 0; j < width; j++)
{
dim[i][j] = 0;
}
}
if (dim == NULL)
{
return (NULL);
}
return (dim);
}
