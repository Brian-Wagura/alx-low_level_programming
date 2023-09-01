#include <stdio.h>

/**
 * main - prints the number of arguments, followed by
 * a new line
 * @argc: number of command line arguments passed
 * @argv: array containing cmd line args
 * Return: 0 - Success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
