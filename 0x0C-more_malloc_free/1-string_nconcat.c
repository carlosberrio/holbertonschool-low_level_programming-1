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
 * *string_nconcat - concatenates two strings
 * to the allocated memory
 * @s1: first string
 * @s2: second string
 * @n: n bytes to copy from s2
 * Return: pointer to the new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int c, d, s1_size, s2_size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_size = _strlen(s1);
	s2_size = _strlen(s2);

	if (n > s2_size)
		n = s2_size;

	str = malloc(sizeof(char) * (s1_size + n) + 1);

	if (str == NULL)
		return (NULL);

	for (c = 0; c < s1_size; c++)
	{
		str[c] = s1[c];
	}
	for (d = 0; d < n; d++)
	{
		str[c + d] = s2[d];
	}
	str[c + d + 1] = '\0';

	return (str);
}
