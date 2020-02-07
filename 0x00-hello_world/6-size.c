#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	char charType;
	int intType;
	long longinType;
	long long longLongIngType;
	float floatType;

	printf("Size of a char: %ld byte(s)\n", sizeof(charType));
	printf("Size of an int: %ld bytes\n", sizeof(intType));
	printf("Size of a long int: %ld byte(s)\n", sizeof(longinType));
	printf("Size of a long long int: %ld bytes(s)\n", sizeof(longLongIngType));
	printf("Size of float: %ld bytes(s)\n", sizeof(floatType));
	return (0);
}
