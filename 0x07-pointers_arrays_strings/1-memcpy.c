#include "main.h"

/**
 * _memcpy - copies n bytes from memory area
 * src to memory area dest
 * @dest: pointer to the destination memory area
 * @src: pointer to the source memory area
 * @n: number of bytes to fill
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int size = n, i;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
			dest[i] = src[i];
	}
	return (dest);
}
