#include"main.h"
#include<stdio.h>

/**
 * print_triangle - print a triangle
 *
 * @size:size of triangle
 *
 * Return: Always 0 (Success)
 *
 */

void print_triangle(int size)
{
int c, f, r;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (c = 1; c <= size ; c++)
{
for (f = 1; f <= size - c ; f++)
{
_putchar(' ');
}
for (r = 1; r <= c ; r++)
{
_putchar("#");
}
_putchar('\n');
}
}
}
