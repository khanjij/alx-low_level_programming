#include"main.h"

/**
 * print_times_table - prints table times of number integer.
 *
 * @n: input integer function.
 */

void print_times_table(int n)
{
	int p, i, j;

	if (n <= 15 && n >= 0)
{
	for (i = 0; i <= n ; i++)
{
	_putchar(48);
	for (j = 1; j <= n ; j++)
	{
	p = i * j;
	_putchar(',');
	_putchar(' ');
		if (p <= 9)
		{
			_putchar(' ');
			_putchar(' ');
			_putchar(p + 48);
		}
		else if (p <= 99 && p >= 10)
		{
			_putchar(' ');
			_putchar((p / 10) + 48);
			_putchar((p % 10) + 48);
		}
			else if (p >= 100)
			{
			_putchar((p / 100) + 48);
			_putchar((p % 100) + 48);
			}
	}
	_putchar('\n');
	}
}
}
