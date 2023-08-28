/**
 * main - Entry Point.
 *
 * Description: Prints all base 10 numbers using putchar function.
 *
 * Return: 0 (Success)
 */

#include <stdio.h>

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar(num + '0');
	putchar('\n');
	return (0);
}

