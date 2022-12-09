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
	char lowercase = 'a';

	while (lowercase <= 'z')
	{
		if (lowercase == 'q' || lowercase == 'e')
			continue;
		else
			putchar(lowercase);
		lowercase++;
	}
	printf("\n");

	return (0);
}
