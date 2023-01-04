#include "main.h"

/*
 * factorial(int n) - a function that returns the factorial of a given number.
 * @n: number input
 * Return: -1 if n is lower than 0, 1 if n is equal to 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
