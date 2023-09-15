#include "lists.h"
/**
 * get_dnodeint_at_index - get a nth node of dlistint_t
 *
 * @head: is a node
 * @index: is an index
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int n = 0;
struct dlistint_s *cur;
if (head == NULL)
{
return (NULL);
}
cur = head;
while (cur->next != NULL)
{
if (n == index)
{
return (cur);
}
cur = cur->next;
n++;
}
}

