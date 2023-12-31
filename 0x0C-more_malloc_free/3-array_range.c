#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 * from min to max
 * @min: Min value(inclusive)
 * @max: Max value(inclusive)
 *
 * Return: pointer to the newly created array, or
 * NULL if min > max or if malloc fails.
 */

int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= max - min; i++)
		arr[i] = min + i;

	return (arr);
}
