#include "search_algos.h"
/**
 * print_array - Prints an array
 * @array: pointer to the first element of the array to print
 * @left: first index to print
 * @right: last index to print
 *
 * Return: nothing
 */
void print_array(int *array, size_t left, size_t right)
{
	printf("Searching in array: ");
	for ( ; left <= right; left++)
	{
		printf("%d", array[left]);
		if (left < right)
			printf(", ");
	}
	printf("\n");
}
/**
 * binary_search - Searches for a value in an array of integers
 * using the binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where value is located | -1 If val is not present in array
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, middle;

	if (!array)
		return (-1);
	while (left <= right)
	{
		print_array(array, left, right);
		middle = (right + left) / 2;
		if (value < array[middle])
			right = middle - 1;
		else if (array[middle] < value)
			left = middle + 1;
		else
			return (middle);
	}
	return (-1);
}
