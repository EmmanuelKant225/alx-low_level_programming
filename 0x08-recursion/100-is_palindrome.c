#include "main.h"

int find_lengh(char *s);
int checker(char str[], int st, int end);
/**
 * is_palindrome - Entry Point
 * @s: input
 * Return: 0
 */
int is_palindrome(char *s)
{
	int len;

	len = find_lengh(s);

	if (len == 0)
		return (1);
	return (checker(s, 0, len - 1));
}

/**
 * find_lengh - finds the length count
 * @s: input
 * Return: length size
 */
int find_lengh(char *s)
{
	if (*s != '\0')
		return (1 + find_lengh(s + 1));
	return (0);
}

/**
 * checker - checks if start and end of string matches
 * @str: string
 * @st: start of string 0
 * @end: end of string from is_palindrome, from lengthc
 * Return: if str is a palindrome
 */
int checker(char str[], int st, int end)
{
	if (st >= end)
		return (1);
	if (str[st] != str[end])
		return (0);
	if (st <= end || st < end + 1)
		return (checker(str, st + 1, end - 1));
	return (1);
}
