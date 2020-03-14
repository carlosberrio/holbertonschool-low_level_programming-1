#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: number of parameters
 * Return: sum of all numbers passed or 0 if n is = 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int c, sum;
	va_list nums;

	va_start(nums, n);

	if (n == 0)
		return (0);

	sum = 0;

	for (c = 0; c < n; c++)
	{
		sum += va_arg(nums, int);

	}
	va_end(nums);

	return (sum);
}
