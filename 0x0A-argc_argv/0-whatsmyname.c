#include "stdio.h"

/**
 * main - Prints the first argument
 * @argc: number of cmd arguments
 * @argv: array containing cmd arguments
 *
 * Return: 0 - Success.
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
