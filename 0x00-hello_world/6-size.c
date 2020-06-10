#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
long long type_llong;
char type_char;
long int type_lint;
float type_fl;
int type_int;

printf("Size of a char: %lu byte(s)\n", sizeof(type_char));
printf("Size of an int: %lu byte(s)\n", sizeof(type_int));
printf("Size of a long int: %lu byte(s)\n", sizeof(type_lint));
printf("Size of a long long int: %lu byte(s)\n", sizeof(type_llong));
printf("Size of a float: %lu byte(s)\n", sizeof(type_fl));
return (0);
}
