#include "list.hs"
size_t print_dlistint(const dlistint_t *h)
{
    int n = 0;

    while (h != NULL) {
        n++;
        printf("%i\n", h->n);
        h = h->next;
    }
    return n;
}
