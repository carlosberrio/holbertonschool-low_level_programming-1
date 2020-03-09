#include "holberton.h"
#include <stdlib.h>

/**
 * *array_range - function that creates an array of integers.
 * @min: min value
 * @max: max value
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i <= (max - min); i++)
	{
		ptr[i] = min + i;
	}

	return (ptr);
}
