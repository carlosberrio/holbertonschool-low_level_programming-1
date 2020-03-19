#include "lists.h"

/**
 * list_len - function that returns the numb of els in a linked list_t list.
 * @h: head of the list
 * Return: Number of elements
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		++nodes;
	}

	return (nodes);
}
