#include "holberton.h"
/**
 * main - copies the content of a file to another file.
 * @argc: count of arguments
 * @argv: pointer to list of strings arguments
 * Return: 0 if fine, 97, 98, 99, or 100 if fails
 */
int main(int argc, char **argv)
{
	char *file_from, *file_to, buffer[1024];
	int fd_from, fd_to, read_val;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = argv[1], file_to = argv[2];
	fd_from = open(file_from, O_RDONLY);

	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		if (close(fd_from) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd_from);
			exit(100);
		}

		else
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}

	read_val = read(fd_from, &buffer, 1024);
	while (read_val != '\0')
	{
		if (read_val == -1)
		{
			if (close(fd_from) == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd_from);
				exit(100);
			}

			else
			{
				if (fd_to == -1)
				{
					dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd_to);
					exit(100);
				}
				else
				{
					dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
					exit(98);
				}
			}
		}
		if (write(fd_to, &buffer, read_val) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
		read_val = read(fd_from, &buffer, 1024);
	}

	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd_from);
		exit(100);
	}
	else
	{
		if (close(fd_to) == -1)
    	{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd_to);
			exit(100);
		}
		else
			return (0);
	}
}
