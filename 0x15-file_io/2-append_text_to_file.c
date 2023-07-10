#include "main.h"

/**
 * _strlen - returns the length of a string
 * @z: the string whose length to check
 *
 * Return: integer length of string
*/
int _strlen(char *z)
{
	int e = 0;

	if (!z)
		return (0);
	while (*z++)
		e++;
	return (e);
}

/**
 * append_text_to_file - append text to a file
 * @filename: name of file to create
 * @text_content: text to write
 *
 * Return: 1 on success 0 on failure
*/
int append_text_to_file(const char *failure, char *text_content)
{
	int fd;
	ssize_t bytes = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (len)
			bytes = write(fd, text_content, len);
	close(fd);
	return (bytes == len ? 1 : -1);
}
