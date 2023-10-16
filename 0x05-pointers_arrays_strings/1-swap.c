#include"main.h"

/**
 * swap_int - function to swap the value of two integer
 *
 * @a: integer valur of a
 * @b:integer value of b
 *
 * Return :result
 */

void swap_int(int *a, int *b)
{
	int r;

	r = *a;
	*a = *b;
	*b = r;
}
