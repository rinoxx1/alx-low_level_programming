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
 * create_file - create a file
 * @filename: name of file to create
 * @text_content: text to write
 *
 * Return: 1 on success and 0 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int op;
	ssize_t bytes = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	op = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (op == -1)
		return (-1);
	if (len)
		bytes = write(op, text_content, len);
	close(op);
	return (bytes == len ? 1 : -1);
}
