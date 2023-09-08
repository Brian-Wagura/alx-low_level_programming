#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory to allocate
 *
 * Return: pointer to the allocated memory
 * if malloc fails, the malloc_checked function should
 * cause normal process termination with a status value
 * of 98
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
