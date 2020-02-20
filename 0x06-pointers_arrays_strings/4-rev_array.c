#include "holberton.h"

/**
 * reverse_array - Function that reverses the content of an array of integers.
 * @a: array
 * @n: number of elements
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int c, tmp;

	c = 0;
	n--; /* to get the last one */

	while (c < n)
	{
		tmp = a[c];
		a[c] = a[n];
		a[n] = tmp;
		c++, n--;
	}
}
