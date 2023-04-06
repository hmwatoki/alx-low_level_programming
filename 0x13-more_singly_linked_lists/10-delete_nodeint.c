#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t list.
 * @head: pointer to a pointer to the first element of a listint_t list.
 * @index: index of the node that should be deleted. Index starts at 0.
 * Return: 1 if succeeded, -1 if failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i = 0;
listint_t *tmp, *curr;
if (head == NULL || *head == NULL)
return (-1);
if (index == 0)
{
tmp = *head;
*head = (*head)->next;
free(tmp);
return (1);
}
curr = *head;
while (i < index - 1)
{
if (curr->next == NULL)
return (-1);
curr = curr->next;
i++;
}
tmp = curr->next;
curr->next = tmp->next;
free(tmp);
return (1);
}
