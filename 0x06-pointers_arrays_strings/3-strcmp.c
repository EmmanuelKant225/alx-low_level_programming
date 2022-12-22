#include "main.h"

/**
 * _strcmp - a function that compares two strings.
 * @s1: compare to
 * @s2: compare with
 * Return: 0 if s1 is equal to s2, or -15 if s1 is less than s2, otherwise 15
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int flag = 0;

	while ((s1[i] != '\0') && (s2[i] != '\0'))
	{
		if (s1[i] < s2[i])
		{
			flag = -15;
			break;
		}
		else if (s1[i] > s2[i])
		{
			flag = 15;
			break;
		}

		i++;
	}

	if (flag == 0)
	{
		return (0);
	}
	else if (flag == -15)
	{
		return (-15);
	}
	else
	{
		return (15);
	}
}
