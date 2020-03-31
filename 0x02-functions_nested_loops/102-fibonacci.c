#include <stdio.h>
#include "holberton.h"

/**
 * main - Write a program that prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * Return: Nothing
 */

int main(void)
{
	int n = 0;
	long prev = 0, res = 1, sum = 0;

	while (n < 50)
	{
		sum = prev + res;
		prev = res;
		res = sum;
		printf("%ld", sum);

		if (n < 49)
			printf(", ");

		n++;
	}
	printf("\n");

	return (0);
}
