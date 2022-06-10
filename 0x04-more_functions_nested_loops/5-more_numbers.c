#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14
 * Return: Always 0
 */

void more_numbers(void)
{
	char i;

	int counter;

	for (counter = 1; counter <= 10; counter++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i / 10 > 0)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_puchar('\n');
	}
}
