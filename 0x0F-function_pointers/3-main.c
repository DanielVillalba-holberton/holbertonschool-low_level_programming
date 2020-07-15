#include "3-calc.h"
/**
 * main - entry point
 *
 * @argc: number of argumnets
 * @argv: contains the numbers and operator
 * Return: an integer segun el caso
 */
int main(int argc, char **argv)
{
	if (argc == 4)
	{
		printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
		return (0);
	}
	printf("Error\n");
	return (98);
}

