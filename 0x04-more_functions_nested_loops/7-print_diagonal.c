#include "main.h"

/**
 * print_diagonal - draws a diagonal in the terminal
 * @n: number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 1; i <= n; i++)
		{
			_putchar('\');
			for (j = 0; j < i; j++)
				_putchar(' ');
		}
		_putchar('\n');
	}
}
