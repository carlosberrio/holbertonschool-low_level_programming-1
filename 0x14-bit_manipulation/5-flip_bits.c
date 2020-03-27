#include "holberton.h"

/**
 * flip_bits - Returns the number of bits you would need to flip
 * to get from one number to another
 * @n: number to compare with m
 * @m: number to compare wit n
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int comp;
	unsigned int bits = 0;

	comp = n ^ m;

	while (comp)
	{
		bits = bits + (comp & 1);
		comp = comp >> 1;
	}

	return (bits);
}
