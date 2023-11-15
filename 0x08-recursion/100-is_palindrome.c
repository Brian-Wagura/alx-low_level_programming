#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: A pointer to a string
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
 * check_palindrome - Checks if a string is a palindrome
 * recursively
 * @s: A pointer to a string
 * @len: Length of a string
 *
 * Return: 1 if a string is a palindrome, 0 otherwise
 */

int check_palindrome(char *s, int len)
{
	if (len <= 1)
		return (1);
	if (*s == *(s + len - 1))
		return (check_palindrome(s + 1, len - 2));
	return (0);
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

	if (len <= 1)
		return (1);

	return (check_palindrome(s, len));
}
