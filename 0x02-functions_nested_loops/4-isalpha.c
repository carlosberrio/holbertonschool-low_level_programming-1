#include "holberton.h"

/**
 * _isalpha - function that checks for letter characters.
 * @c: input integer
 * Return: Always 1 (Success)
 */

int _isalpha(int c)
{

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
