#include "main.h"
/**
 * read_textfile - a function that reads a text file and
 *		prints it to the POSIX standard output
 * @filename: a pointer to a string representing the
 *		name of the file to be read.
 * @letters: the number of letters (characters) the function should
 *		read from the file and print to the standard output.
 *
 * Return: returns the actual number of letters it could read and print
 *		or if the file can not be opened or read, return 0
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n_read, n_written;
	char *buffer;


	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	n_read = read(fd, buffer, letters);
	if (n_read == -1)
		return (0);

	n_written = write(STDOUT_FILENO, buffer, n_read);

	if (n_written == -1 || n_written != n_read)
		return (0);

	free(buffer);
	close(fd);
	return (n_written);
}

