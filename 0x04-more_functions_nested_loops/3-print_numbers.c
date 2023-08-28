#include "main.h"

/**
 * print_numbers - Prints numbers 0 - 9 followed by a new line
 * Return: void
 */

void print_numbers(void)
{
	int x, y;

	for (x = 0; x <= 10; x++)
	{
		y = x < 10 ? (x + '0') : '\n';
		_putchar(y);
	}
}
