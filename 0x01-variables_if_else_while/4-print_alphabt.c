#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		if (lowercase == 'q' || lowercase == 'e')
			continue;
		else
			putchar(lowercase);
	}
	printf("\n");

	return (0);
}
