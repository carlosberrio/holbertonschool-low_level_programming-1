#include "holberton.h"

/**
 * *_strncpy - Function that copies a string.
 * @dest: destination string
 * @src: source string
 * @n: n bytes
 * Return: dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int ch;

	ch = 0;

	while (ch < n && src[ch] != '\0')
	{/* copies a string. */
		dest[ch] = src[ch];
		ch++;
	}
	while (ch < n)
	{/* adds nullbytes to des to ensure that total n bytes are written. */
		dest[ch] = '\0';
		ch++;
	}

	return (dest);
}
