#include"main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - add positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if no number ,newline
 *	1 if symbol Error , NL
 *	integer adds if numbers
 */

int main(int argc, char *argv[])
{
	int num;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}

	for (int i = 1; i < argc; i++)
	{
	for (int j = 0; argv[i][j] != '\0'; j++)

			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}


		num = atoi(argv[i]);
		sum += num;
	}

	printf("%d\n", sum);

	return (0);
}

