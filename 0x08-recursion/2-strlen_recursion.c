#include "holberton.h"

/**
 * _print_rev_recursion - prints a string in reverse.
 *@s: given string to print.
 * Return: string or null
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion (s + 1));
}
