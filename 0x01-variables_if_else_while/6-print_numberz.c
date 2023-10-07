#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: alphabet ascii format
 *
 * Return:0 (Success)
*/

int main(void)
{
	int u = 0;
	int f = 48;

	while (u < 58)
{
		putchar(u + f);
		u++;
}
	putchar('\n');
	return (0);
}

