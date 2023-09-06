#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * strtow - splits a string into words.
 * @str: String to split
 *
 * Return: Pointer to an array of strings(words)
 * NULL on failure
 */

char **strtow(char *str)
{
	char **words;
	int i, j, k, len, count = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	len = strlen(str);
	words = malloc((len + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ')
		{
			j = i;
			while (str[j] != ' ' && str[j] != '\0')
				j++;
			words[count] = malloc((j - i + 1) * sizeof(char));
			if (words[count] == NULL)
			{
				for (k = 0; k < count; k++)
					free(words[k]);
				free(words);
				return (NULL);
			}
			for (k = 0; k < j - i; k++)
				words[count][k] = str[i + k];
			words[count][k] = '\0';
			count++;
			i = j;
		}
	}
	words[count] = NULL;
	return (words);
}
