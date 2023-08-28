#include "main.h"
#include <string.h>

/**
 * print_times_table - Prints the n times table starting with 0.
 * @n: integer
 */

void print_times_table(int n)
{
	if (n < 0 || n > 15)
	{
		return;
	}
	for (int i = 0; i <= n; n++)
	{
		for (int j = 0; j <= n; j++)
		{
			printf("%d, ", i * j);
		}
		printf("\n");
	}
}
