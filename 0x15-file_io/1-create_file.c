#include "main.h"

/**
 * create_file - creates a file in te system
 * @filename: to be createdd filename.
 * @text_content: text to be written in in the dfile
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int no_letters;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (no_letters = 0; text_content[no_letters]; no_letters++);
	rwr = write(fd, text_content, no_letters);

	if (rwr == -1)
	{
		return (-1);
	}

	close(fd);
	return (1);

}	
