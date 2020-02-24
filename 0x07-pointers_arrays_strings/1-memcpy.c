#include "holberton.h"
/**
 * *_memcpy - copies n bytes from memory area src to memory area dest
 * @dest: pointer to the destination array where the content is to be copied
 * @src: source of data to be copied
 * @n: n of bytes to be copied
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c;
/* unsigned int is needed to do the comparison */
	for (c = 0 ; c < n ; c++)
	{
		dest[c] = src[c];
	}
	return (dest);
}
