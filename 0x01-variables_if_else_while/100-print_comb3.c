#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int g;
	int d;

	for (g = 48; g <= 56; g++)
	{
		for (d = 49; d <= 57; d++)
		{
			if (d > g)
			{
				putchar(g);
				putchar(d);
				if (g < 56 || d < 57)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
