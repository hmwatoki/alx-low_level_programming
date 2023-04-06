#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of a linked list
 * @head: pointer to the head of the list
 * Return: sum of all the data (n) of a linked list
 */
int sum_listint(listint_t *head)
{
listint_t *current;
int sum;
sum = 0;

current = head;
if (current ==  NULL)
return (0);
while (current != NULL)
{
sum += current->n;
current = current->next;
}
return (sum);
}
