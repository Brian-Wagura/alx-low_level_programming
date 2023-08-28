#include "main.h"

/**
 * _strcpy - Copy string
 *
 * @dest: destination
 * @src: source
 *
 * Return: character
 */

char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = strlen(src);

	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
