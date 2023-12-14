#include <stdio.h>
#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: Number
 *
 * Return: Binary number
 */

void print_binary(unsigned int long n)
{
	if (n > 1)
		print_binary(n >> 1);
	putchar((n & 1) + '0');
}
