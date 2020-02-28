#include "holberton.h"
int _prime_number(int number, int div);

/**
 * is_prime_number - function that validates if a prime number
 * @n: number to validate
 * Return:  1 for true, 0 for false
 **/

int is_prime_number(int n)
{
	return (_prime_number(n, 2));
}

/**
 * _prime_number - compare with if a number is prime
 * @number: number
 * @div: examinator(?)
 * Return: 1 for true, 0 for false
 **/

int _prime_number(int number, int div)
{
	if (number <= 2)
	{
		if (number == 2)
			return (1);
		else
			return (0);
	}

	else if (number % div == 0)

		return (0);

	else if ((div * div) > number)

		return (1);

	return (_prime_number(number, div + 1));
}
