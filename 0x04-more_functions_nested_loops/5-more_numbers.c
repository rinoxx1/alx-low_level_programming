#include "main.h"

/**
 * more_numbers - print from 0 to 14, 10 times
 *
 * Return: Always 0 (Success)
*/

void more_numbers(void)
{
	int count, row;

	for (row = 1; row <= 10; row++)
	{
		for (count = 0; count <= 14; count++)
		{
			if (count > 9)
				_putchar('1');
			_putchar(count % 10 + '0');
		}
		_putchar('\n');
	}
}
