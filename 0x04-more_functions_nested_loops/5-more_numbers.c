#include "main.h"

/**
 * more_numbers -  prints 10 times the numbers,
 *  from 0 to 14, followed by a new line.
 *
 * Return: void
 */

void more_numbers(void)
{
	int k, l;

	for (k = 0; k <= 14; k++)
	{
		for (l = 0; l <= 14; l++)
		{
			if (l / 10)
				_putchar((l / 10) + '0');
			_putchar((l % 10) + '0');
		}
		_putchar('\n');
	}
}
