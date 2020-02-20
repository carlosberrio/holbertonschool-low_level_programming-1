#include "holberton.h"

/**
 * *_strcmp - Function that compares two strings.
 * @s1: first string
 * @s2: second string
 * Return: equal, greater than
 */
int _strcmp(char *s1, char *s2)
{
	int ch;

	ch = 0;

	while (s1[ch] == s2[ch])
	{
		if (s1[ch] == '\0' || s2[ch] == '\0')
			break;
		ch++;
	}

	if (s1[ch] == '\0' && s2[ch] == '\0')
	{
		return (0);

	}
	else if (s1[ch] < s2[ch])
	{
		return (-15);
	}
	else
	{
		return (15);
	}
}
