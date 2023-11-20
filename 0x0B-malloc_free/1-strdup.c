#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Returns a pointer to a newly
 * allocated space in memory containing
 * a copy of the string given as a parameter
 * @str: String to duplicate
 *
 * Return: A pointer to the duplicated string,
 * or NULL if insufficient memory was available
 * or str is NULL
 */

char *_strdup(char *str)
{
	char *dup_str;

	if (str == NULL)
		return (NULL);

	dup_str = malloc(sizeof(char)
			* (strlen(str) + 1));

	if (dup_str == NULL)
		return (NULL);

	strcpy(dup_str, str);

	return (dup_str);
}
