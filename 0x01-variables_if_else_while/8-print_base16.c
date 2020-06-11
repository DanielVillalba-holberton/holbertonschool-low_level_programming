#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *base_16 = "0123456789abcdef";

	while (*base_16)
		putchar(*(base_16++));

	putchar('\n');
	return (0);
}
