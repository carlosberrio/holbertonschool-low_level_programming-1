#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: array
 * @n: number of elements to print.
 */
void print_array(int *a, int n)
{
	int i, length;

	length = 0;

	while (a[length] != '\0')
	{
		length++;
	}
	if (length >= n)
	{
		for (i = 0 ; i < n ; i++)
		{
			printf("%d", a[i]);
			if (i < (n - 1))
			{
				printf(",");
				printf(" ");
			}
		}
	}
	putchar('\n');
}
