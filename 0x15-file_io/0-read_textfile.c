#include "holberton.h"
/**
 * read_textfile - reads a text file and prints deppending
 * on letters
 * @filename: name of the file (av[1])
 * @letters: numbers of characters to be printed
 * Return: number of characters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n_bytes, wr;
	int fd;
	char *buff;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buff = malloc(letters * sizeof(char));
	if (buff == NULL)
		return (0);

	n_bytes = read(fd, buff, letters);
	buff[letters] = '\0';
	close(fd);

	if (n_bytes == 0)
	{
		free(buff);
		return (0);
	}

	wr = write(STDIN_FILENO, buff, n_bytes);
	free(buff);

	return (wr);

}

