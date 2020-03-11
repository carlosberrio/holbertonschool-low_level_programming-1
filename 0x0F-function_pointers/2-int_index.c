#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - function that searches for an integer.
 * @array: array parameter to iterate
 * @size: size of the array
 * @cmp: pointer to the function to be used to compare values
 * Return: index of the first element for which the cmp func does not return 0
 * If no element matches, return -1
 * If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int c;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		for (c = 0; c < size; c++)
		{
			if (cmp(array[c]))
				return (c);
		}
	}
	return (-1);
}
