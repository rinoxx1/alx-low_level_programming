#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	float even_sum;
	unsigned long fib1 = 0, fib2 = 1, sum = 0;

	while (1)
	{
		sum = fib1 + fib2;
		if (sum > 4000000)
			break;
		if ((sum % 2) == 0)
			even_sum += sum;
		fib1 = fib2;
		fib2 = sum;
	}
	printf("%.0f\n", even_sum);
	return (0);
}
