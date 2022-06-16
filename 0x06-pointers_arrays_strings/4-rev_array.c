#include "main.h"

/**
 * reverse_array - a string that reverses arrays of integers
 * @a: input array
 * @n: number of element in the array
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int aux, start = 0;

	int last = n - 1;

	while (start < last)
	{
		aux = *(a + start);
		*(a + start) = *(a + last);
		*(a + last) = aux;
		start++, last--;
	}
}
