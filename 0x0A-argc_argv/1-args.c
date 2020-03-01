#include <stdio.h>

/**
 * main - Write a program that prints its name, followed by a new line.
 * @argc: arguments count.
 * @argv: array of strings.
 * Return: Always 0.
 */

int main(int argc, __attribute__ ((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
