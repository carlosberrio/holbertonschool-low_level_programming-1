#include "lists.h"

/**
 * print_listint_safe - Function that prints all the elements of a list_t list.
 * @head: head of the list
 * Return: Number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)&head->n, head->n);
		nodes++;
/*check directions to break the infinite loop */
		if ((void *)&head->n > (void *)&head->next->n)
		{
			head = head->next;
		}
		else
		{
			printf("-> [%p] %d\n", (void *)&head->next->n,
			       head->next->n);
			break;
		}
	}
	return (nodes);
}
