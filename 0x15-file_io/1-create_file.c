#include "holberton.h"
/**
 * create_file - creates a file
 * @filename: name of the file to be created
 * @text_content: content of the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i;
	ssize_t rt;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
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

