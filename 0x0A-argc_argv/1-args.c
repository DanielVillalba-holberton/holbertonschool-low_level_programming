#include <stdio.h>
/**
 * main - program that prints its name
 * @argc: number of elements in the array of pointer argv
 * @argv: array of pointers to the strings which are those arguments
 * Return: 0 success .
 */
int main(int argc, char *argv[])
{
	int i, c = 0;

	for (i = 0; i < argc; i++)
	{
		argv++;
		c++;
	}
	printf("%d\n", c - 1);
	return (0);
}
