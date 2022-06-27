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
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	unsigned int len1 = 0, len2 = 0, i = 0, j = 0;

	while (*(s1 + i))
	{
		i++, len1++;
	}
	while (*(s2 + j))
	{
		j++, len2++;
	}
	len2++;

	unsigned int sum = len1 + len2;

	char *concat

	concat = malloc(sizeof(char) * sum);

	if (concat == NULL)
	{
		return (NULL);
	}

	unsigned int k = 0, int l = 0;

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

