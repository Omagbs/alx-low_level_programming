#include "main.h"

/**
 * print_line - print the character "_" n times to draw a line
 * @n: number of characters to draw
 * Return: Nothing.
 */

void print_line(int n)
{
	int line_times = n;

	for (line_times = n; line_times > 0; line_times--)
	{
		_putchar('_');
	}
	_putchar('\n');
}
