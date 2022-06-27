#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, i = 0, j = 0, k = 0, l = 0;
	int sum;
	char *concat;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	
	while (*(s1 + i))
	{
		i++, len1++;
	}
	while (*(s2 + j))
	{
		j++, len2++;
	}

	sum = len1 + len2;

	concat = malloc(sizeof(char) * sum);

	if (concat == NULL)
	{
		return (NULL);
	}
	while (k < len1)
	{
		*(concat + k) = *(s1 + k);
		k++;
	}
	while (l < len2)
	{
		*(concat + k) = *(s2 + l);
		k++, l++;
	}
	return (concat);
}

