#include "holberton.h"
/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: string to be scanned
 * @accept: set of bytes to matched
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found, will print part of the str that matches.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0 ; s[i] ; i++)
	{
		for (j = 0 ; accept[j] ; j++)
		{
			if (s[i] == accept[j])
			{/* (s + 1) define la pos en la str to print > &s[i] */
				return (s + i);
			}
		}
	}
	return (0);
}
