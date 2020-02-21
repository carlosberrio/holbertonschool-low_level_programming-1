#include "holberton.h"

/**
 * *leet - Function that reverses the content of an array of integers.
 * @str: strings character to change
 * Return: char
 */
char *leet(char *str)
{
	int ch, c;

	char mayus[] = "AEOLT";
	char minus[] = "aeolt";
	char numbers[] = "43017";

       	for (ch = 0 ; str[ch] != '\n' ; ch++)
	{
		for (c = 0 ; c < 5 ; c++)
		{
			if (str[ch] == mayus[c] || str[ch] == minus[c])
				str[ch] = numbers[c];
		}
	}
	return (str);
}
