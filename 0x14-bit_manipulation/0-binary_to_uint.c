#include "holberton.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string num in binary
 * Return: number in unsigned integer
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num_de = 0, i = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		num_de = num_de << 1;
		if (b[i] == '1')
			num_de = num_de ^ 1;
		i++;
	}
	return (num_de);
}
