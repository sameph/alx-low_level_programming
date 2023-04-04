#include "lists.h"
/**
 * listint_len - function to print length of a list
 * @h: a pointer to singly linked list
 *
 * Return: return length of a list
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
