#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n)
 * @head: entry point into the linked list
 * Return: sum of all data, if the list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	for ( ; head ; head = head->next)
		sum += head->n;

	return (sum);
}
