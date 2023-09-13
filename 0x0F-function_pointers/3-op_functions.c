#include <3-calc.h>

/**
 * op_add - addition
 * @a: integer
 * @b: integer
 *
 * Return: integer
 */

int op_add(int a, int b)
{
	return ((a) + (b));
}

/**
 * op_sub - subtraction
 * @a: integer
 * @b: integer
 *
 * Return: integer
 */

int op_sub(int a, int b)
{
	return ((a) - (b));
}

/**
 * op_mul - multiplication
 * @a: integer
 * @b: integer
 *
 * Return: integer
 */
int op_mul(int a, int b)
{
	return ((a) * (b));
}
/**
 * op_div - division
 * @a: integer
 * @b: integer
 *
 * Return: integer
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		ERR_OUT;
		ERR_INF;
	}
	return ((a) / (b));
}
/**
 * op_mod - modulus
 * @a: integer
 * @b: integer
 *
 * Return: integer
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		ERR_OUT;
		ERR_INF;
	}
	return ((a) % (b));
}
