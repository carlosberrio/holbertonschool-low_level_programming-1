#include "search_algos.h"
/**
 * linear_skip - Searches for a value in a sorted skip list of integers.
 * @list: pointer to the head of the skip list to search in
 * @value: value to search for
 *
 * Return: pointer to the first node where value is located | NULL if not val
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *prev = NULL, *last_node = NULL;

	if (!list)
		return (NULL);
	while (list->n < value && list->express)
	{
		prev = list;
		list = list->express;
		printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
	}
	if (value < list->n)
		printf("Value found between indexes [%lu] and [%lu]\n",
				prev->index, list->index);
	else
	{
		prev = prev->express;
		last_node = list;
		while (last_node->next)
			last_node = last_node->next;
		printf("Value found between indexes [%lu] and [%lu]\n",
				list->index, last_node->index);
	}
	while (prev)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}
	return (NULL);
}
