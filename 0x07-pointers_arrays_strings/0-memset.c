#include "main.h"

/*
 * _memset - a function that fills memory with a constant byte
 * function fills the first n bytes of the memory area pointed
 * to by s with the constant byte b
 * @s: pointed destination
 * @b: constant byte
 * @n: byte
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
