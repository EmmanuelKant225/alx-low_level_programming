#include "main.h"

/**
 * leet - a function that encodes a string into 1337.
 * @ptr: string input
 * Return: encoded string into 1337
 */
char *leet(char *ptr)
{
	int i, x;
	int find[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int replace[] = {'4', '3', '0', '7', '1'};

	for (i = 0; ptr[i] != '\0'; i++)
	{
		for (x = 0; x <= 9; x++)
		{
			if (ptr[i] == find[x])
			{
				ptr[i] = replace[x / 2];
				x = 9;
			}
		}
	}

	return (ptr);
}
