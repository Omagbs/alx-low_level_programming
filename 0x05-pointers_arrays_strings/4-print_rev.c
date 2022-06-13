#include "main.h"

/**
* print_rev - a function that prints a string, in reverse, followed by a new line.
* @s - An input string
* Return: Nothing.
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	while ( !(i < 0))
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
