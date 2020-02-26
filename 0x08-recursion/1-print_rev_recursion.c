#include "holberton.h"

/**
 * _print_rev_recursion - prints a string in reverse.
 *@s: given string to print.
 * Return: string or null
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
