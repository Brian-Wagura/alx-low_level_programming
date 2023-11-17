#include "main.h"

/**
 * _puts - Prints a string to stdout
 * @s: The string to be printed
 */

void _puts(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	_putchar('\n');
}
