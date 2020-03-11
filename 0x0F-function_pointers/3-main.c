#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - calculator
 * @argc: number of arguments
 * @argv: arguments
 * Return: Always 0 success.
 */

int main(int argc, char *argv[])
{
	int (*oper_function)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	oper_function = get_op_func(argv[2]);

	if (oper_function == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", oper_function(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
