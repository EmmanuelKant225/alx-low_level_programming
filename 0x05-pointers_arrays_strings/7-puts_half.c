#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * followed by a new line
 * @str: string input
 */
void puts_half(char *str)
{
	int i, n, size;

	size = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		size++;
	}

	n = (size / 2);

	if ((len % 2) == 1)
	{
		n = ((len + 1) / 2);
	}

	for (i = n; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
