#include "holberton.h"
#include <stdlib.h>
/**
 * *create_array - creates an arr of chars, initializes it with a specific char
 * @size: size of the array
 * @c: value to be filled
 * Return:  pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *new_arr;

	if (size == 0)
	{
		return (NULL);
	}
	new_arr = malloc(size * sizeof(char));

	for (i = 0 ; i < size ; i++)
	{
		new_arr[i] = c;
	}
	return (new_arr);
}
