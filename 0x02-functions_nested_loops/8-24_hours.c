#include "holberton.h"

/**
 * jack_bauer - Function that prints every minute of the day
 *
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
	int hora1;
	int hora2;
	int min1;
	int min2;

	for (hora1 = 48 ; hora1 <= 50 ; hora1++)
	{
		for (hora2 = 48 ; hora2 <= 57 ; hora2++)
		{
			for (min1 = 48 ; min1 <= 53 ; min1++)
			{
				for (min2 = 48 ; min2 <= 57 ; min2++)
				{
					if (hora1 != 50 || hora2 < 52)
					{
						_putchar(hora1);
						_putchar(hora2);
						_putchar(58);
						_putchar(min1);
						_putchar(min2);
						_putchar('\n');
					}
				}
			}
		}
	}
}
