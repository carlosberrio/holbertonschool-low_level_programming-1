#include "holberton.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: file to be created
 * @text_content: string to be copied
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write fails, etc)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w_bytes, size = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);

	if (fd == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[size] != '\0')
			size++;
	}

	w_bytes = write(fd, text_content, size);

	if (w_bytes == -1)
		return (-1);

	close(fd);

	return (1);
}
