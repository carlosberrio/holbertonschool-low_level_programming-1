#include "holberton.h"
#include <stdlib.h>

int _strlen(char *s);

/**
 * _strlen - returns the length of a string.
 * @s: string input.
 * Return: length of an string.
 */
int _strlen(char *s)
{
	int length;

	length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}

/**
 * *_strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: new string
 * Return: pointer to a new string which is a duplicate of the string,
 * NULL if str = NULL, NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	int i, size;
	char *new_arr;

	size = _strlen(str) + 1;

	if (str == 0)
	{
		return (NULL);
	}
	new_arr = malloc(size * sizeof(char));
	if (new_arr == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < size ; i++)
	{
		new_arr[i] = str[i];
	}
	new_arr[i] = '\0';
	return (new_arr);
}
