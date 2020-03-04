#include "holberton.h"
#include <stdlib.h>
/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * return NULL on failure
 * @width: cols
 * @height: rows
 * Return:  pointer to the array, or NULL if it fails
 */
int **alloc_grid(int width, int height)
{
	int row, cols;
	int **new_arr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	new_arr = malloc(sizeof(int *) * height);
	if (new_arr == NULL)
	{
		return (NULL);
	}

	for (row = 0 ; row < height ; ++row)
	{
		new_arr[row] = malloc(sizeof(int) * width);

		if (new_arr[row] == NULL)
		{
			while (--row > -1)
			{
				free(new_arr[row]);
			}
			free(new_arr);
			return (NULL);
		}

		for (cols = 0 ; cols < width ; ++cols)
		{
			new_arr[row][cols] = 0;
		}
	}

	return (new_arr);
}
