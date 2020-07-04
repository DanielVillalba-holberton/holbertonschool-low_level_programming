#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - program that mul two numbers
 * @argc: number of elements in the array of pointer argv
 * @argv: array of pointers to the strings which are those arguments
 * Return: 0 success .
 */
int main(int argc, char *argv[])
{
    int i, j = 0, sum;
    if (argc == 1)
        {
        printf("0\n");
        return (0);
        }
    for (i = 1; i < argc; i++)
    {
        while (argv[i][j] != '\0')
        {
            if (!isdigit(argv[i][j]))
            {
                printf("Error\n");
                return (1);
            }
            j++;
        }
        sum = sum + atoi(argv[i]);
    }
    printf("%i\n", sum);
    return (0);
}