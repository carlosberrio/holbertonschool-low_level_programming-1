#include "lists.h"

/**
 * free_dlistint - Free a dlistint_t list
 * @head: entry point into the linked list
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = NULL;

	while (head)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
