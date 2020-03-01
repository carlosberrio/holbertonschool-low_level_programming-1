#include <stdio.h>

/**
 * main - program that prints all arguments it receives.
 * @argc: arguments count.
 * @argv: array of strings.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int c;

	while (c < argc)
	{
		printf("%s\n", argv[c]);
		++c;
	}

	return (0);
}
