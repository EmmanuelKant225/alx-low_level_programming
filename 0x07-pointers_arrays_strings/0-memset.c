#include "main.h"

/*
 * _memset - a function that fills memory with a constant byte.
 * @s: pointed destination
 * @b: constant byte
 * @n: byte
 * Return: pointed destination
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
