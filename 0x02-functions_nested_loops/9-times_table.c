#include "main.h"

/**
 * times_table - Check description
 * Description: It prints 9 times table starting with 0
 * Return: Nothing.
 */

void times_table(void)
{
	int row = 0;

	int column;

	while (row <= 9)
	{
		column = 0;

		while (column <= 9)
		{
			int product = row * column;

			if (column == 0)
			{
				_putchar('0' + product);
			}
			else if (product <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0'+ product);
			}
			else if (product > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (product / 10));
				_putchar('0' + (product % 10));
			}
		column++;
		}
	_putchar('\n');
	row++;
	}
}	
