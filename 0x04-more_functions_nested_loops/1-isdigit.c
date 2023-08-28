#include "main.h"

/**
 * _isdigit - Checks for a digit between 0 and 9
 * @b: Check for integer
 * Return: 1(Success) 0(Otherwise)
 */

int _isdigit(int b)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (b == i)
			return (1);
	}
	return (0);
}
