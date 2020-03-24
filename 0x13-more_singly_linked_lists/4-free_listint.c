#include "lists.h"

/**
 * free_listint - Function that frees a listint_t list
 * @head: first element of the list
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head; /* tmp is now head */
		head = head->next; /* head moves one pos forward */
		free(tmp); /* lo que era head guardado en tmp, se va */
	}
}
