#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the 2 diagonals of a square matrix of int
 * @a: given array
 * @size: array size
 */
void print_diagsums(int *a, int size)
{
	int total_size, counter, sum1, sum2;
/* A two-dimensional array is, in essence, a list of one-dimensional arrays */
	total_size = size * size;
	sum1 = 0;
	sum2 = 0;

	for (counter = 0 ; counter < total_size;
	     counter = counter + (size + 1))
	{
		sum1 = sum1 + a[counter];
	}
	for (counter = size - 1 ; counter < (total_size - 1);
	     counter = counter + (size - 1))
	{
		sum2 = sum2 + a[counter];
	}
	printf("%d, %d\n", sum1, sum2);
}
