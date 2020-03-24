#include "lists.h"

/**
 * sum_listint - Sum all the data (n) of a listint_t linked list
 * @head: head of the list
 * Return: sum of all n elements, or if the list is empty, return 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
