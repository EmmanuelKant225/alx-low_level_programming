#include "main.h"

int test_prime(int n, int i);
/**
 * is_prime_number - executes prime_checker
 * @n: input to check
 * Return: Always 0 (Success)
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (test_prime(n, n - 1));
}
/**
 * test_prime - checks for prime
 * @n: input to check
 * @i: n / 2, then passes to i - 1, checks if greater than 0
 * Return: prime check
 */
int test_prime(int n, int i)
{
	if (n == n * i)
		return (1);
	else
		return (test_prime(n, i - 1));
}
