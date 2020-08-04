#include "holberton.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: string to add at the end of the file
 * Return: 1 if fine, -1 if fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, c_c = 0, r_w = -1;

	fd = open(filename, O_WRONLY | O_APPEND);
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
	if (fd != -1 && text_content)
	{
		r_w = write(fd, text_content, c_c);
		close(fd);
	}
	else
		if (text_content != NULL)
			r_w = -1;

	if (r_w != -1)
		return (1);
	else
		return (r_w);
}
