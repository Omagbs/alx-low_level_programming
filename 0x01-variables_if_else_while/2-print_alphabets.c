#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0 (Success)
 */

int main(void)
{
	char alphalow = 'a';

	while (alphalow <= 'z')
	{
		putchar(alphalow);
		alphalow++;
	}
	putchar('\n');
	return (0);
}
