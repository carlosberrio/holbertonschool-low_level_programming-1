#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - Concatenates all the arguments of the program
 * @ac: number of arguments
 * @av: array of arguments
 * Return: pointer to the new array of chars or NULL if it fails
 */

char *argstostr(int ac, char **av)
{

	int c, d, ch = 0, full_length = 0;
	char *new_array = NULL;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (c = 0 ; c < ac ; c++)
	{
		for (d = 0; av[c][d] != '\0'; d++)
		{
			full_length += 1;
		}
		full_length += 1; /* New Line Char */
	}

	new_array = malloc(sizeof(char) * full_length + 1); /* plus '\0' */

	if (new_array == NULL)
		return (NULL);

	for (c = 0 ; c < ac ; c++)
	{
		for (d = 0 ; av[c][d] != '\0' ; d++)
		{
			new_array[ch] = av[c][d];
			ch++;
		}

		new_array[ch] = '\n';
		ch++;
	}
	new_array[ch] = '\0';

	return (new_array);
}
