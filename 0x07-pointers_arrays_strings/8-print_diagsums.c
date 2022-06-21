#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: a square matrix of integers
 * @size: an input integer with the size of matrix
 * Return: Nothing
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0;

	int sum2 = 0;

	int row = 0, i = 0;

	while(row < size)
	{
		i = (row * size) + row;
		sum1 += a[i];
		row++;
	}

	row = 1;

	while (row <= size)
	{
		i = (row * size) - row;
		sum2 += a[i];
	}
	printf("%d, %d\n", sum1, sum2);
}
