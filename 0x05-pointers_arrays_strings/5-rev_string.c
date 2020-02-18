#include "holberton.h"

/**
 * rev_string - Function that reverses a string.
 * @s: string input.
 * Return - a reverse string
 */
void rev_string(char *s)
{
	int length, counter;
	char *start, *end, temporal;

	length = 0; /* at the end of the while loop l = 9 in this case */
	start = s;
	end = s;

	while (s[length] != '\0')
	{
		length++;
	}
	for (counter = 0; counter < length - 1; counter++)
	{
		end++; /* end termina en la pos 7 del puntero */
	}
	for (counter = 0; counter < length / 2; counter++)
	{
		temporal   = *end;
		*end   = *start;
		*start = temporal;
		start++;
		end--;
	}
}
