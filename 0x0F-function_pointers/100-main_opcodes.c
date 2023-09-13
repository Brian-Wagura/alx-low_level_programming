#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of its main
 * function.
 * @argc: no of args
 * @argv: array of pointers to the
 * arguments
 *
 * Return: 0 - Success
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	int num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	void *main_addr = (void *)main;
	unsigned char *opcodes = (unsigned char *)main_addr;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x ", opcodes[i]);
	}

	printf("\n");

	return (0);
}
