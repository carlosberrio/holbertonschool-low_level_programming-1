#include "holberton.h"
int _root(int root, int n);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0)
		return (0);

	else if (n == 1)
		return (1);

	else
		return (_root(1, n));
}

/**
 * _root - calculates a possible root
 *@n: number to calculate the square
 *@root: result
 * Return: square root
 */

int _root(int root, int n)
{
	if (root == n)
		return (-1);

	if (root * root != n)
	{
		++root;
		root = _root(root, n);
	}

	return (root);
}
