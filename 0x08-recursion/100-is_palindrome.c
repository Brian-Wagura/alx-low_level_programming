#include "main.h"

int is_palindrome(char *s)
{
	int length = 0;
	int i;

	while (s[length] != '\0')
		length++;

	for (i = 0; i < length / 2; i++)
	{
		if (s[i] != s[length - 1 - i])
			return (0);
	}
	return (1);
}
