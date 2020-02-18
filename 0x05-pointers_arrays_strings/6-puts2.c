#include "holberton.h"

/**
 * puts2 - prints every other char of a str, starting with the 1st char
 * @str: string input.
 * Return - Void
 */
void puts2(char *str)
{
	int length;

	length = 0;

	while (str[length] != '\0')
	{
		if (length % 2 == 0)
		{
			_putchar(str[length]);
		}
		length++;
	}
	_putchar('\n');
}
