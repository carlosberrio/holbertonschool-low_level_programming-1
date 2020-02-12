#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - all natural numbers from n to 98, followed by a new line
 * @n: input integer
 * Return: Always 1 (Success)
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n <= 98 ; n++)
		{
			printf("%d", n);
			if (n < 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
	else if (n > 98)
	{
		for (; n >= 98 ; n--)
		{
			printf("%d", n);
			if (n > 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
	else
	{
		printf("%d\n", n);
	}
}
