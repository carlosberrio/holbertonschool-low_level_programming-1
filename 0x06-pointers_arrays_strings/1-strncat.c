#include "holberton.h"

/**
 * *_strncat - Function that concatenates two strings.
 * @dest: destination string
 * @src: source string
 * @n: n bytes
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len, i;

	dest_len = 0;

	while (dest[dest_len] != '\0')
		dest_len++;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';

	return (dest);
}
