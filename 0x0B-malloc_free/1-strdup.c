#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * strdup - returns a pointer to a new string
 * which is a duplicate of the string str.
 *
 * @str: String to duplicate
 *
 * Return: Pointer to the duplicated string, or
 * NULL if string is null or insufficient memory
 * was available.
 */

char *_strdup(char *str)
{
	char *dup_str;
	int len, i;

	if (str == NULL)
		return (NULL);

	len = 0;
	while (str[len] != '\0')
		len++;

	dup_str = malloc(sizeof(char) * (len + 1));
	if (dup_str == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		dup_str[i] = str[i];

	return (dup_str);
}
