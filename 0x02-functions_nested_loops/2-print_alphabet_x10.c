#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times.
 *
 * Return: Nothing.
 */

void print_alphabet_x10(void)
{
	char low = 'a';

	int i = 0;

	while (i <= 10)
	{
		while (low <= 'z')
		{
			_putchar(low);
			low++;
		}
		_putchar('\n');
		i++;
	}
}
