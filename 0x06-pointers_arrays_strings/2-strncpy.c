#include "main.h"

/**
 * _strncpy - a function that copies a string.
 * @dest: copy to
 * @src: copy from
 * @n: input number of char
 * Return: two concat strings
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
