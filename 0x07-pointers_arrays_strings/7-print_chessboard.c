#include "main.h"

/**
 * print_chessboard - print chessboard given set 2D array
 * @a: 2D array
 * Return: Nothing
 */

void print_chessboard(char (*a)[8])
{
	int row = 0, column;

	while (row < 8)
	{
		column = 0;

		while (column < 8)
		{
			_putchar(a[row][column]);
			column++;
		}
		row++;
		_putchar('\n');
	}
}
