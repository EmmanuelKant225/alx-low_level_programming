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

	for (j = (length - 1); j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
