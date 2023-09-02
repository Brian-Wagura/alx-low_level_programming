#include"main.h"

/**
 * _strcat - concatenate two strings
 *@src: source
 * @dest: destination
 * Return: destination
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int k = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[k] != '\0')
	{
		dest[i++] = src[k++];
	}

	dest[i] = '\0';

	return (dest);
}
