#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file to append to.
 * @text_content: The text content to add to the file (can be NULL).
 *
 * Return: 1 on success, -1 on failure.
 */










int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int no_letters;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (no_letters = 0; text_content[no_letters]; no_letters++)
			;

		rwr = write(fd, text_content, no_letters);

		if (rwr == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
