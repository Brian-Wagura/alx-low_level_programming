#include"main.h"

/**
 * _strncpy - copies n string from source to destination
 * @dest: string destination
 * @src: string source
 * @n: maximum number of strings
 * Return:0 success
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
