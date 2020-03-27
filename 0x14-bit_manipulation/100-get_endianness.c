#include "holberton.h"

/**
 * get_endianness - Function that checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int n = 1;
	char *str = (char *)&n;

	return ((*str) ? 1 : 0);
}
