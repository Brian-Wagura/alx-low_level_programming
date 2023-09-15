#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

/**
 * struct format - struct for format types
 * @type: type of format
 * @func: function to print format
 */

typedef struct format
{
	char *type;
	void (*func)(va_list);
} format_t;

void print_char(va_list args);

void print_int(va_list args);

void print_float(va_list args);

void print_string(va_list args);

void print_all(const char * const format, ...);

#endif
