#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: string input
 */
void rev_string(char *s)
{
	int i;
	int size = 10 - 1;

	for (i = (size - 1); i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
