#include "holberton.h"

/**
 * _isdigit - function that checks for a digit.
 * @c: input integer
 * Return: Always 1 (Success)
 */

int _isdigit(int c)
{

	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
