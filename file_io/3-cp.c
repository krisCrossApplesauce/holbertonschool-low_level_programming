#include "main.h"

int close_func(ssize_t file_desc);

/**
 * main - main func that copies the content of a file to another file
 *
 * @argc: int, num of args (should be 3)
 * @argv: char *, the args (the file names)
 *
 * Return: int, 0
 */
int main(int argc, char *argv[])
{
	ssize_t from_fd, to_fd, from_rd = 1, to_wd;
	char buf[1204];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	from_fd = open(argv[1], O_RDWR);

	if (from_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	to_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0000664);

	if (to_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close_func(from_fd);
		exit(99);
	}

	while (from_rd)
	{
		from_rd = read(from_fd, buf, 1024);

		if (from_rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			close_func(from_fd);
			close_func(to_fd);
			exit(98);
		}
		else if (from_rd == 0)
		{ break; }

		to_wd = write(to_fd, buf, from_rd);

		if (to_wd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close_func(from_fd);
			close_func(to_fd);
			exit(99);
		}
	}

	if (close_func(from_fd) == -1)
	{
		close(to_fd);
		exit(100);
	}

	if (close_func(to_fd) == -1)
	{ exit(100); }

	return (0);
}

/**
 * close_func - handles closing file descriptor
 *
 * @file_desc: ssize_t, file descriptor to be closed
 *
 * Return: int
 */
int close_func(ssize_t file_desc)
{
	int close_value = close(file_desc);

	if (close_value == -1)
	{ dprintf(STDERR_FILENO, "Error: Can't close fd %ld\n", file_desc); }

	return (close_value);
}
