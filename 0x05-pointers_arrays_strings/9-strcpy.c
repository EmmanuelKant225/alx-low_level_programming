#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int size = 0;

	while (src[size] != '\0')
	{
		size++;
	}

	for (i = 0; i < size && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < size; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
