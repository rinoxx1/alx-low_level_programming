#include <stdio.h>

/**
 * main - entry point
 * @argc: int
 * @argv: list
 * Return: return 0 if success
*/

int main(int argc, char const *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}
		return (0);
}
