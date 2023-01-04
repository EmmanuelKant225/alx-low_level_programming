#include "main.h"

int test_prime(int n, int i);
/*
 * is_prime_number - a function that check prime number
 * @n: input
 * Return: 1 if n is a prime number, otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (test_prime(n, n - 1));
}
/*
 * test_prime - a function that verify prime number
 * @n: input
 * @i: input
 * Return: 1 if n is prime
 */
int test_prime(int n, int i)
{
	if (n == n * i)
		return (1);
	else
		return (test_prime(n, i - 1));
}
