#include "holberton.h"

/**
 * more_numbers - Prints 10 times the numbers from 0 to 14
 *
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
	int num;
	int count;

	count = 0;
	while (count < 11)
	{
		num = 0;

		while (num < 15)
		{
			if(num >= 10)
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
			num++;
		}
		count++;
		_putchar('\n');
	}
}
