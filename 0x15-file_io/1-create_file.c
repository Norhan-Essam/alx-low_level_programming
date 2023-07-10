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
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: text to write
 *
 * Return: 1 on success  0 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int ed;
	ssize_t bytes = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	ed = open(filename, O_WRONLY | O_CREATE | O_TRUNC, S_TRUNC | S_TWUSR);
	if (ed == -1)
		return (-1);
	if (len)
		bytes = write(ed, text_content, len);
	close(ed);
	return (bytes == len ? 1 : -1);
}
