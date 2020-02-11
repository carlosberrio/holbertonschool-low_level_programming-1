#include "holberton.h"

/**
 * _is lower function that checks for lowercase character.
 *
 * Return: Always 1 (Success)
 */

int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
