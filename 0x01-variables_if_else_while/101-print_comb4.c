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
	int digit;

	for (digit = 12; digit <= 789; digit++)
	{
		if (digit > 90)
		{
			int first2Digit = digit / 10;
			int second2Digit = digit % 10;
			printf("0%d, ", digit);
		}

	}
	printf("\n");

	return (0);
}
