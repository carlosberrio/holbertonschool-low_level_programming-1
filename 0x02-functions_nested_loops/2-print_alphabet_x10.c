#include "holberton.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase ten times
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char letter;
	int count;

	count = 0;
	while (count <= 9)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		count++;
		_putchar('\n');
	}
}
