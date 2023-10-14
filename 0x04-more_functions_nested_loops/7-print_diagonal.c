#include"main.h"
#include<stdio.h>

/**
 * print_diagonal - print diagonal
 *
 * @n: input function times the character
 *      should be print
 *
 */

void print_diagonal(int n)
{
int c, f;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (c = 1; c <= n ; c++)
{
for (f = 1; f < c ; f++)
{
_putchar(' ');
}
_putchar(92);
}
_putchar('\n');
}
}
