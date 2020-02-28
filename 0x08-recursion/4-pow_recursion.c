#include "holberton.h"

/**
 * _pow_recursion - returns the value of 'x' raised to the power of 'y'
 *@x: base number
 *@y: exponent number
 * Return: -1 if 'y' is lower than 0 or the math operation
 * better way due to less iterations
 * int pow = power(x, n / 2);
 * if (n & 1) // if y is odd
 * re.turn x * pow * pow;
 * else 'y' is even
 * re.turn pow * pow;
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
