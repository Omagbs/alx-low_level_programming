#include <stdio.h>

/**
 *main - entry point
 *Return: Always 0 (Success)
 */

int main(void)
{
	char base_10 = '0';

	while (base_10 <= '9')
	{
		putchar(base_10);
		base_10++;
	}
	putchar('\n');
	return (0);
}
