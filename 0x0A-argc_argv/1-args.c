#include <stdio.h>

/**
 * main - Prints the number of arguments passed to it
 * @argc: Number pf cmd arguments
 * @argv: array of cmd arguments
 *
 * Return: 0 - Success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
