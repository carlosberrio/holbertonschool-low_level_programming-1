#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list
 * @head: first element of the list
 * @n: integer to copy
 * Return: Address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tmp;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

/* Checking head if its NULL */
	if (*head == NULL)
	{ /*en ant return new, here head, check vs ant project bc it works */
		*head = new;
		return (*head);
	}

	tmp = *head; /* tmp to iterate without losing head */

	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = new;

	return (new);
}
