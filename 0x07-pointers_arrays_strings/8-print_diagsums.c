#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - function declaration
 * @a: the array
 * @size: diagonal size
 * Return: void
 */

void print_diagsums(int *a, int size);

/**
 * print_diagsums - function definition
 * @a: the array to be used
 * @size: the size of the diagonal
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum_one = 0;
	int sum_two = 0;

	for (i = 0; i < size; i++)
	{
		sum_one += a[(i * size) + i];
		sum_two += a[(size - 1) + ((size - 1) * i)];
	}
	printf("%d, %d\n", sum_one, sum_two);
}
