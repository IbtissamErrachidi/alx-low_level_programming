#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * error_file - Checks if a file can be opened.
 * @file_from: The source file name.
 * @file_to: The destination file name.
 * @argv: The arguments vector.
 *
 * Return: Nothing.
 */



void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
/**
 * main - Entry point of the program.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument strings.
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
	int source_fd, target_fd;
	ssize_t bytes_read, bytes_written;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s source_file target_file\n", argv[0]);
		return (97);
	}
	source_fd = open(argv[1], O_RDONLY);
	if (source_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);			return (98);
	}
	target_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (target_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		close(source_fd);
		return (99);
	}
	while ((bytes_read = read(source_fd, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(target_fd, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
			close(source_fd);
			close(target_fd);
			return (99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(source_fd);
		close(target_fd);
		return (98);
	}
	if (close(source_fd) == -1 || close(target_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close files\n");
		return (100);
	}
	return (0);
}
