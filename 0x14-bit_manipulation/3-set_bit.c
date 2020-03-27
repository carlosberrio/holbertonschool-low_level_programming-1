#include "holberton.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to the number to change
 * @index: position starting from 0 of the bit you want to get
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int new_value;

	if (index > (8 * sizeof(unsigned long int)) - 1)
		return (-1);

	new_value = (1 << index) | *n;

	*n = new_value;

	return (1);

}
/**
 * n - 1024 given index = 5
 * n in bin   = 0100 0000 0000
 * 1 in 5 pos = 0000 0010 0000
 * '|' OR OPE = 0100 0010 0000
 * n is now = 1056
 */
