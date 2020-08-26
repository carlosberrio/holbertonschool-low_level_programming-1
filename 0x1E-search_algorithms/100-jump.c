#include "search_algos.h"
/**
 * jump_search - Searches for a value in an array of integers
 * using the jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where value is located | -1 If val is not present in array
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size), start = 0;

	if (!array)
		return (-1);
	while (start < size && array[start] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", start, array[start]);
		start += jump;
	}
	start -= jump;
	printf("Value found between indexes [%lu] and [%lu]\n", start, start + jump);
	while (start < size)
	{
		printf("Value checked array[%lu] = [%d]\n", start, array[start]);
		if (array[start] == value)
			return (start);
		start++;
	}
	return (-1);
}
