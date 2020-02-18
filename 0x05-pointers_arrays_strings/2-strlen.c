#include "holberton.h"

/**
 * _strlen - returns the length of a string.
 * @s: string input.
 * Return: length of an string.
 */
int _strlen(char *s)
{
	int length;
	char l = *(s + 0);

	length = 0;

	while (l != '\0')
	{
		length = l;
		l++;
	}

	return (length);
}
