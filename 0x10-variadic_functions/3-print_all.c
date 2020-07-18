#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - writes char in the buffer
 * @format: format to be print
 * Return: nthing
 */
void print_all(const char * const format, ...)
{
	va_list arguments;
	char *aux;
	int i = 0, end;

	while (format && format[i])
	{
		va_start(arguments, format);
		while (format[i])
		{
			end = 0;
			switch (format[i++])
			{
				case 'c':
					printf("%c", va_arg(arguments, int));
					break;
				case 'i':
					printf("%d", va_arg(arguments, int));
					break;
					case 's':
					aux = va_arg(arguments, char*);
					if (aux)
					{
						printf("%s", aux);
						break;
					}
					printf("(nil");
					break;
				case 'f':
					printf("%f", va_arg(arguments, double));
				default:
					end = 1;
					break;
			}
			if (format[i] && !end)
				printf(", ");
		}
		va_end(arguments);
	}
	printf("\n");
}
