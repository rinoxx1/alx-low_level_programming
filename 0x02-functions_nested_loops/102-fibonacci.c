#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int count, fib1 = 0, fib2 = 1, sum = 0;

	for (count = 0; count < 50; count++)
	{
		sum = fib1 + fib2;
		printf("%d", sum);
		fib1 = fib2;
		fib2 = sum;
		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
