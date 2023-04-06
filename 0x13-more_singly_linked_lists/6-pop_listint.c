#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * pop_listint - deletes the head node of a listint_t list
 * @head: pointer to the head
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
int n;
listint_t *temp;
if (*head == NULL)
{
return (0);
}
n = (*head)->n;
temp = *head;
*head = temp->next;
free(temp);
return (n);
}
