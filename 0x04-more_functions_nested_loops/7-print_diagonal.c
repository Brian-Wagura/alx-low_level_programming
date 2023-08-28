#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @x: length
 * Return: void
 */

void print_diagonal(int x)
{
	int a, b;

	if (x <= 0)
	{
		_putchar('\n');
		return;
	}
	for (a = 0; a < x; a++)
	{
		_putchar('\\');
		_putchar('\n');
		if (a == x - 1)
			continue;
		for (b = 0; b < a + 1; b++)
		{
			_putchar(' ');
		}
	}
}
