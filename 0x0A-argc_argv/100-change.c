#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - program that prints the minimum number of oins to change
 * @argc: number of elements in the array of pointer argv
 * @argv: array of pointers to the strings which are those arguments
 * Return: 0 success or 1 error .
 */
int main(int argc, char *argv[])
{
	int i = 0, ch;

    fflush(stdin);
	ch = atoi(argv[1]);
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	while (ch >= 25)
	{
		ch = ch - 25;
		i++;
	}
	while (ch >= 10)
	{
		ch = ch - 10;
		i++;
	}
	while (ch >= 5)
	{
		ch = ch - 5;
		i++;
	}
	while (ch >= 2)
	{
		ch = ch - 2;
		i++;
	}
	while (ch == 1)
	{
		ch--;
		i++;
	}
	printf("%d\n", i);
	return (0);
}
