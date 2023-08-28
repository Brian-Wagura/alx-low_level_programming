#include "main.h"

/**
 * _isalpha - checks if a character is an alphabet
 *
 * @c: The character to check
 *
 * Return: 1, if character is a letter,lowercase or uppercase, 0 otherwise
 */

int _isalpha(int c)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (c == alpha)
			return (1);
	}

	for (alpha = 'A'; alpha <= 'Z'; alpha++)
	{
		if (c == alpha)
			return (1);
	}
	return (0);
}
