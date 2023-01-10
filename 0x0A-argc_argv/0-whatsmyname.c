#include <stdlib.h>
#include <stdio.h>

/*
 * main - Entry point
 * @argc: input
 * @argv: input
 * Return: Always 0 (Succes)
 */
int main(int argc, char **argv)
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", *argv);
		}
	}
	return (0);
}
