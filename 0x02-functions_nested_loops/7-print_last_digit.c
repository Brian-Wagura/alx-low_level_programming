#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @k: integer
 * Return: 0 (Success)
 */

int print_last_digit(int k)
{
	int last;

	last = k % 10;
	if (last < 0)
		last *= -1;
	_putchar(last + '0');
	return (last);
}
