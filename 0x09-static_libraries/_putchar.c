#include "main.h"
#include "unistd.h"

/**
 * _putchar - Writes a character to stdout
 * @c: The charcter to be written
 *
 * Return: On success, the character written is returned.
 * On error, -1 is returned and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
