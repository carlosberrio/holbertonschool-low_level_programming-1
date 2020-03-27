#include "holberton.h"

/**
 * get_endianness - determines if the machine is big or little endian
 *
 * Description: Determines if the machine is a big or little endian
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int n = 1;
	char *str = (char *)&n;

	return ((*str) ? 1 : 0);
}
