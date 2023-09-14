#include "lists.h"
/**
 * add_dnodeint - is add a new node in begging
 *
 * @head: is node
 * @n: is the data of the node
 * Return: new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
struct dlistint_s *new_node;
new_node = malloc(sizeof(struct dlistint_s));
if (new_node == NULL)
	return (NULL);
new_node->n = n;

new_node->next = (*head);
new_node->prev = NULL;

if ((*head) != NULL)
{
(*head)->prev = new_node;
}
(*head) = new_node;
return (*head);
}

