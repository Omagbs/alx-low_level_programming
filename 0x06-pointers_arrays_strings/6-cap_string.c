#include "main.h"

/**
 * check_seperators - Separators of words: space, tabulation, new line,
 * ,, ;, ., !, ?, ), (, \". {, and }
 * @c: an input character
 * Return: 1 if seperator, 0 otherwise
 */

int check_seperators(char c)
{
	int i = 0;

	char seperators[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'}
	
	while (i < 13)
	{
		if (c == seperators[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

/**
 * cap_string - capitalize first letter of each word
 * @s: string to manipulate
 * Return: String
 */

char *cap_string(char *s)
{
	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] = s[i] - 'a' + 'A';

	while (s[i] != '\0')
	{
		if (check_seperators(s[i]) && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
		{
			s[i + 1] = s[i + 1] - 'a' + 'A';
		}
		i++;
	}
	return (s);
}
