#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes node at index of a dlistint_t linked list
 * @head: entry point into the linked list
 * @index: index of the list where the new node should be added, starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node = NULL;
	unsigned int counter = 0;

	if (!head || !(*head))
		return (-1);
	node = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		if ((*head))
			(*head)->prev = NULL;
		free(node);
		return (1);
	}
	while ((*head))
	{
		if (index == counter)
		{
			node = (*head);
			(*head) = (*head)->next;
			(*head)->prev = node->prev;
			/*	print_dlistint_reverse(node); */
			free(node);
			return (1);
		}
		counter++;
		head = &(*head)->next;
	}

	return (-1);
}
