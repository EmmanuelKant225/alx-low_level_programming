#include "main.h"
/**
 * print_alphabet - a function that prints the alphabet, in lowercase
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		_putchar(lowercase);
	}
	_putchar('\n');
}
