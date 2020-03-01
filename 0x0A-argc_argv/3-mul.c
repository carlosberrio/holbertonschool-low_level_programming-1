#include <stdio.h>
#include <stdlib.h>
/**
 * main - Write a program that multiplies two numbers.
 * @argc: arguments count.
 * @argv: array of strings.
 * Return: 1 if the program does not receive two arguments or mul result
 */

int main(int argc, char *argv[])
{
	int c, mul = 1;

	if(argc > 1)
	{
		for(c = 1; c < argc; c++)
		{
			mul *= atoi(argv[c]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
	}

	return (1);
}
