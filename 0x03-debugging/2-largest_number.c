#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 *
 * @x: first integer
 * @y: second integer
 * @z: third integer
 *
 * Return: largest number
 */

int largest_number(int x, int y, int z)
{
	int max;

	max = x;
	if (y > max)
		max = y;
	if (z > max)
		max = z;
	return (max);
}
