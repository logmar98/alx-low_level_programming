#include "lists.h"
/**
 * free_dlistint - free the nodes of the dlistint_t
 *
 * @head: is node
 */
void free_dlistint(dlistint_t *head)
{
struct dlistint_s *tmp;

while (head != NULL)
{
tmp = head;
head = head->next;
free(tmp);
}
}

