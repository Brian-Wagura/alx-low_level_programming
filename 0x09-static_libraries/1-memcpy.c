#include"main.h"

/**
 * _memcpy - copies an integer of size n
 * @src: pointer to memory area
 * @dest: pointer to memory area
 *@n: number of bytes to fill
 *
 * Return: pointer to memory area
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
