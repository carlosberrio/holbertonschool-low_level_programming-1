#include "holberton.h"

/**
 * *rot13 - Function that encode a string in rot13
 * @str: strings character to change
 * Return: encripted string
 */
char *rot13(char *str)
{
	int ch, c;
	char abc[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char abc13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (ch = 0 ; str[ch] != '\0' ; ch++)
	{
		for (c = 0 ; abc[c] != '\0' ; c++)
		{
			if (str[ch] == abc[c])
			{
				str[ch] = abc13[c];
				break;
			}
		}
	}
	return (str);
}
