#include "lists.h"
/**
 * dlistint_len - prints the lenght of a
 * dlistint_t list
 *
 * @h: head of the list
 * Return: the len of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
int n = 0;
while (h != NULL)
{
n++;
printf("%d\n", h->n);
h = h->next;
}
return (n);
}

