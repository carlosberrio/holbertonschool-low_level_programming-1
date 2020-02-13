#include "holberton.h"

/**
 * print_diagonal - Write a function that draws a diagonal line on the terminal
 * @diagonals: diagonal to print
 * Return: Always 0 (Success)
 */

void print_diagonal(int diagonals)
{
	int counter; /*eje x*/
	int cols;

	if (diagonals > 0)
	{
	for (counter = 1 ; counter <= diagonals ; counter++)
	{
		for (cols = 1; cols < counter ; cols++)
		{
			_putchar(32);
		}
		_putchar(92);
		_putchar('\n');
	}
	}
	else
	{
		_putchar('\n');
	}
}
