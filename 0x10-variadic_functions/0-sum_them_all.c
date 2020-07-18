#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum of all its parameters.
 * @n: number of parameters
 * Return: the add.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum = 0;

	va_list arguments;

	va_start(arguments, n);

	if (n == 0)
		return (0);

	while (i < n)
	{
		sum = sum + va_arg(arguments, int);
		i++;
	}
	va_end(arguments);
	return (sum);
}
