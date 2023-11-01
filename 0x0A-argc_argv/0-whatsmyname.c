#include<stdio.h>

/**
 * main - print name of program
 * @argc: int number of argument
 * @argv: array of argument
 * Return: always 0 (Success)
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", *argv);
	}
	return (0);
}
