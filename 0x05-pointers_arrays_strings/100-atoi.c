#include "main.h"

/*
 * _atoi - a function that convert a string to an integer.
 * @s: string input
 * return: number
 */
int _atoi(char *s)
{
	int i = 0, res = 0, sign = 1;

	// Verify the sign
	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}

	// Convert the string to number
	while (s[i] >= '0' && s[i] <= '9')
	{
		res = res * 10 + (s[i] - '0');
		i++
	}

	return sign * res;
}
