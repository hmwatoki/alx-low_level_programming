#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to the dlistint_t list
 * Return: number of nodes
 *
*/
size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *curr = h;
int i;
i = 0;
while (curr != NULL)
{
printf("%d\n", curr->n);
curr = curr->next;
i++;
}
return (i);
}
