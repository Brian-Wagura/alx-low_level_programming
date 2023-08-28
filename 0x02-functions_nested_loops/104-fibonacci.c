#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int a = 1;
	int b = 2;
	int c;

	printf("%d, %d", a, b);

	for (int i = 3; i <= 98; i++)
	{
		c = a + b;
		printf(", %d", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}

