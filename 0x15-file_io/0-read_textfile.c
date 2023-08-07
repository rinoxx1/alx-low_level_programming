#include "main.h"

/**
 * read_textfile - reads text from a file and prints it
 * @filename: name of the file to read
 * @letters: number of bites to read
 *
 * Return: number of bites printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int op;
	ssize_t bytes;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return(0);
	op = open(filename, O_RDONLY);
	if (op == -1)
		return (0);
	bytes = read(op, &buf[0], letters);
	bytes = write(STDOUT_FILENO, &buf[0], bytes);
	close(op);
	return (bytes);
}
