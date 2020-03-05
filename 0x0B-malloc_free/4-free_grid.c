#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimen grid previously created by your alloc_grid func
 * @grid: grid to free
 * @height: free like birds in heaven / size of the thing
 */
void free_grid(int **grid, int height)
{
	int c;

	for (c = 0; c < height; c++)
	{
		free(grid[c]);
	}
	free(grid);
}
