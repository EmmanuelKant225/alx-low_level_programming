#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13
 * @ptr: input
 * Return: decrypted string
 */
char *rot13(char *ptr)
{
	int x;
	int rot_c = 13;
	int i = 0;
	char toswap[] = {'A', 'N', 'a', 'n', 'B', 'O', 'b', 'o', 'C', 'P',
		'c', 'p', 'D', 'Q', 'd', 'q', 'E', 'R', 'e', 'r', 'F', 'S', 'f',
		's', 'G', 'T', 'g', 't', 'H', 'U', 'h', 'u', 'I', 'V', 'i', 'v',
		'j', 'W', 'j', 'w', 'K', 'X', 'k', 'x', 'L', 'Y', 'l', 'y', 'M',
		'Z', 'm', 'z'};

	while (ptr[i] != '\0')
	{
		for (x = 0; x <= 51; x++)
		{
			if (ptr[i] == toswap[x])
			{
				ptr[i] = ptr[i] + rot_c;
				x = 51;
			}
			rot_c = rot_c + -1;
		}
		i++;
	}
	return (ptr);
}
