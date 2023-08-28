#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	for (int i = 1; i <= 100; i++)
	{
		if (i > 1)
			printf(' ');
		if (i % 3 == 0)
		{
			printf("Fizz");
			continue;
		}
		if (i % 5 == 0)
		{
			printf("Buzz");
			continue;
		}
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
			continue;
		}
		printf("%d", i);
	}
	printf('\n');
	return (0);
}
