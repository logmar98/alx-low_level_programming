#include "lists.h"
/**
 * sum_dlistint - sum the nodes of dlistint_t
 *
 * @head: is a node
 * Return: return sum of nodes
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;

while (head)
{
sum = sum + head->n;
head = head->next;
}
return (sum);
}

