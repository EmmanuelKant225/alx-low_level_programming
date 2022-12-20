#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * followed by a new line
 * @str: string input
 */
void puts_half(char *str)
{
	int i;
	int size = 0;

	while (str[size] != '\0')
	{
		size++;
	}

	if (size % 2 == 0)
	{
		for (i = (size / 2); i < size; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = (size - 1) / 2; i < size; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}