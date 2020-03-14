#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator:  string to be printed between numbers
 * @n: integers passed to the function
 * Return: sum of all numbers passed or 0 if n is = 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int c;
	va_list nums;

	va_start(nums, n);

	for (c = 0; c < n; c++)
	{
		printf("%d", va_arg(nums, int));

		if (c != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(nums);
}
