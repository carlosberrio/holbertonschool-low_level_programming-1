#include "holberton.h"

/**
 * print_line - draws a straight line in the terminal.
 * @lines: lines to print
 * Return: Always 0 (Success)
 */

void print_line(int lines)
{
	int counter;

	for (counter = 1 ; counter <= lines ; counter++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
