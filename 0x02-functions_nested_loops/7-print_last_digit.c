#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @n: number input
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n >= 0 && n < 10)
	{
		_putchar(n);
		return (n);
	}
	else
	{
		last_digit = n % 10;
		_putchar(last_digit);
		return (last_digit);
	}
}
