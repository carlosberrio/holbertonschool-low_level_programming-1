#include "holberton.h"

/**
 * *_strcpy - Copy the string pointed to by src, including null byte (\0),
 * @dest: destination
 * @src: source
 * return - destination
 */
char *_strcpy(char *dest, char *src)
{
	int length;

	length = 0;

	while (src[length] != '\0')
	{
		dest[length] = src[length];
		length++;
	}
	dest[length] = src[length];
	return (dest);
}
