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
	int l = 0;

	while (n <= 9)
{
	putchar(n + 48);
	n++;
}
	while (l <= 6)
{
	putchar(l + 97);
	l++;
}
	putchar('\n');
	return (0);
}
