#include "holberton.h"
int _strlen_recursion(char *s);
int _start_end_comparison(char *string, int start, int end);

/**
 * _strlen_recursion - returns the length of a string
 *@s: given string
 * Return: returns the number of bytes in the string s
 */
int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);

	else
		return (_strlen_recursion(s + 1) + 1);
}

/**
 * _start_end_comparison - Returns if characters matched or not
 * @string: String to iterate
 * @start: Starting pos
 * @end: Ending pos
 * Return: 1 if the string es palindrome or 0 if not
 */

int _start_end_comparison(char *string, int start, int end)
{
	if (start >= end) /* includes odds strings and compares punto retorno */
		return (1);

	if (string[start] == string[end])
		return (_start_end_comparison(string, start + 1, end - 1));

	else
		return (0);
}

/**
 * is_palindrome - Returns 1 if a string is a palindrome and 0 if not.
 * @s: given string to check if is palindrome
 * Return: return of function start_end_comparison
 */
int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);

	return (_start_end_comparison(s, 0, length - 1));
}
