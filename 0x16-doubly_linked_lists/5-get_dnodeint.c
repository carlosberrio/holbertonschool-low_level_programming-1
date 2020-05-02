#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list
 * @head: entry point into the linked list
 * @index: index of the node, starting from 0
 * Return: pointer to the node, if the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	while (head)
	{
		if (counter == index)
			return (head);
		head = head->next;
		counter++;
	}
	return (NULL);
}
