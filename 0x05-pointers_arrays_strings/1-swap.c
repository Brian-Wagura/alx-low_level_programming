#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: Pointer to the first integer to be swapped
 * @b: Pointer to the second integer to be swapped
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
