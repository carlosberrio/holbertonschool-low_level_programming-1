#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file to be read
 * @letters: number of letters it should read and print
 * Return: 1 on success, -1 on failure (file can not be created, file can not be written, write fails, etc)
 */

int create_file(const char *filename, char *text_content)
{
	int fd, size = 0;

	if (filename == NULL)
		return (-1);

	while (text_content[size] != '\0')
		size++;

	size++;

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
	{
		return (-1);
	}

	if (write(fd, text_content, size) == -1)
		return (-1);

	close(fd);

	return (1);
}
