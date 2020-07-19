#ifndef _VARIADIC_FUNCTIONS_
#define _VARIADIC_FUNCTIONS_
#include <stdarg.h>
#include <stdio.h>
void print_all(const char * const format, ...);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_char(va_list argument);
void print_integer(va_list argument);
void print_float(va_list argument);
void print_string(va_list argument);

/**
 * struct ope - struct operators
 * @oper: char operator
 * @func: function from print
 *
 * Description: struct
 */
typedef struct ope
{
	char *oper;
	void (*func)(va_list);
} ope_str;

#endif

