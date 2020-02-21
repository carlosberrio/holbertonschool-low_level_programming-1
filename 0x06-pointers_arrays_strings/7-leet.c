#include "holberton.h"

/**
 * *leet - Function that encode a string in leet
 * @str: strings character to change
 * Return: encripted string
 */
char *leet(char *str)
{
	int ch, c;

	char mayus[] = "AEOLT";
	char minus[] = "aeolt";
	char numbers[] = "43017";

	for (ch = 0 ; str[ch] != '\0' ; ch++)
	{
		for (c = 0 ; c < 5 ; c++)
		{
			if (str[ch] == mayus[c] || str[ch] == minus[c])
				str[ch] = numbers[c];
		}
	}
	return (str);
}
