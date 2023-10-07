#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Description: print positive or negative num
 *
 * Return (0): (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("the %d is positive\n", n);
	else if (n == 0)
		print("the %d is zero\n", n);
	else
		print("the %d is negative\n", n);
	return (0);
}
