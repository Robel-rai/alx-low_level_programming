#include "main.h"

/**
 * append_text_to_file - a function that appends
 * text at the end of a file.
 *
 * @filename: the name of the
 * @text_content: to be appended
 *
 * Return: 1 if working correctly and -1 if the file is not there
 * and if it's not working
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int strleng;
	int rewrite;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (strleng = 0; text_content[nletters]; strleng++)
			;

		rewrite = write(fd, text_content, strleng);

		if (rewrite == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
