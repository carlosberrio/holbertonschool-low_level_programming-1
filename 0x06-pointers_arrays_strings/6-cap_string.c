#include "holberton.h"

/**
 * *cap_string - Function that capitalize
 * @str: string
 * Return: capitalize lowercase
 */
char *cap_string(char *str)
{
	int ch, c;

	char sign[] = {' ', '\t', '\n', ',', ';', '.', '!', '?',
		       '"', '(', ')', '{', '}'};

	if (str[0] >= 97 && str[0] <= 122)
	{
		str[0] -= 32;
	}

	for (ch = 0 ; str[ch] != '\0' ; ch++)
	{
		for (c = 0 ; c < 12 ; c++)
		{
			if (str[ch] == sign[c])
			{
				if (str[ch + 1] >= 97 && str[ch + 1] <= 122)
				{
					str[ch + 1] -= 32;
				}
			}
		}

	}
	return (str);
}
