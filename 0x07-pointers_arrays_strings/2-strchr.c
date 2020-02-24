#include "holberton.h"
/**
 * *_strchr - locates a character in a string.
 * @s: pointer to the given string
 * @c: matched character
 * Return: pointer to the 1st occurrence of the char c in the string s,
 * or NULL if the char is not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0 ; s[i] ; i++)
	{
		if (s[i] == c)
		{
			break;
		}
	}
	return (s[i] == c ? (s + i) : '\0');
}
