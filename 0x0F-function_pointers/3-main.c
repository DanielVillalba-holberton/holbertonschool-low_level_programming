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
	int (*oper)(int a, int b);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
	{
		printf("Error\n");
		return (100);
	}
	oper = get_op_func(argv[2]);

	if (!oper)
	{
		printf("Error\n");
		return (99);
	}
	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	return (0);
}

