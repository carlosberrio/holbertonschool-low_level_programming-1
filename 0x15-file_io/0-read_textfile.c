#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file to be read
 * @letters: number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd_open, fd_read, fd_write;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	fd_open = open(filename, O_RDONLY);

	if (fd_open == -1)
	{
		free(buffer);
		return (0);
	}

	fd_read = read(fd_open, buffer, letters);
	buffer[letters] = '\0';

	if (fd_read == -1)
	{
		free(buffer);
		return (0);
	}

	fd_write = write(STDOUT_FILENO, buffer, letters);

	if (fd_write == -1)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(fd_open);

	return (fd_read);
}
