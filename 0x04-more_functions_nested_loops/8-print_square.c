#include"main.h"
#include<stdio.h>

/**
 * print_square - print diagonal with character
 *
 * @size: input function size square of the character
 *	should be print
 * Return: Always 0 (Success)
 */

void print_diagonal(int size)
{
int c, l;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (l = 1; l <= size ; l++)
{
for (c = 1; c <= size ; c++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
