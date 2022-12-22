#include "main.h"

/**
 * print_number - a function that prints an integer.
 * @n: number input
 * Return: nothing
 */
void print_number(int n)
{
	if (n >= 0 && n <= 9)
	{
		_putchar(n + '0');
	}
	else
	{
		_putchar((n / 10) + '0');
		print_number(n % (n / 10));
	}
}
