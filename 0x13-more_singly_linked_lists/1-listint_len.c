#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked listint_t list
 * @h: head of the list
 * Return: Number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
