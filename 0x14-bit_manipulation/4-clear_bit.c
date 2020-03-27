#include "holberton.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the number to change
 * @index: position starting from 0 of the bit you want to get
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int new_value;

	if (index >= (8 * sizeof(unsigned int)) - 1)
		return (-1);

	new_value = *n & (~(1 << index));

	*n = new_value;

	return (1);

}
/**
 * n - 98 given index = 1
 * shift n (<<1) mask = 0000 0010
 *
 * '~' complement ope = 1111 1101
 * 98 in bin          = 0110 0010
 *                      _________
 * 'AND' operator '&' = 0110 0000
 * n is now = 96
 */
