#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a func given as a par on each element of an array.
 * @array: array parameter to iterate
 * @size: size of the array
 * @action: pointer to the function you need to use
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t c;

	for (c = 0; c < size; c++)
	{
		action(array[c]);
	}
}
