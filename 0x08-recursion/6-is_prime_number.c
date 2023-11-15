#include "main.h"

/**
 * is_divisible - Checks if a number is divisible by any number
 * from 2 to sqrt(n)
 * @n: The number to check for divisibility
 * @i: The current divisor to check
 *
 * Return: 1 if n is divisible by any number from 2 to sqrt(n),0 otherwise.
 */

int is_divisible(int n, int i)
{
	if (i * i > n)
		return (0);
	if (n % i == 0)
		return (1);
	return (is_divisible(n, i + 1));
}

/**
 * is_prime_number - Checks if a number is prime
 * @n: The number to check
 *
 * Return: 1 if n is prime, 0 otherwise.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);

	return (!is_divisible(n, 2));
}

