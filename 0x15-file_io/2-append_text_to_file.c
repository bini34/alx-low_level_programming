#include "main.h"
/**
 * append_text_to_file -  a function that appends text at the end of a file
 *
 * @filename: the name of the file to create
 * @text_content:string to write to file
 *
 * Return: 1 on success OR -1 on faliure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t no_written;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_APPEND);

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

