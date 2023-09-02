#include "main.h"

/**
 * _islower - check for lower case character
 * @c: character input
 *
 * Return: 0 (Lowercase) 1 (Otherwise)
 */

int _islower(int c)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}
