#include "main.h"

/**
 * set_bit - sets the bit at the index
 * @n: the number to index
 * @index: the bit to set
 *
 * Return: 1 if successful and -1 if not
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (!!(*n  |= 1L << index));
}
