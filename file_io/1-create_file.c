#include "main.h"

/**
 * create_file - creates a file
 *
 * @filename: const char *, the name of the file to be created
 * @text_content: char *, a string to write to the file
 *
 * Return: int, 1 on success, -1 on fail
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t fd, wd;
	int len = 0;

	if (filename == NULL)
	{ return (-1); }

	fd = creat(filename, 0000600);

	if (fd == -1)
	{ return (-1); }

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
		{ len++; }

		wd = write(fd, text_content, len);
	}

	close(fd);

	if (wd == -1)
	{ return (-1); }

	return (1);
}
