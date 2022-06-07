#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times.
 *
 * Return: Nothing.
 */

void print_alphabet_x10(void)
{
	char low;

	int i = 0;

	while (i < 10)
	{	
		low = 'a';

		while (low <= 'z')
			{
				_putchar(low);
				low++;
			}
		_putchar('\n');
		i++;
	}
}
