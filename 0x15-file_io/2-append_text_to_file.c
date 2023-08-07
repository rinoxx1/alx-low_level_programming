#include "main.h"

/**
 * _strlen - return the length
 * @s: the string
 *
 * Return: length
 */

int _strlen(char *s)
{
	int j = 0;

	if (!s)
		return (0);
	while (*s++)
		j++;
	return (j);
}

/**
 * append_text_to_file - appends text to a file
 * @filename: name of the file
 * @text_content: text to write
 *
 * Return: 1 on success and 0 for failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int op;
	ssize_t bytes = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	op = open(filename, O_WRONLY | O_APPEND);
	if (op == -1)
		return (-1);
	if (len)
		bytes = write(op, text_content, len);
	close(op);
	return (bytes == len ? 1 : -1);
}
