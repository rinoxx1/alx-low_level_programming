#include <stdlib.h>
#include<stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n, ln;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ln = n % 10;
	printf("Last digit of %d is ", n);
	if (n > 5)
	{
	printf("%d and is greater than 5\n", ln);
	}
	if (n == 0)
	{
	printf("%d and is 0\n", ln);
	}
	if (n < 6)
	{
	printf("%d and is less than 6 and not 0\n", ln);
	}
	return (0);
}
