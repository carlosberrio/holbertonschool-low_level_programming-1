#include "holberton.h"

/**
 * _puts - prints a string, followed by a new line.
 * @str: string input.
 * Return: length of an string.
 */
void _puts(char *str)
{
	int length;

	length = 0;

	while (str[length] != '\0')
	{
		_putchar(str[length]);
		length++;
	}
	_putchar('\n');
}
