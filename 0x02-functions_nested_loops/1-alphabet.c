#include "main.h"
/**
 * main - A function that prints alphabet, in lower case followed by a new line
 *
 * Return: Always 0 (Success)
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
