#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list
 * @head: entry point into the linked list
 * @n: integer data
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t)), *current = NULL;

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (!*head)
		return (*head = new_node);

	current = *head;

	while (current->next)
		current = current->next;

	current->next = new_node;
	new_node->prev = current;

	return (new_node);
}
