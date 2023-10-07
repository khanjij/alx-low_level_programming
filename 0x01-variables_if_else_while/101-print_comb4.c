#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int g, i, d;

	for (g = 48; g < 56; g++)
	{
		for (i = 49; i < 57; i++)
		{
			for (d = 50; d < 58; d++)
			{
				if (d > i && i > g)
				{
					putchar(g);
					putchar(i);
					putchar(d);
					if (g < 55 || i < 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
