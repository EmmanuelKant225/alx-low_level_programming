#include "holberton.h"
/**
 * print_times_table - a function that prints the n times table.
 * @n: input
 * Return: Always 0 (Success)
 */
void print_times_table2(int n)
{
	int i, j, d;

	if (n < 15 && n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{d = (i * j);
				if (d < 9)
				{
					_putchar(d + '0');
					_putchar(',');
					_putchar('\t');
				}
				else if (d < 100)
				{
					_putchar((d / 10) + '0');
					_putchar((d % 10) + '0');
					_putchar(',');
					_putchar('\t');
				}
				else if (d < 1000)
				{
					_putchar((d / 100) + '0');
					_putchar(((d / 10) % 10) + '0');
					_putchar((d % 100) + '0');
					_putchar(',');
					_putchar('\t');
				}
			}
			_putchar('\n');
		}
	}
}
