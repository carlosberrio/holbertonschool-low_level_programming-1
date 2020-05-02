#include "lists.h"

/**
 * print_dlistint_reverse - Prints a dlistint_t list in reverse
 * @current: entry point into the linked list
 * Return: Nothing
 */
void print_dlistint_reverse(const dlistint_t *current)
{

	while (current->next)
		current = current->next;
	printf("***Printing in reverse: ***\n");
	while (current)
	{
		printf("%i\n", current->n);
		current = current->prev;
	}
}
