#include "main.h"

/**
 * sqrt_helper - Helper function for calculating
 * square root recursively
 * @n: The input integer
 * @i: The current iteration value
 *
 * Return: The natural square root of @n, -1
 * if no natural square root
 */

int sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);

	if (i * i > n)
		return (-1);

	return (sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - Calculates the natural squareroot
 * of a number
 * @n: Input integer
 *
 * Return: The natural squareroot of @n, -1
 * if no natural squareroot
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	return (sqrt_helper(n, 1));
}
