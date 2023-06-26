#include "main.h"

/**
 * swap_int - swap between two integers
 *
 * @a: input parametre 1
 * @b: input parametre 2
 *
 * Return: nothing
*/

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
