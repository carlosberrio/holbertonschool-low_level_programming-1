#include "lists.h"

/**
 * free_listint2 - Function that frees a listint_t list
 * @head: first element of the list
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;
/* if checker does not pass, put if head == NULL, etc */
	while (*head != NULL)
	{/* tmp is now head */
		tmp = *head;
/* Because procedence head should be inside parenthesis */
		*head = (*head)->next;
		free(tmp);
	}
}
