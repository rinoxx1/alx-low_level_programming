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
		putchar(n);
		putchar(", ");
		n++;
	}
	putchar("9\n");
	return (0);
}
