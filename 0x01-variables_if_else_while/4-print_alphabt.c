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
	char u = 'A';
	char l = 'a';

	while (l <= 'z')
{
		if (l == 'q' || l == 'e')
			l++;
		putchar(l);
		l++;
}
	putchar('\n');
	return (0);
}
