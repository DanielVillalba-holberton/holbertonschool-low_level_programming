#include "holberton.h"
#include <stdlib.h>
/**
 * argstostr - function that free allocate memory
 * @ac: count of parameters
 * @av: pointer of char parameter
 *
 * Return: pointer to string args.
*/
char *argstostr(int ac, char **av)
{
	char *args;
	int i = 0, c = 0, j = 0, x;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			j++;
			c++;
		}
		i++;
		c++;
	}
	c++;
	args = malloc(sizeof(char) * c);
	if (args == NULL)
	{
		free(args);
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			args[x] = av[i][j];
			j++;
			x++;
		}
		args[x] = '\n';
		x++;
	}
	args[x] = '\0';
	return (args);
}
