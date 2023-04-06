#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - main function
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 * If the operator is not found, return 1
 * If the operator is found, return the result
*/
int main(int argc, char *argv[])
{
int num1;
int num2;
int result;
char *operator;
int (*operation)(int, int);
if (argc != 4)
{
printf("Error\n");
exit(98);
}
num1 = atoi(argv[1]);
operator = argv[2];
num2 = atoi(argv[3]);
operation = get_op_func(operator);
if (!operation)
{
printf("Error\n");
exit(99);
}
if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0) && num2 == 0)
{
printf("Error\n");
exit(100);
}
result = operation(num1, num2);
printf("%d\n", result);
return (0);
}
