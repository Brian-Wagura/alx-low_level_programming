#include "main.h"
#include "stddef.h"

/**
 * _strchr - Locates a character in a string
 * @s: The string to be searched
 * @c: The character to be located
 *
 * Return: A pointer to the first occurence of
 * the charcter c in the string s or NULL if
 * the character is not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}

	if (s[i] == c)
		return (&s[i]);

	return (NULL);
}
