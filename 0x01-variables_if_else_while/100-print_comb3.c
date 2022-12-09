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

	for (digit = 1; digit <= 89; digit++)
	{
		if (digit < 10)
			printf("0%d, ", digit);
		else if ((digit > 9 && digit < 12) || (digit > 19 && digit < 23))
			continue;
		else if	((digit > 29 && digit < 34) || (digit > 39 && digit < 45))
			continue;
		else if ((digit > 49 && digit < 56) || (digit > 59 && digit < 67))
			continue;
		else if ((digit > 69 && digit < 78) || (digit > 79 && digit < 89))
			continue;
		else if (digit == 89)
			printf("%d", digit);
		else
			printf("%d, ", digit);
	}
	printf("\n");

	return (0);
}
