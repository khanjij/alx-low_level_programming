#include "main.h"
#include<stdio.h>

/**
 * main - print name of program
 * @argc: int number of argument
 * @argv: array of argument
 * Return: always 0 (Success)
 */

int main(int argc, char const *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
