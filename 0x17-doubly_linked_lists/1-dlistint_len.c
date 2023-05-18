#include "lists.h"
/**
 * distint_len - returns no of elements iin a list
 * @h: pointer to the head of the list
 * Return: number of element
*/
size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *curr = h;
int len;
len = 0;
while (curr != 0)
{
len++;
curr = curr->next;
}
return (len);
}
