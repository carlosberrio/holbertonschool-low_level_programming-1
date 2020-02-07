#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;
	char chZ;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}

	for (chZ = 'A' ; chZ <= 'Z' ; chZ++)
	{
		putchar(chZ);
	}
	putchar('\n');
	return (0);
}
