#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int sum, num;

	for (num = 0; num < 1024; num++)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
			sum += sum;
	}
	printf("%d\n", sum);
	return (0);
}
