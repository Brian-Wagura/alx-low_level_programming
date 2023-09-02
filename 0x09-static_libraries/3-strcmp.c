#include"main.h"

/**
 * _strcmp - compares two strings
 * @s1: 1st string to compare
 * @s2: 2nd string to compare
 * Return: less than 0 if i is less than k, 0 if they're equal,
 * more than 0 if i is greater than k
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != 0)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
