#include "main.h"

/**
 * print_most_numbers - print numbers exept 2 and 4
 *
 * Return: Always 0 (Success)
*/

void print_most_numbers(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		if (n == 50 || n == 52)
			continue;
		_putchar(n);
	}
	_putchar('\n');
}
