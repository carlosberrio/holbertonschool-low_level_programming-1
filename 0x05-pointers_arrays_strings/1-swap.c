#include "holberton.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: pointer input.
 * @b: pointer input.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
