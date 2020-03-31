#include "holberton.h"

/**
 * read_textfile - a function to read text from a file and
 * write it to the POSIX stadout.
 * @filename: a pointer to the file to be read
 * @letters: the number of letters requested to be read
 * Return: the number of letters actually read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd, wrt;
	unsigned int num = letters + 1;
	char *buf = malloc(num * sizeof(char));

	if (buf == NULL)
		return (0);
	if (filename == NULL || letters == 0)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == 0)
	{
		return (0);
	}

	rd = read(fd, buf, letters);
	wrt = write(STDOUT_FILENO, buf, rd);

	if (rd < 1 || wrt < 1)
		return (0);
	
	close(fd);
	free(buf);
	return (wrt);
}
