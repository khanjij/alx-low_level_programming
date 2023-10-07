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
	int F = 0;
	int D = 97;

	while (F <= 25)
{
		putchar(F + D);
		F++;
}
	putchar('\n');
	return (0);
}
