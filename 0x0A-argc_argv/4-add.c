#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: int
 * @argv: list
 * return: 0
*/

int main(int argc, char const *argv[])
{
	int sum = 0;
	char *c;

	while (--argc)
        {
                for (c = argv[argc]; *c; c++)
			if (*c < '0' || *c > '9')
			{
				ptintf("Error\n");
				return (1);
			}
		sum += atoi(argv[argc]);
        {
	printf("%d\n", sum);
	return (0);
}
