#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program
 * @ac: Number of arguments
 * @av: Array of strings containing the arguments
 *
 * Return: A pointer to the concatenated string, or NULL if it
 * fails
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, len, total_len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len])
			len++;
		total_len += len;
	}

	str = malloc(sizeof(char) * (total_len + ac + 1));
	if (str == NULL)
		return (NULL);

	len = 0;

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			str[len] = av[i][j];
			len++;
			j++;
		}
		str[len] = '\n';
		len++;
	}
	str[len] = '\0';

	return (str);
}
