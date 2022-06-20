#include "main.h"

/**
 * _strspn - return length of string that matches values consistently
 * @s: string to search
 * @accept: target matches
 * Return: number of bytes consecutively matched
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j;

	int match = 0;

	while (s[i] != '\0')
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				match++;
				break;
			}
			if (accept[j + 1] == '\0' && s[i] != accept[j])
				return (match);
			j++;
		}
		i++;
	}
	return (match);
}

