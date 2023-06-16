#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n = 0;

	while (n <= 8)
	{
		putchar(n + '0');
		putchar(', ');
		n++;
	}
	putchar('9');
	putchar('\n');
	return (0);
}
