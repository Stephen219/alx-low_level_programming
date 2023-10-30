#include "main.h"

/**
 * error_exit - Print an error message and exit with the given code.
 * @code: The exit code.
 * @msg: The error message.
 */
void error_exit(int code, const char *msg, ...)
{

	va_list args;



	va_start(args, msg);
	dprintf(STDERR_FILENO, msg, args);
	va_end(args);
	exit(code);



}


/**
 * main - Copies the content of a file to another file.
 * @ac: The number of arguments.
 * @av: An array of arguments.
 *
 * Return: 0 on success, or exit with the specified error codes and messages.
 */
int main(int ac, char **av)
{
	int fd_from, fd_to;

	ssize_t bytes_read, bytes_written;
	char buffer[1024];
	fd_to = -1;

	if (ac != 3)
	{
		error_exit(97, "Usage: %s file_from file_to\n", av[0]);
	}
	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
	{
		error_exit(99, "Error: Can't write to file %s\n", av[2]);
	}

	while ((bytes_read = read(fd_from, buffer, 1024)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			error_exit(99, "Error: Can't write to file %s\n", av[2]);
		}

	}
	if (bytes_read == -1)
	{
		error_exit(98, "Error: Can't read from file %s\n", av[1]);
	}
	if (close(fd_from) == -1)
	{
		error_exit(100, "Error: Can't close fd %d\n", fd_from);
	}
	if (close(fd_to) == -1)
	{
		error_exit(100, "Error: Can't close fd %d\n", fd_to);
	}
	return (0);
}








