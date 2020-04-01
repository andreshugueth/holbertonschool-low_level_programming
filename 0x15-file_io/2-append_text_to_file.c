#include "holberton.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: content to be added
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i;
	ssize_t rt;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	for (i = 0; text_content[i] != '\0'; i++)
	{
	}

	rt = write(fd, text_content, i);
	close(fd);

	if (rt == -1)
		return (-1);

	return (1);
}
