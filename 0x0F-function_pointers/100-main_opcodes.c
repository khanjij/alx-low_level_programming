#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcode
 * @argc: number of argument
 * @argv: array of argument
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int b;
	int n;
	char *top;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	b = atoi(argv[1]);

	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}

	top = (char *)main;

	for (n = 0; n < b; n++)
	{
		if (n == b - 1)
		{
			printf("%02hhx\n", top[n]);
			break;
		}
		printf("%02hhx ", top[n]);
	}
	return (0);
}
