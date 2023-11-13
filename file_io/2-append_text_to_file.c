#include "main.h"

/**
 * append_text_to_file - appends text to the end of a file
 *
 * @filename: const char *, the name of the file
 * @text_content: char *, the text to append to the end of the file
 *
 * Return: int, 1 on success, -1 on fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t fd, wd;
	int len = 0;

	if (filename == NULL)
	{ return (-1); }

	fd = open(filename, O_RDWR | O_APPEND);

	if (fd == -1)
	{ return (-1); }

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
		{ len++; }

		wd = write(fd, text_content, len);
	}

	if (wd == -1)
	{ return (-1); }

	close(fd);

	return (1);
}
