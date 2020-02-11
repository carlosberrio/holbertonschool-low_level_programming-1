#include "holberton.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: Always 0 (Success)
 */

void times_table(void)
{
	int n, m, out, dec, units;

	for (n = 0 ; n < 10 ; n++)
	{
		for (m = 0 ; m < 10 ; m++)
		{
			out = n * m;
			if (out > 9)
			{
				dec = out / 10;
				units = out % 10;
				_putchar(dec + '0');
				_putchar(units + '0');
			}
			else if (out < 99)
			{
				_putchar(out + '0');
			}
			if (m < 9)
			{
				_putchar(44);
				_putchar(' ');
				if (n * (m + 1) < 10)
				{
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
