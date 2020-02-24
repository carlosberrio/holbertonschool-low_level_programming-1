#include "holberton.h"
/**
 * *_memset - fills memory with a constant byte.
 * @s: starting address of memory to be filled
 * @b: value to be filled
 * @n: n of bytes to be filled starting from s
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c;
/* unsigned int is needed to do the comparison */
	for (c = 0 ; c < n ; c++)
	{
		s[c] = b;
	}
	return (s);
}
