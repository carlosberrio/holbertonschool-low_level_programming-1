#include "holberton.h"
#include <stdlib.h>
#include <string.h>

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
	unsigned int i, s1_size;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	s1_size = strlen(s1);

	str = malloc(sizeof(s1_size) + n + 1);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < (s1_size + n); i++)
	{
		if (i < s1_size)
			str[i] = s1[i];
		else
			str[i] = s2[i - s1_size];
	}
	str[i + 1] = '\0';

	return (str);
}
