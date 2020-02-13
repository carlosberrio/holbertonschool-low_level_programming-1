#include "holberton.h"

/**
 * print_square - prints a square, followed by a new line.
 * @size: input
 */

void print_square(int size)
{
	int l1;
	int l2;

	if (size > 0)
	{
		for (l1 = 1 ; l1 <= size ; l1++)
		{
			for (l2 = 1; l2 <= size ; l2++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
