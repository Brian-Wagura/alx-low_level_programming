#include"main.h"

/**
 * _strncat - concantate two strings that are >= 'n'
 * @src: source
 * @dest: destination
 *@n: number of bytes of str to conantenate
 * Return: destination
 */

char *_strncat(char *dest, char *src, int n)
{

	int i = 0;
	int k = 0;

	while (dest[i])
	{
		i++;
	}

	while (k < n && src[k] != 0)
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	dest[i] = 0;
	return (dest);
}
