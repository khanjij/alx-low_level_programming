#include"main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("0\n");
		return 0;
	}

	int sum = 0;

	for (int i = 1; i < argc; i++)
	{
		for (int j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return 1;
			}
		}

		int num = atoi(argv[i]);
		sum += num;
	}

	printf("%d\n", sum);

	return (0);
}

