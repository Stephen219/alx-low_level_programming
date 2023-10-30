#include "main.h"



/**
 * read_textfile - Reads a text file and prints it to standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 * Return: The actual number of letters read and printed, 0 on failure.
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = open(filename, O_RDONLY);

	char *buffer = (char *)malloc(sizeof(char) * letters);

	ssize_t bytes_read = read(fd, buffer, letters);


	if (filename == NULL)
	{
		return (0);
	}
	if (fd == -1)
	{
		return (0);
	}

	if (buffer == NULL)
	{
		close(fd);

		free (buffer);
		return (0)


	}

	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		close(fd);
		free(buffer);
		return (0);

	}


	close(fd);
	free(buffer);
	return (bytes_written);
}
