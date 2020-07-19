#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_char - prints char
 * @argument: argument
 *
 * Return: void
 */
void print_char(va_list argument)
{
	printf("%c", va_arg(argument, int));
}
/**
 * print_integer - prints integers
 * @argument: argument
 *
 * Return: void
 */
void print_integer(va_list argument)
{
	printf("%i", va_arg(argument, int));
}
/**
 * print_float - prints float
 * @argument: argument
 * Return: void
*/
void print_float(va_list argument)
{
	printf("%f", va_arg(argument, double));
}
/**
 * print_string - prints string
 * @argument: argument
 * Return: void
 */
void print_string(va_list argument)
{
	char *string = va_arg(argument, char *);

	if (string == '\0')
	{
		printf("(nil)");
	}
	printf("%s", string);
}
/**
 * print_all - print all formats
 * @format: format
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	ope_str options[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string},
		{'\0', NULL}
	};

	int i;
	char *pointer = (char *) format;
	char *sep = "";
	va_list arguments;

	va_start(arguments, format);

	while (format != '\0' && *pointer != '\0')
	{
		i = 0;
		while (options[i].oper != '\0')
		{
			if (options[i].oper[0] == *pointer)
			{
				printf("%s", sep);
				options[i].func(arguments);
				sep = ", ";
			}
			i++;
		}
		pointer++;
	}
	va_end(arguments);
	printf("\n");
}
