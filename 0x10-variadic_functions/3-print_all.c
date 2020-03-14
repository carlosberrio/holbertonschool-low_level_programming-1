#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed to the function
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	fts opts[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	int c, d;
	char *separator = "";
	va_list args;

	va_start(args, format);

	d = 0;

	while (format && format[d])
	{
		c = 0;
		/* Accedo a la 1ra pos del array para ver si existe */
		while (opts[c].spec != NULL)
		{
			if (*opts[c].spec == format[d])
			{
				printf("%s", separator);
				opts[c].f(&args);
				separator = ", ";
				break;
			}
			c++;
		}
		d++;
	}

	printf("\n");

	va_end(args);
}

/**
 * print_char - print element according its specifier
 * @args: arguments list
 * Return: Nothing.
 */

void print_char(va_list *args)
{ /*think about how we declare functions, ome */
	printf("%c", va_arg(*args, int));
} /* *arg para desrefe y trabajar con el dato directamente */

/**
 * print_int - print element according its specifier
 * @args: arguments list
 * Return: Nothing.
 */

void print_int(va_list *args)
{
	printf("%d", va_arg(*args, int));
}

/**
 * print_float - print element according its specifier
 * @args: arguments list
 * Return: Nothing.
 */

void print_float(va_list *args)
{
	printf("%f", va_arg(*args, double));
}

/**
 * print_string - print element according its specifier
 * @args: arguments list
 * Return: Nothing.
 */

void print_string(va_list *args)
{
	char *string;

	string = va_arg(*args, char *);
	if (string == NULL)
		string = "(nil)";
	printf("%s", string);
}
