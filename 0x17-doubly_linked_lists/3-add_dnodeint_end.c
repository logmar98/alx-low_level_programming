#include "lists.h"
/**
 * add_dnodeint_end - is add a new node in ending of the dlistint_t
 *
 * @head: is node
 * @n: is the data of the node
 * Return: new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
struct dlistint_s *new_node;
struct dlistint_s *last;
new_node = malloc(sizeof(struct dlistint_s));
if (new_node == NULL)
	return (NULL);
last = (*head);
new_node->n = n;

new_node->next = NULL;

if ((*head) == NULL)
{
new_node->prev = NULL;
(*head) = new_node;
return (*head);
}
while (last->next != NULL)
{
last = last->next;
}
last->next = new_node;
new_node->prev = last;

return (*head);
}
