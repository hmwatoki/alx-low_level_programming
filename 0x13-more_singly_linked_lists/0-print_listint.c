#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints all the elements of a node list
 * @h: listint_t
 * Return: number of elements
*/
size_t print_listint(const listint_t *h)
{
size_t i = 0;
while (h)
{
printf("%d\n", h->n);
h = h->next;
i++;
}
return (i);
}
