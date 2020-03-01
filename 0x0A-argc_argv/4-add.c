#include <stdio.h>
#include <stdlib.h>
/**
 * main - Write a program that adds positive numbers.
 * @argc: arguments count.
 * @argv: array of strings.
 * ((int)argv[c][d] do cast from char to int.
 * V2 = argv[c][d] < '0' || argv[c][d] > '9'
 * V3 = int _isdigit(char *str)
 * Return: 1 if the program does not receive two arguments or mul result
 */

int main(int argc, char *argv[])
{
	int c, d, sum;

	sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (c = 1; c < argc; c++)
	{
		for (d = 0; argv[c][d] != '\0'; d++)
		{
			if ((int)argv[c][d] < 48 || (int)argv[c][d] > 57)
			{
				printf("Error\n");
				return (1);
			}

		}
		sum += atoi(argv[c]);
	}
	printf("%d\n", sum);
	return (0);
}
