#include <stdio.h>

/**
 *main - entry point
 *Return: Always 0 (Success)
 */

int main(void)
{
	char lowverse = 'z';

	while (lowverse >= 'a')
	{
		putchar(lowverse);
		lowverse--;
	}
	putchar('\n');
	return (0);
}
