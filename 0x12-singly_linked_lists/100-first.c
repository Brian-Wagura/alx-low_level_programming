#include <stdio.h>

/**
 * __attribute__ -  which ensures
 * that it is automatically executed before the main function.
 * before_main - prints a specific message
 * before main is executed
 *
 * Return: void
 */

void __attribute__((constructor))
before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
