#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that mul two numbers
 * @argc: number of elements in the array of pointer argv
 * @argv: array of pointers to the strings which are those arguments
 * Return: 0 success .
 */
int main(int argc, char *argv[])
{
	int mul = 1, i = 1;

	if (argc > 3 || argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	while (argv[i])
	{
		mul = mul * atoi(argv[i]);
		i++;
	}
	printf("%i\n", mul);
	return (0);
}
