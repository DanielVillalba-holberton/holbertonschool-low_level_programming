#include <stdio.h>
/**
 * main - program that prints his elements
 * @argc: number of elements in the array of pointer argv
 * @argv: array of pointers to the strings which are those arguments
 * Return: 0 success .
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
