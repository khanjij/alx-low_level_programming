#include<stdio.h>
/**
 * main - print the number of arguments passed to program
 * @argc: number of argument
 * @argv: argument string
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void)argv;
printf("%d\n", argc - 1);

return (0);
}
