#include "holberton.h"
/**
 * print_chessboard - prints the chessboard
 * @a: given array
 */
void print_chessboard(char (*a)[8])
{
	int row, cols;

	for (row = 0 ; row < 8 ; row++)
	{
		for (cols = 0 ; cols < 8 ; cols++)
		{
			_putchar(a[row][cols]);
		}
		_putchar('\n');
	}
}
