#include "main.h"

/*
 * _memcpy - a function that copies memory area.
 * function copies n bytes from memory area src to memory area dest
 * @dest: memory area
 * @src: memory area
 * @n: byte
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
