#include <stdio.h>
#include "holberton.h"

/**
 * main - Write a program that prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * Return: Nothing
 */

int main(void)
{
	int n = 0, result = 0;
	int prev = 0, res = 1, sum = 0;

	while (res < 4000000)
	{
		sum = prev + res;
		prev = res;
		res = sum;

		if (res % 2 != 0)
			result += res;

		n++;
	}
	printf("%i\n", result);

	return (0);
}
