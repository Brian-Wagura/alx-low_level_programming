#include "main.h"

/**
 * _puts - print to the stdout
 * @s: string
 *
 * Return: void
 */

void _puts(char *s)
{
	for (; *s != '\0'; s++)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
