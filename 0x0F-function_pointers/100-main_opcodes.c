#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of its own main function
 *
 * @argc: The number of arguments passed to the function
 * @argv: An array of pointers to the arguments
 *
 * Return: 0 on success, 1 if the number of arguments is incorrect or 2
 * if the number of bytes is negative.
 */

int main(int argc, char **argv)
{
	int num_bytes, i;
	char *main_ptr = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", *(main_ptr + i) & 0xff);
		if (i != num_bytes - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
