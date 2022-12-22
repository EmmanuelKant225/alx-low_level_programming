#include "main.h"

/**
 * string_toupper - a function that changes all lowercase letters
 * of a string to uppercase.
 * @ptr: string input
 * Return: string in uppercase
 */
char *string_toupper(char *ptr)
{
	int i = 0;

	while (ptr[i] != '\0')
	{
		if (ptr[i] >= 'a' && ptr[i] <= 'z')
		{
			ptr[i] = (ptr[i] - 'a') + 'A';
		}

		i++;
	}

	return (ptr);
}
