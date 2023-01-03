#include "main.h"

/*
 * _memset - a function that fills memory with a constant byte
 * @s: pointed destination
 * @b: constant byte
 * @n: bytes
 * Return: pointed destination
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
