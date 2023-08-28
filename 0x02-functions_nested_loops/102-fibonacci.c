#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with
 *  1 and 2, followed by a new line.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int fib[50] = {1, 2};

	for (int i = 2; i < 50; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2]
			if (i < 49)
			{
				printf(", ");
			}
	}
	printf("\n");
	return (0);
}


