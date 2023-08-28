/**
 * main - Entry point.
 *
 * Description: Prints a-z then A-Z using the putchar method.
 *
 * Return: 0 - Success
 */
#include <stdio.h>

int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		putchar(alph);
	}
	for (alph = 'A'; alph <= 'Z'; alph++)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}

