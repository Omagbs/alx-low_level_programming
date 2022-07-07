#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print varying amount of numbers
 * @separator: delimiter
 * @n: amount of arguments in list
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	if (n > 0)
	{
		va_start(ap, n);

		for (i = 1; i <= n; i++)
		{
			printf("%d", va_arg(ap, int));
			if (i != n && separator != NULL)
				{
					printf("%s", separator);
				}
		}
		va_end(ap);
	}
	printf("\n");
}
