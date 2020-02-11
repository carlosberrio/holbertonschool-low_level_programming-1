#include "holberton.h"

/**
 * main - Function that prints the string Holberton
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char holb[10] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n', '\n'};
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		_putchar(holb[i]);
	}

	return (0);
}
