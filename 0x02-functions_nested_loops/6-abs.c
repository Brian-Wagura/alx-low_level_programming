#include "main.h"

/**
 * _abs - Prints the absolute value of an integer
 * @a: integer
 *
 * Return: 0 (Success)
 */

int _abs(int a)
{
	if (a >= 0)
		return (a);
	a *= -1;
	return (a);
}
