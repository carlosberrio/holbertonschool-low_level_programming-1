#include "holberton.h"

/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: input integer
 * Return: Nothing
 * If n is greater than 15 or less than 0 should not print anything
 */

void print_times_table(int n)
{
	int i, j, hundreds, tens, units, num;

	if (n > 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				num = j * i;
				if (num < 10)
					_putchar(num + '0');
				else if (num > 9 && num < 100)
				{
					units = num % 10;
					tens = num / 10;
					_putchar(tens + '0');
					_putchar(units + '0');
				}
				else if (num > 99)
				{
					hundreds = num / 100;
					tens = (num % 100) / 10;
					units = num % 10;
					_putchar(hundreds + '0');
					_putchar(tens + '0');
					_putchar(units + '0');
				}
				if (j <= n - 1)
				{
					_putchar(',');
					_putchar(' ');
					if (i * (j + 1) < 100)
						_putchar (' ');
					if (i * (j + 1) < 10)
						_putchar (' ');
				}
			}
			_putchar('\n');
		}
	}
}
/* stops 1 pos before the last number with 2 or 1 dig 98 < 100 */
/* if (i * (j + 1) < 100) */
