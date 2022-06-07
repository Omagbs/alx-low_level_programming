#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times.
 *
 * Return: Nothing.
 */

void print_alphabet_x10(void)
{
	char low = 'a';

	for (int i = 0; i <=10; i++)
	{
		while (low <= 'z')
		{
			_putchar(low);
			low++;
		}
		_putchar('\n');
	}
}
