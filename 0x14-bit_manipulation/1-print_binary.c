#include "holberton.h"
/**
 * print_binary - Prints the binary representation of a number
 * @n: number to print in binary
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	int bit, c, size = 0;
	unsigned long int decimal = n;

	if (n == 0)
		_putchar('0');

	while (decimal)
	{
		size++;
		decimal >>= 1;
	}

	c = size - 1;

	for (; c >= 0; c--)
	{
		bit = n >> c;
			if (bit & 1)
				_putchar('1');
			else
				_putchar('0');
	}
}

/*      int c = (int)(8 * sizeof(unsigned long int)) - 1; */
