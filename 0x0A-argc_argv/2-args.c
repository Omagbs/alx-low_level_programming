#include "main.h"
#include <stdio.h>

/**
 * main - print each argument passed to program on a line
 * @argc: argument counter
 * @argv: pointer to array of arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
		prinf("%s\n", argv[i++]);
	return (0);
}
