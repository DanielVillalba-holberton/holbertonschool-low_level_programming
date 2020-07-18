#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - sum of all its parameters.
 * @separator: character separator
 * @n: parameters to be add (elipsis)
 * Return: the add.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;

	va_list args;

	va_start(args, n);

	while (i < n)
	{
		printf("%i", va_arg(args, int));
		if (separator && i < n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(args);
}
