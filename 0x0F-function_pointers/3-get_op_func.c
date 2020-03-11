#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * get_op_func - is the operator passed as argument to the program
 * @s: given string
 * Return: pointer to the func that corresponds to the oper given as a param
 */
int (*get_op_func(char *s))(int, int)
{ /* This is the fuc**** proto for the main function! */

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	while (ops[i].op != NULL)
	{
		if (strcmp(s, ops[i].op) == 0)
		{/* *s == *ops[i].op && s[1] == 0) */
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
