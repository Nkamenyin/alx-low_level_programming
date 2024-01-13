#include <lists.h>

/**
 * print_dlistint - this prints all elements of dlistint_t list.
 * @n:integer
 * @prev: points to the previous node
 * @next: points to the next node
 * Return: node count
 */
typedef struct dlistint_s {
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h) {
    size_t node_count = 0;

    while (h != NULL) {
        printf("%d", h->n);
        node_count++;

        h = h->next;
        if (h != NULL) {
            printf(" <-> ");
	}
    }
    printf("\n");
    return node_count;
}
