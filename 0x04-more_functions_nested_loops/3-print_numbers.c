#include "holberton.h"

/**
 * print_numbers - Prints from 0 to 9 followed by a new line
 *
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	int num;

	num = 0;

	while (num <= 9)
	{
		_putchar(num + '0');
		num++;
	}
	_putchar('\n');
}
