#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list
 * @h: entry point into the linked list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
