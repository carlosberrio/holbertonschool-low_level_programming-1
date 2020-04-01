#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 * @ac: number of arguments
 * @av: file to copy, copy
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_file(av[1], av[2]);
	return (0);
}

/**
 * copy_file - program that copies the content of a file to another file
 * @file_from: file to copy
 * @file_to: copy
 * Return: Nothing
 */
void copy_file(char *file_from, char *file_to)
{
	int fd_from, fd_to, r_bytes, r_write;
	char *buffer;

	fd_from = open(file_from, O_RDONLY);

	buffer = malloc(sizeof(char) * 1024);

	r_bytes = read(fd_from, buffer, 1024);

	if (file_from  == NULL || fd_from == -1 || r_bytes == -1)
	{
		free(buffer);
		close(fd_from);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	fd_to = open(file_to, O_CREAT | O_TRUNC | O_RDWR, 00664);

	r_write = write(fd_to, buffer, r_bytes);

	if (r_write == -1)
	{
		close(fd_from);
		close(fd_to);
		free(buffer);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	free(buffer);
	close(fd_from);
	close(fd_to);
}
