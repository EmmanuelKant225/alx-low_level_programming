#include <stdio.h>
#include "main.h"
/**
 * main - Entry Point
 * @argc: arguments
 * @argv: array pointing to arguments
 * Return: 0
 */
int main(int argc, __attribute__((unused)) char **argv)
{
	printf("%s\n", argc - 1);
	return (0);
}
