#include "lists.h"

/**
 * print_listint - Function that prints all the elements of a list_t list.
 * @h: head of the list
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
