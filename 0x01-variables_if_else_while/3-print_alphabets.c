#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha = 'a';
	char alpha2 = 'A';

	while (alpha <= 'z')
		putchar(alpha++);
	while (alpha2 <= 'Z')
		putchar(alpha2++);
	putchar('\n');
	return (0);
}
