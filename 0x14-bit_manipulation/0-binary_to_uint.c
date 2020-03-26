#include "holberton.h"

/**
 * binary_to_uint - Function that converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number, or 0 if there is one or more
 * chars in the string b that is not 0 or 1, or if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0, length = 0, exp = 0;

	while (b[length])
		length++;

	while (length)
	{
		if (!(b[length - 1] == '1' || b[length - 1] == '0'))
			return (0);

		decimal += _pow_recursion(2, exp) * (b[length - 1] - '0');

		exp++;
		length--;
	}

	return (decimal);

}

/**
 * _pow_recursion - returns the value of 'x' raised to the power of 'y'
 *@x: base number
 *@y: exponent number
 * Return: -1 if 'y' is lower than 0 or the math operation
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
