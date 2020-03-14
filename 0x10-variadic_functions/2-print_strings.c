#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line
 * @separator:  string to be printed between the strings
 * @n:  number of strings passed to the function
 * Return: strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int c;
	va_list strings;
	char *string;

	va_start(strings, n);

	for (c = 0; c < n; c++)
	{
		string = va_arg(strings, char*);

		if (string)
		{
			printf("%s", string);

			if (c < (n - 1) && separator)
			{
				printf("%s", separator);
			}
		}
		else
		{
			printf("%s", "(nill)");
		}
	}
	printf("\n");
	va_end(strings);
}
