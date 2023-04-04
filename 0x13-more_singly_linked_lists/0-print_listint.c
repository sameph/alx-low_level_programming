#include "lists.h"
/**
 * print_listint - printing lists of linked list
 * @h: pointer to linked list
 * Return: size of list
 */
size_t print_listint(const listint_t *h)
{
	size_t m = 0;

	while (h)
	{
		printf("%d\n", h->n);
		m++;
		h = h->next;
	}
	return (m);
}
