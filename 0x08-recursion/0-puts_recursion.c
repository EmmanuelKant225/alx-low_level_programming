#include "main.h"

/*
 * _puts_recursion - a function that prints a string, followed by a new line.
 * @s: input
 */
void _puts_recursion(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
