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

	while ((s1[ch] != '\0' && s2[ch] != '\0') && s1[ch] == s2[ch])
	{
		ch++;
	}
	return (s1[ch] - s2[ch]);
}
