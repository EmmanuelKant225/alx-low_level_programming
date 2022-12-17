#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * postitive_or_negative - a function that print if a given number is positive or negative
 * @i: number input
 * Return: i is positive if i > 0, i is zero if i == 0, i is negative otherwise
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);
}
