#include "main.h"

/**
 * print_array - a function that prints n elements of an array of integers
 * @a: array
 * @n: size of array
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
	_putchar('\n');
}
