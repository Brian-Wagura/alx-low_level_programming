#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 * @x: length
 * Return: void
 */

void print_line(int x)
{
	int a, b;

	if (x <= 0)
	{
		_putchar('\n');
		return;
	}
	for (a = 0; a <= x; a++)
	{
		b = a == x ? '\n' : '_';
		_putchar(x);
	}
}
