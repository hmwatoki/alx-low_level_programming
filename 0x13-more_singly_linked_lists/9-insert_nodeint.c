#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to the head of the list.
 * @idx: position to insert the new node.
 * @n: data to store in the new node.
 * Return: address of the new node, or NULL if it failed.
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *new_node, *tmp = *head;
new_node = malloc(sizeof(listint_t));
if (!new_node || !head)
return (NULL);
new_node->n = n;
if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}
for (i = 1; tmp && i < idx; i++)
tmp = tmp->next;
if (!tmp)
{
free(new_node);
return (NULL);
}
new_node->next = tmp->next;
tmp->next = new_node;
return (new_node);
}
