#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: The string to get the length of
 *
 * Return: The length of the string
 */

int _strlen(char *s)
{
	int i = 0;


	while (s[i])
		i++;

	return (i);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: The string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int len = _strlen(s);
	int i, j;

	if (len == 0)
		return (1);

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		if (s[i] != s[j])
			return (0);
	}

	return (1);
}
