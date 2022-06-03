#include <stdio.h>

/**
 *main - entry point
 *Return: Always 0 (Success)
 */

int main(void)
{
	int num = '0';

	char alpha='a';

	while (num <= 9)
	{
		putchar(num);
		putchar++;
	}
	while (alpha <= 'f')
	{
		putchar(alpha);
		putchar++;
	}
	putchar('\n');
	return (0);
}
