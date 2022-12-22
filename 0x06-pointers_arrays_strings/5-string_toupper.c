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

	while (a[i] != '\0')
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = (a[i] - 'a') + 'A';
		}
		i++;
	}
	return (a);
}
