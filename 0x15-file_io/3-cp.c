#include "holberton.h"
/**
 * main - copy the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 * Return: 97 for error in argc, 98 for read error, 99 write error
 * 100 close
 */
int main(int argc, char **argv)
{
	int f_from, f_to;
	ssize_t read_value, ret_value;
	char buf[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"),
			exit(97);
	if (argv[1] == NULL)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
			exit(98);
	if (argv[2] == NULL)
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]),
			exit(99);

	f_from = open(argv[1], O_RDONLY);
	f_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	read_value = read(f_from, buf, 1024);
	if (read_value == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
			exit(98);
	while (read_value != 0)
	{
		ret_value = write(f_to, buf, read_value);
		if (ret_value == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		read_value = read(f_from, buf, 1024);
		if (read_value == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
				exit(98);
	}
	ret_value = close(f_from);
	if (ret_value == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_from),
			exit(100);
	ret_value = close(f_to);
	if (ret_value == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_to),
			exit(100);
	return (0);
}

