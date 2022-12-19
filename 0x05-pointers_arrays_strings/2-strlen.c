#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: string input
 * Return: lenght of string
 */
int _strlen(char *s)
{
	int length = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
		length++;
	}
}
