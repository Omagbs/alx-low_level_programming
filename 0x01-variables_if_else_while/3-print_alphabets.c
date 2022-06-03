#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	char alphalow = 'a';
	char alphahigh = 'A';

	while (alphalow <= 'z')
	{
		putchar(alphalow);
		alphalow++;
	}
	while (alphahigh <= 'Z')
	{
		putchar(alphahigh);
		alphahigh++;
	}
	putchar('\n');
	return (0);
}
