#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

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
	unsigned int i, size_s1, size_s2, total_size;
	char *new_arr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	size_s1 = 0;
	size_s2 = 0;

	for (i = 0; s1[i] != '\0'; i++)
		size_s1 += 1;
	for (i = 0; s2[i] != '\0'; i++)
		size_s2 += 1;

	if (n < size_s2)
		total_size = size_s1 + n;
	if (n >= size_s2)
		total_size = size_s1 + size_s2;

	new_arr = malloc((total_size * sizeof(char)) + 1);
	if (new_arr == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < size_s1 ; i++)
	{
		new_arr[i] = s1[i];
	}
	for (i = 0 ; i < size_s2 ; i++)
	{
		new_arr[size_s1 + i] = s2[i];
	}
	new_arr[total_size] = '\0';
	return (new_arr);
}
