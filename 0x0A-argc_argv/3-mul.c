#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - prints its name + \n
 * @argc: number of arguments typed
 * @argv: array pointing to arguements
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			mul = mul * atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("%s\n", "Error");
		return (1);
	}
	return (0);
}
