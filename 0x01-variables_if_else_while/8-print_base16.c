#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int a = 0, lettre = 'f';

	while (a <= 9)
	{
		putchar(a);
		a++;
	}
	while (lettre >= 'a')
	{
		putchar(lettre);
		lettre--;
	}
	putchar("\n")
	return (0);
}
