#include "main.h"

/**
 * set_string - set the value of a pointer
 * to a char
 * @s: pointer to the pointer to set
 * @to: pointer to the char to set
 *
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
