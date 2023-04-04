#include "lists.h"
/**
 * add_nodeint - a function that add node at the beggining
 * @head: a pointer to a pointer to head
 * @n: data to be intered
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);
	node->next = NULL;
	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
}
