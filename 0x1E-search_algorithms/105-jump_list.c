#include "search_algos.h"
/**
 * jump_list - Searches for a value in a sorted list of integers using
 * the Jump search algorithm.
 * @list: pointer to the head of the list to search in
 * @size: number of nodes in list
 * @value: value to search for
 *
 * Return: pointer to the first node where value is located | NULL if not val
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump = sqrt(size), start = 0, i;
	listint_t *prev = NULL;

	if (!list)
		return (NULL);
	while (start < size && list->n < value)
	{
		prev = list;
		start += jump;
		for (i = 0; i < jump && list->next; i++)
			list = list->next;
		printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
			prev->index, list->index);
	start -= jump;
	while (start < size)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		start++;
		prev = prev->next;
	}
	return (NULL);
}
