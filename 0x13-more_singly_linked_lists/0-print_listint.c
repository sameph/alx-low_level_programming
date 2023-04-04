#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: a linked list to be printed
 *
 * Return: number of nodes
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
