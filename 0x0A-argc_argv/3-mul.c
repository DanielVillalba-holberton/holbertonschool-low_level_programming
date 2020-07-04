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
    int mul;
    if (argc == 1)
    {
        printf("Error\n");
        return (1);
    }
    mul = atoi(argv[1]) * atoi(argv[2]);
    printf("%i\n", mul);
    return (0);
}