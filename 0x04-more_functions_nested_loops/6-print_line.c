#include "main.h"

/**
 * print_line - print the character "_" n times to draw a line
 * @n: number of characters to draw
 * Return: Nothing.
 */

void print_line(int n)
{
	int line_times = n;

	for (times = n; times > 0; times--)
	{
		_putchar('_');
	}
	_putchar('\n');
}
