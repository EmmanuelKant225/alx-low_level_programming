#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: string input
 */
void rev_string(char *s)
{
	char rev = s[0];
	int size = 0;
	int i;

	while (s[size] != '\0')
	{
		size++;
	}

	for (i = 0; i < size; i++)
	{
		rev = s[i];
		s[i] = s[size];
		s[size] = rev;
	}
}
