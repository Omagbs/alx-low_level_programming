#include "main.h"

/**
 * print_square - Write a function that prints a square,
 * followed by a new line.
 * @size: An input integer
 * Return: Always 0
 */

void print_square(int size)
{
	int row, column;

	if (size > 0)
	{
		for (row = 0; row < size; row++)
		{
			for (column = 0; column < size; column++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
