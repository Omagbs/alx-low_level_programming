#include "main.h"

/**
 * _puts - a function that prints a string, followed by a new line, to stdout
 * @str: An input string
 * Return: Nothing.
 */

void _puts(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
