#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list
 * @head: head of the list
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *first, *rest;

	if (head == NULL)
		return (NULL);

	first = (*head);
	rest  = first->next;

	if (rest == NULL)
		return (rest);

	reverse_listint(&rest);

	first->next->next = first;

	first->next  = NULL;

	(*head) = rest;

	return (*head);
}
