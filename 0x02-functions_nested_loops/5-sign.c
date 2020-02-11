#include "holberton.h"

/**
 * print_sign - function that checks for pos or neg nums.
 * @n: input integer
 * Return: Always 1 (Success)
 */

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
