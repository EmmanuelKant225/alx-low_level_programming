#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: string input
 */
void rev_string(char *s)
{
	int i;
	int j;
	int size = 0;

	while (s[i] != '\0')
	{
		size++;
		i++;
	}

	for (j = (size - 1); j >= 0; j--)
	{
		_putchar(s[j]);
	}
}
