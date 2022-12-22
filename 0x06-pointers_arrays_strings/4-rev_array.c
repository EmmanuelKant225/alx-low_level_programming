#include "main.h"

/**
 * reverse_array - a function that reverses the content
 * of an array of integers.
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: nothing;
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp = a[0];

	for (i = 0; i < n; i++)
	{
		a[i] = a[n - i];
	}

	a[n] = temp;
}
