#include <stdlib.h>
#include "holberton.h"

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
 * *string_nconcat - concatenates two strings
 * to the allocated memory
 * @s1: first string
 * @s2: second string
 * @n: n bytes to copy from s2
 * Return: pointer to the new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, size_s1, size_s2, total_size;
	char *new_arr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	size_s1 = _strlen(s1);
	size_s2 = _strlen(s2);

	if (n >= size_s2)
		n = size_s2;

	total_size = size_s1 + n;

	new_arr = malloc((sizeof(char) * total_size) + 1);

	if (new_arr == NULL)
	{
		return (NULL);
	}

	for (i = 0 ; i < size_s1 ; i++)
	{
		new_arr[i] = s1[i];
	}

	for (j = 0 ; j < n ; j++)
	{
		new_arr[i + j] = s2[j];
	}

	new_arr[i + j] = '\0';

	return (new_arr);
}
