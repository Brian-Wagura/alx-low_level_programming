#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * string_nconcat - concatenates 2 strings.
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to concatenate from s2
 *
 * Return: pointer to newly allocated space in memory
 * containing s1 follwed by the first n btyes of s2,
 * null terminated.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i, j;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	if (n >= len2)
		n = len2;

	result = malloc(sizeof(char) * (len1 + n + 1));
	if (result == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		result[i] = s1[i];
	for (j = 0; j < n; j++)
		result[i + j] = s2[j];
	result[i + j] = '\0';

	return (result);
}
