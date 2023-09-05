#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments
 * of the program.
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: a pointer to a new string containing
 * the concatenated arguments, or NULL on failure
 */

char *argstostr(int ac, char **av)
{
	char *concat_str;
	int i, j, pos = 0, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}

	concat_str = malloc(sizeof(char) * (len + 1));
	if (concat_str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] == '\0'; j++)
		{
			concat_str[pos] = av[i][j];
			pos++;
		}
		concat_str[pos] = '\n';
		pos++;
	}
	concat_str[pos] = '\0';
	return (concat_str);
}
