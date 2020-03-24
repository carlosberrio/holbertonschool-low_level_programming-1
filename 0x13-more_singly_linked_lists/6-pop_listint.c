#include "lists.h"

/**
 * pop_listint - Function that deletes the head node of a listint_t linked list
 * @head: first element of the list
 * Return: the head nodes data (n) or 0 if the linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *new_head;
	int num;

	if (*head == NULL)
		return (0);

	num = (*head)->n;  /* save int before delete it */
	new_head = *head; /* save a copy to the head to free later */
	(*head) = (*head)->next; /* unlink the head and moves to the next */

	free(new_head);

	return (num);
}
