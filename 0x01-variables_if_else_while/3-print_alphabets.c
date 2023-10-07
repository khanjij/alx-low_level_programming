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
	putchar(l);
	l++;
}
	while (u <= 'Z')
{
	putchar(u);
	u++;
}
	putchar('\n');
	return (0);
}
