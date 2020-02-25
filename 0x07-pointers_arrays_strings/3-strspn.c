#include "holberton.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be scanned
 * @accept: string containing the characters to match.
 * Return: numbers of chars found
 * the prefix substring or initial segment is defined by the first char diff
 * from the characters to match
 * break is a control statement which is used to
 * terminate the loop, j loop in this case.
 * Without 'break' el loop para cuando j está en la últ
 * pos y pasa a la sig línea, al if, NO al 'for'
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, count;

	count = 0;

	for (i = 0 ; s[i] ; i++)
	{
		for (j = 0 ; accept[j] ; j++)
		{
			if (s[i] == accept[j])
			{
				++count;
				break;
			}
		}

		if (accept[j] == '\0')
		{
			return (count);
		}
	}
	return (count);
}
