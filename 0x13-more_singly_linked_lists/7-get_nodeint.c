#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * *get_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to the head of the list
 * @index: unsigned int
 * Return: pointer to the nth node of a linked list
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *current;
unsigned int i;
i = 0;
if (head ==  NULL)
return (0);
current = head;
while (current != NULL)
{
if (i == index)
{
return (current);
}
i++;
current = current->next;
}
return (NULL);
}
