#include "main.h"

int real_sqrt(int n, int i);
/**
 * _sqrt_recursion - no loop, 1. 2nd function - checks for perfect square
 * @n: input
 * Return: Always 0 (Success)
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	else
		return (real_sqrt(n, (n + 1) / 2));
}

/**
 * real_sqrt - checks if perfect square
 * @n: input
 * @i: counter
 * Return: if square root
 */
int real_sqrt(int n, int i)
{
	if (i < 0)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (real_sqrt(n, i - 1));
}
