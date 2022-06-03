#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lowcase = 'a';

	while (lowcase <= 'z')
	{
		if ((lowcase != 'q') && (lowcase != 'e'))
		{
			putchar(lowcase);
		}
		lowcase++;
	}
	putchar('\n');

	return (0);
}
