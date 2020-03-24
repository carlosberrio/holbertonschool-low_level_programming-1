#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list
 * @head: head of the list
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *first, *rest;

	if (!(*head))
		return (NULL);

	first = (*head);
	rest  = first->next;

/* if list has only one node */

	if (rest == NULL)
		return (rest);

/* reverse the rest list and put the first element at the end */
	reverse_listint(&rest);

	first->next->next = first;

	/* tricky step -- see the diagram */
	first->next  = NULL;

	/* fix the head pointer */
	(*head) = rest;

	return (*head);
}
