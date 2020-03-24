#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list
 * @head: head of the list
 * @index: index of the node, starting at 0
 * Return: nth node of a the list or NULL if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nodes_counter = 0;

	while (head != NULL)
	{
		if (nodes_counter == index)
		{
			return (head);
		}
		head = head->next;
		nodes_counter++;
	}
	return (NULL);
}
