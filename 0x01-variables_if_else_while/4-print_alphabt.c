/**
 * main - Entry point.
 *
 * Description: Prints a-z except q and e using the putchar method.
 *
 * Return: 0 - Success
 */
#include <stdio.h>

int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		if (alph != 'e' && alph != 'q')
			putchar(alph);
	}
	putchar('\n');
	return (0);
}

