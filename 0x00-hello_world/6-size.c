#include<stdio.h>
/*
 * sizeof evaluates the size of a variable type
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char charType;
	int intType;
	long int longinType;
	long long int longLongIngType;
	float floatType;
/* Printing results */
	
	printf("Size of a char: %ld byte\n"(s), sizeof(charType));
	printf("Size of an int: %ld bytes\n"(s), sizeof(intType));
	printf("Size of a long int: %ld bytes\n"(s), sizeof(longinType));
	printf("Size of a long long int: %ld bytes\n"(s), sizeof(longLongIngType));
	printf("Size of float: %ld bytes\n"(s), sizeof(floatType));
	return (0);
}
