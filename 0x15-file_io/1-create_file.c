#include "main.h"
/**
 * create_file - a function that creates a file
 *
 * @filename: the name of the file to create
 * @text_content:string to write to file
 *
 * Return: 1 on success OR -1 on faliure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t no_written;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		no_written = write(fd, text_content, strlen(text_content));
		if (no_written == -1)
			return (-1);
	}

	close(fd);
	return (1);
}

