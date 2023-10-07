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
	int n = 0;

	while (n <= 9)
{
	putchar(n + 48);
	if (n < 9)
{
		putchar(44);
		putchar(32);
}
	n++;
}
	putchar('\n');
	return (0);
}
