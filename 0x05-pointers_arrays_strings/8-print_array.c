#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints n elements of an array of integers
 * @a: array
 * @n: size of array
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int i = 0;

	while(i < n)
	{
		if (i < (n - 1))
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
		i++;
	}
	_putchar('\n');
}
