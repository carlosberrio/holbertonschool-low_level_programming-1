#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list
 * @head: head of the list
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = NULL, *next_node = NULL;

	if ((*head) == NULL)
		return (NULL);

	while ((*head))
	{
		next_node = (*head)->next;
		(*head)->next = prev_node;
		prev_node = (*head);
		(*head) = next_node;
	}

	(*head) = prev_node;

	return (*head);
}

/*
V3 =
listint_t *reverse_listint(listint_t **head)
{
	struct node *prev_node = NULL, *current_node = NULL;

	if ((*head) != NULL)
	{
		prev_node = (*head);
		currrent_node = (*head)->next;
		(*head) = (*head)->next;

		prev_node->next = NULL; // Make first node as last node

		while((*head) != NULL)
		{
			(*head) = (*head)->next;
			current_node->next = prev_node;

			prev_node = current_node;
			current_node = (*head);
		}

		(*head) = prevNode; // Make last node as head

		return (head);
	}
}
*/
