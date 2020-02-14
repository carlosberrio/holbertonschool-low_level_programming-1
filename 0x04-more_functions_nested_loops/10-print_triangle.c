#include "holberton.h"

/**
 * print_triangle - function that prints a triangle, followed by a new line.
 * @size: input
 */

void print_triangle(int size)
{
	int x;
	int y;

	if (size > 0)
	{
		for (x = 1 ; x <= size ; x++)
		{
			for (y = 0; y < size ; y++)
			{
				if (y < size - x)
				{
					_putchar(32);
				}
				else
				{
					_putchar(35);
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
