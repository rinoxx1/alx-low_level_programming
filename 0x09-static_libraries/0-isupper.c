#include "main.h"
/**
 * _isupper - check if c is upper
 *
 * @c: input
 *
 * Return: 1 if its upper and 0 if not
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
