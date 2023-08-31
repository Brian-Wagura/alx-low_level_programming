#include"main.h"
/**
 * _sqrt_recursion - outputs squareroot of n
 *
 * @n: value
 * Return: void
 */

int _sqrt_recursion(int n)
{

	if (n == 0 || n == 1)
		return (n);
	int sqrt_half = _sqrt_recursion(n / 2);

	if (sqrt_half * sqrt_half == n)
		return (sqrt_half);
	if (n % 2 == 1)
		int sqrt_next_odd = _sqrt_recursion((n + 1) / 2);

		if (sqrt_next_odd * sqrt_next_odd == n)
			return (sqrt_next_odd);
	return (-1);
}
