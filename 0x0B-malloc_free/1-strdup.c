#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to duplicateReturn: pointer to duplicated string in allocated memory
 * Return: pointer to duplicated string in allocated memory
 */

char *_strdup(char *str)
{
	int i = 0;

	char *arr;

	int len = 0;

	if (str ==  NULL)
	{
		return (0);
	}
	while (*(str + i))
	{
		i++, len++;
	}

	arr = malloc(sizeof(char) * len);

	if (arr == NULL)
	{
		return(NULL);
	}

	int j = 0;

	while (j < len)
	{
		*(arr + j) = *(str + j);
		j++;
	}
	return (arr);
}
