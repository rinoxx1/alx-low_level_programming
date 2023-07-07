#include "main.h"

/**
 * _isdigit - check for digits
 *
 * @c: input
 *
 * Return: 1 if digit and 0 if not
*/

int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
		return (1);
	else
		return (0);
}
