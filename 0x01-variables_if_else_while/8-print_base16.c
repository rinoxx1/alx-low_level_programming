#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int a = 0, lettre = 'a';

	while (a <= 9)
	{
		putchar(a + '0');
		a++;
	}
	while (lettre <= 'f')
	{
		putchar(lettre);
		lettre++;
	}
	putchar('\n');
	return (0);
}
