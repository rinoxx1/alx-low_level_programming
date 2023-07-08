#include <stdio.h>

/**
 * main - entry point
 * @argc: int
 * @argv: list
 * Return: return 0 if success
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
