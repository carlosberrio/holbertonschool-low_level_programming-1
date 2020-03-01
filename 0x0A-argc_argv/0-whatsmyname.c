#include <stdio.h>

/**
 * main - Write a program that prints its name, followed by a new line.
 * @argc: arguments count.
 * @argv: array of strings.
 * Return: Always 0.
 */

int main(__attribute__ ((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
