#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * get_op_func - Gets the operator
 * @s: The operator
 * Return: The operator
 * If the operator is not found, return NULL
 *
*/
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i;

i = 0;
while (ops[i].op != NULL)
{
if (*ops[i].op == *s && *(ops[i].op + 1) == '\0')
return (ops[i].f);
i++;
}
return (NULL);
}
