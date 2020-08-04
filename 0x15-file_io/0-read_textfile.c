#include "holberton.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file to be readed
 * @letters: number of letters
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer = NULL;
	int fd = 0, re_wr = 0;

	if (filename != NULL)
	{
		buffer = malloc(sizeof(char) * letters);
		fd = open(filename, O_RDONLY);

		if (fd != -1 && buffer != NULL)
		{
			re_wr = read(fd, buffer, letters);
			re_wr = write(STDOUT_FILENO, buffer, re_wr);
		}
		close(fd);
		free(buffer);
	}
	return (re_wr);
}
