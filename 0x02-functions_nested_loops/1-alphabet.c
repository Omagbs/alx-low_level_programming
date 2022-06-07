#include "main.h"

/**
 * print_alphabet - A function that prints alphabet, in lower case followed by a new line
 * Return: Nothing.
 */

void print_alphabet(void)
{
	char lowcase;

	lowcase = 'a';

	while (lowcase <= 'z')
	{
		_putchar(lowcase);
		lowcase++;
	}
	_putchar('\n');
}
