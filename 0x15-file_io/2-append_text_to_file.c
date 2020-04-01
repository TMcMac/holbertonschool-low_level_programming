#include "holberton.h"

int _strlen(char *s);

/**
 * append_text_to_file - a function to append some text into
 * an existing file.
 * @filename: the file to be created
 * @text_content: a null byte terminated string
 * to be written into our new file.
 * Return: 1 on success, -1 on failure for any reason.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wrt, cls;
	int len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
		len =  _strlen(text_content);
	else
		return (1);
	wrt = write(fd, text_content, len);
	if (wrt < 0)
		return (-1);

	cls = close(fd);
	if (cls < 0)
		return (-1);
	return (1);
}

/**
 * _strlen - a function to return the length of a string
 *
 * @s: a char pointer passed from main
 *
 * Return: returns an int for the length of s
 */


int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		continue;

	return (len);
}
