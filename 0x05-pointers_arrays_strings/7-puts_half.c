#include "holberton.h"

/**
 * puts_half - Function that prints half of a string
 * @str: string input.
 * Return - Void
 */
void puts_half(char *str)
{
	int length, half;

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	if (length % 2 == 0)
	{
		half = length / 2;
	}
	else
	{
		half = (length - 1) / 2;
	}
	while (half <= length)
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
