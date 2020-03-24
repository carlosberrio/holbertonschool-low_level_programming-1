#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index of a listint_t
 * @head: head of the list
 * @index: index list where the new node should be added. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int nodes_counter = 0;
	listint_t *deleted_node;

	while ((*head))
	{
		if (nodes_counter == index)
		{
			deleted_node = (*head);
			(*head) = (*head)->next;
			free(deleted_node);
			return (1);
		}

		head = &(*head)->next;
		nodes_counter++;
	}
	return (-1);
}
