#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings and new line
 * @separator: separator betwen characters
 * @n: number of input strings
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *aux;

	va_list arguments;

	va_start(arguments, n);
	while (i < n)
	{
		aux = va_arg(arguments, char*);
		printf("%s", aux ? aux : "(nil)");
		if (separator && i < n - 1)
			printf("%s", separator);
	i++;
	}
	printf("\n");
	va_end(arguments);
}
