#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_array - create array of chars and initialize with a specific char
 * @size: size of array
 * @c: fill array values with this char
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *m;

	m = malloc(sizeof(char) * size);

	if (size <= 0)
	{
		return (0);
	}
	else if (m == NULL)
	{
		return (NULL);
	}

	unsigned int i = 0;

	while (i < size)
	{
		*(m + i) = c;
		i++;
	}
	*(m + i) = '\0';
	return (m);
}

