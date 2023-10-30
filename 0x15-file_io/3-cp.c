#include "main.h"


/**
 * error_exit - checks if files can be opened.
 * @file_from: where is the file from.
 * @file_to: destination.
 * @argv: args vecto.
 * Return: void for both sux=cdces and fail.
 */
void error_exit(int file_from, int file_to, char *argv[])
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
 * main - tests this method
 * @argc: args count
 * @argv: args vectot.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int f_from, f_to, err_close;
	ssize_t nchars, nwr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp f_from f_to");
		exit(97);
	}

	f_from = open(argv[1], O_RDONLY);
	f_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_exit(f_from, f_to, argv);

	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(f_from, buf, 1024);
		if (nchars == -1)
			error_exit(-1, 0, argv);
		nwr = write(f_to, buf, nchars);
		if (nwr == -1)
			error_exit(0, -1, argv);
	}
	err_close = close(f_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_from);
		exit(100);
	}

	err_close = close(f_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_from);
		exit(100);
	}
	return (0);
}







