#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list
 * @head: entry point into the linked list
 * @n: integer data
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head; /* NULL if !head */
	new_node->prev = NULL;
	*head = new_node;

	if (new_node->next)
		(new_node->next)->prev = new_node;

	return (new_node);
}
