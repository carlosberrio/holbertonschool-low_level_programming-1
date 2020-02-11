#include "holberton.h"

/**
 * _abs - function that returns an absolute value
 * @n: input integer
 * Return: absolute value of integer
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}
	return (n);
}
