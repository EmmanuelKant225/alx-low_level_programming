#include "main.h"

int real_sqrt(int n, int i);
/*
 * _sqrt_recursion - a function that returns the natural
 * square root of a number.
 * @n: input
 * Return: -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (real_sqrt(n, (n / 2)));
}

/*
 * real_sqrt - a function that finds the square root
 * @n: input
 * @i: input
 * Return: number
 */
int real_sqrt(int n, int i)
{
	if (i < 1)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (real_sqrt(n, i - 1));
}
