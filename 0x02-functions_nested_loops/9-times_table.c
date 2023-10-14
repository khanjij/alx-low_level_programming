#include"main.h"

/**
 * times_table - print 9 times table.
 *
*/

void times_table(void)
{
	int i, j, m;

	for (i = 0; i <= 9 ;i++)
{
	_putchar(48);
		for (j = 1; j <= 9, j++)
		{
			m = i * j;
	_putchar(',');
	_putchar(' ');
if (m <= 9)
	_putchar(' ');
else
	_putchar((m / 10) + 48);
	_putchar((m % 10) + 48);
		}
	_putchar('\n');
}
}
