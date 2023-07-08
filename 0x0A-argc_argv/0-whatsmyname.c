#include <stdio.h>

/**
 * main-prints the name of the file
 * @argc: number of arguments
 * @argv: list
 * Return: return 0 if success
*/

int main(int argc, char const *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
