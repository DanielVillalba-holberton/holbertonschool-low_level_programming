#include <stdio.h>
/**
 * main - program that prints its name
 * @argc: number of elements in the array of pointer argv
 * @argv: array of pointers to the strings which are those arguments
 * Return: 0 success .
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
