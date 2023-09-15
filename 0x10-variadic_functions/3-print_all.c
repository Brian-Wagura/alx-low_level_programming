#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_char - prints a char
 * @args: va_list containing the char to print
 *
 * Return: void
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - prints an int
 * @args: va_list containing the int to print
 *
 * Return: void
 */
void print_int(va_list args)
{
        printf("%d", va_arg(args, int));
}

/**
 * print_float - prints a float
 * @args: va_list containing the float to print
 *
 * Return: void
 */
void print_float(va_list args)
{
        printf("%f", va_arg(args, double));
}

/**
 * print_string - prints a string
 * @args: va_list containing the string to print
 *
 * Return: void
 */
void print_string(va_list args)
{
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(nil)";
        printf("%s", str);
}

/**
 * print_all - prints anything
 * @format: list of types of arguments
 * passed to the function
 * c: char
 * i: integer
 * f: float
 * s: char * (if the string is NULL, print
 * (nil) instead)
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j = 0;
	char *separator = "";

	format_t formats[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (formats[j].type)
		{
			if (format[i] == *(formats[j].type))
			{
				printf("%s", separator);
				formats[j].func(args);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
