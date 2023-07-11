#include "main.h"
#include <stdlib.h>
/**
 * *create_array - creat an array of chars
 * @size: size of the array
 * @c: char to initialize
 * Return: pointer to the array initialized or NULL
*/

char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (0);
	while (size--)
		n[size] = c;
	return (n);
}
