#include"main.h"
#include <stdio.h>

/**
 * print_line - print character n time
 *
 * @n: input function
 *
 * Return: result
 */

int print_line(int n)
{
	int c;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 1; c <= n ; c++)
		{
		_putchar('_');
		}
		_putchar('\n');
	}
}
