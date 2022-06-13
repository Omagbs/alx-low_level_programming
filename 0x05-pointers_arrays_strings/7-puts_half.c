#include "main.h"

/**
 * _strlen - prints the length of a string
 * @s: takes the input of the string
 * Return: length.
 */

int _strlen(char *s)
{
	int len = 0;

	int i = 0;

	while (s[len] != '\0')
	{
		i++;
		len++;
	}
	return (i);
}

/**
 * puts_half - prints the second half of a string
 * @str: takes the input of the string
 * Return: Nothing
 */

void puts_half(char *str)
{
	int len = _strlen(str);

	if (len % 2 == 0)
	{
		int half = len / 2;

		while (str[half] != '\0' && half < len)
		{
			_putchar(str[half]);
			half++;
		}
		_putchar('\n');
	}
	else
	{
		int half = (len / 2) + 1;

		while (str[half] != '\0' && half < len)
		{
			_putchar(str[half]);
			half++;
		}
		_putchar('\n');
	}
}
