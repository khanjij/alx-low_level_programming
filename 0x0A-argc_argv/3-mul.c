#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiple of two number
 * @argc: argument count
 * @argv: argument vector
 * Return: integer multiple otherwise 1
 */

int main(int argc, char *argv[])
{
	int r, n1, n2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);

	r = n1 * n2;

	printf("%d\n", r);

	return (0);
}
