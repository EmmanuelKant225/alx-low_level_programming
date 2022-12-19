#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 * followed by a new line.
 * @s: string input
 */
void print_rev(char *s)
{
	int length = 0;
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		i++;
		length++;
	}

	for (j = 0; j <= length; j++)
	{
		_putchar(s[length - j]);
	}
}
