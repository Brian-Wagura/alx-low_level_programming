#include "main.h"

/**
 * calculate_sqrt - Calculates the squareroot of a number
 * @n: The number to calculate the squareroot of
 * @i: The current guess of the squareroot
 *
 * Return: The squareroot of n, or -1 if n does not
 * have a natural squareroot
 */

int calculate_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (calculate_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - Returns the natural squareroot of a
 * number
 * @n: The number to calculate the squareroot of
 *
 * Return: The squareroot of n, or -1 if n does not
 * have a natural squareroot.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (calculate_sqrt(n, 0));
}
