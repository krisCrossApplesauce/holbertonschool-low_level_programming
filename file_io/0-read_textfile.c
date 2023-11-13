#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: const char *, name of file
 * @letters: size_t, number of letters to be read and printed
 *
 * Return: ssize_t, number of letters that could be read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, rd, wd;
	char *buf = malloc(sizeof(char) * letters);

	if (filename == NULL)
	{ return (0); }

	fd = open(filename, O_RDWR);

	if (fd == -1)
	{ return (0); }

	rd = read(fd, buf, letters);

	if (rd == -1)
	{ return (0); }
	wd = write(STDOUT_FILENO, buf, rd);

	if (wd == -1)
	{ return (0); }

	close(fd);
	free(buf);
	return (wd);
}
