/**
 * main - Entry point.
 *
 * Description: Prints z-a using putchar method.
 *
 * Return: 0 - Success
 */


#include <stdio.h>

int main(void)
{
	char alph;

	for (alph = 'z'; alph >= 'a'; alph--)
		putchar(alph);
	putchar('\n');
	return (0);
}
