#include"main.h"
/**
 * _sqrt_recursion - outputs squareroot of n
 *
 * @n: value
 * Return: void
 */

int _sqrt_recursion(int n)
{
	int i = 1;

	if (n == 0 || n == 1)
		return (n);
	if (n < 0)
		return (-1);
	while (i * i <= n)
	{
		if (i * i == n)
			return (i);
		i++;
	}
	return (-1);
}
