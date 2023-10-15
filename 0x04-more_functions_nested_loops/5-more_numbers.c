#include"main.h"
#include <stdio.h>

/**
 * more_numbers - print number from 0 to 14 ten times
 *
 * return: result
 */

void more_numbers(void)
{
	int i, n;

	for (i = 0; i <= 9 ; i++)
	{
		for (n = 0; n <= 14 ; n++)
		{
			if (n > 9)
				{
				_putchar((n / 10) + 48);
				}
			_putchar((n % 10) + 48);
		}
		_putchar('\n');
	}
}
