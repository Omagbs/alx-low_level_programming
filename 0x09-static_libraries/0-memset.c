#include "main.h"

/**
 * _memset - fill n bytes of memory with a constant value
 * @s: pointer to memory area
 * @b: constant value
 * @n: number of bytes to fill
 * Return: memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	int size = n;

	if (size > 0)
	{
		int x = 0;

		while (x < size)
		{
			s[x] = b;
			x++;
		}
	}
	return (s);
}
