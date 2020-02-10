#include "holberton.h"

/**
 * main - Function that prints the string Holberton
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char holberton[] = "Holberton";
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		_putchar(holberton[i]);
	}
	_putchar('\n');

	return (0);
}
