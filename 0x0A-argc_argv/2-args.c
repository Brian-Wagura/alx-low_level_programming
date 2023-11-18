#include <stdio.h>

/**
 * main - Prints all arguments it receives
 * @argc: Number of cmd arguments
 * @argv: Array of cmd arguments
 *
 * Return: 0 - Success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
