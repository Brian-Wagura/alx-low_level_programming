#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 *
 * @format: list of type of arguments passed to the function
 * c: char
 * i: integer
 * f: float
 * s: char * (if the string is NULL print (nil) instead)
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i, j;
	char *str;
	
	i = 0;
	while (format && format[i])
	{
		va_start(args, format);
		j = i;
		while (format[j] == ' ' || format[j] == '\t')
			j++;
		switch (format[j])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (!str)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				j++;
				continue;
		}
		if (format[j + 1])
			printf(", ");
		i = j + 1;
		va_end(args);
	}
	printf("\n");
}
