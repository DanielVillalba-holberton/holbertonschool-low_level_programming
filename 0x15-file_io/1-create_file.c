#include "holberton.h"
/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content:  string to write to the file
 *
 * Return: if filename is NULL return -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, c_c = 0, r_w = -1;

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		if (close(fd) == -1)
			return (-1);
		else
			return (1);
	}
	while (text_content && text_content[c_c])
		c_c++;
	if (fd != -1)
	{
		r_w = write(fd, text_content, c_c);
		close(fd);
	}
	else
		r_w = -1;

	if (r_w != -1)
		return (1);
	else
		return (r_w);
}
