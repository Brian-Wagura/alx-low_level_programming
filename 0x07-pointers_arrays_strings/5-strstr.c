#include "main.h"

/**
 * _strstr - finds the first occurence of the
 * substring needle in the string haystack
 * @haystack: pointer to the string to search
 * @needle: pointer to the substring to find.
 * Return: pointer to the beginning of the
 * located substring, or NULL if the substring
 * is not found.
 */

char _strstr(char *haystack, char *needle)
{
	int i, j;

	if (!*needle)
		return (haystack);

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (!needle[j])
			return (haystack + i);
	}
	return (NULL);
}
