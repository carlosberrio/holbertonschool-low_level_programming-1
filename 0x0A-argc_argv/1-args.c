#include <stdio.h>

/**
 * main - Prints ONLY the number of arguments passed into it.
 * @argc: arguments count.
 * @argv: array of strings.
 * Return: Always 0.
 */

int main(int argc, __attribute__ ((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
