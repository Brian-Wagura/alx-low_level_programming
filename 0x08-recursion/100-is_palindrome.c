#include "main.h"

/**
 * _strlen - get string length
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	if (*s == END)
		return (NULL);
	s++;
	return (1 + _strlen(s));
}

/**
 * split_n_mirror - compare first half to
 * the mirror of the 2nd half
 * @s_head: 1st half of the string
 * @s_tail: 2nd half of the string
 *
 * Return: Success ? 1 : 0
 */

int split_n_mirror(char *s_head, char *s_tail)
{
	if (s_head >= s_tail)
		return (TRUE);

	if (*s_head == *s_tail)
		return (split_n_mirror(s_head + 1, s_tail - 1));

	return (NULL);
}

/**
 * is_palindrome - check if a string is palindrome
 * @s: String
 * Return: SUCCESS ? 1 : 0
 */

int is_palindrome(char *s)
{
	int len = _strlen(s);

	return (split_n_mirror(s, s + len - 1));
}
