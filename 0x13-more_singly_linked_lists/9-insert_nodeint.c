#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: head of the list
 * @idx: index list where the new node should be added. Index starts at 0
 * @n: int data to add to the node
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int nodes_counter = 1;
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	while ((*head) != NULL)
	{
		if (nodes_counter == idx)
		{
			new->next = (*head)->next;
			(*head)->next = new;
			return (new);
		}
/* next line: move through head w-out losing the link to the previous nodes */
		head = &(*head)->next;
		nodes_counter++;
	}
	return (NULL);
}
