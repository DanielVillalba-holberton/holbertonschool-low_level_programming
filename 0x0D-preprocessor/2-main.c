#include <stdio.h>
/**
 * main - print the name of the file using macro __FILE__.
 *
 * Return: Always 0.
 */
int main(void)
{
	char name[] = __FILE__;

	printf("%s\n", name);
	return (0);
}
