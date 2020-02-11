#include "holberton.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: Always 0 (Success)
 */

void times_table(void)
{
/*
	int col;
	int c;
	int out;
	char numeros[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	for (col = 0 ; col < 10 ; col++)
	{
		for (c = 0 ; c < 10 ; c++)
		{
			out = numeros[0] * c;
			_putchar('0' + out);
		}
		_putchar('\n');
	}
*/
	int n, m, out;

	for(n = 0 ; n < 10 ; n++)
	{
		for(m = 0 ; m < 10 ; m++)
		{
			out = n * m;
			_putchar(out + '0');
		}
		_putchar('\n');
	}

}
