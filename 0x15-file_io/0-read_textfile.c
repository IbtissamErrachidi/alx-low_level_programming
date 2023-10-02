#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: The name of the file to read.
 * @letters: The number of letters to print.
 *
 * Return: The number of letters printed. If it fails, returns 0.
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t fread, fwritten;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	fread = read(fd, buffer, letters);
	fwritten = write(STDOUT_FILENO, buffer, fread);
	if (fread == -1 || fwritten == -1 || fread != fwritten)
	{
		free(buffer);
		return (0);
	}
	close(fd);
	free(buffer);

	return (fwritten);
}
