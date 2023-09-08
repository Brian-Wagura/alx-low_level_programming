#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array.
 * @nmemb: number of elements in the array
 * @size: size of each element in bytes
 *
 * Return: pointer to allocated memory or NULL
 * if nmemb or size is 0 or if malloc fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;
	char *filler;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	filler = ptr;
	for (i = 0; i < (nmemb * size); i++)
		filler[i] = 0;
	return (ptr);
}
