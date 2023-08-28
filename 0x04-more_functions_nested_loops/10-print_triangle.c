#include "main.h"

/**
 * print_triangle - Prints a triangle pattern
 * @size: integer
 * Return: void
 */

void print_triangle(int size)
{
	int a, b, c;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (a = 1; a <= size; a++)
	{
		for (b = 1; b <= size; b++)
		{
			c = b < (size + 1) - a ? ' ' : '#';
			_putchar(c);
		}
		_putchar('\n');
	}
}
