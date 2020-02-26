#include "holberton.h"

/**
 * factorial - returns the factorial of a given number
 * Factorial of a non-negative integer, is multiplication of all integers
 * smaller than or equal to n
 *@n: factorial number
 * Return: -1 to indicate an error, 1 if n is 1 or factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	else
		return (n * factorial(n - 1));
}
