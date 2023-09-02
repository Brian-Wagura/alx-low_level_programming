#include<stdio.h>

/**
 * _abs - compute absolute value of a number
 * @k: integer
 *
 * Return: Always 0 (success)
*/

int _abs(int k)
{
	if (k >= 0)
		return (k);
	k *= -1;
	return (k);
}
