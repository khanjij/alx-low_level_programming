#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sum of diagonal
 * @size: size on matrix
 * @a: square matrix
 * Return: sum diagonal
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0 ; i < size ; i++)
	{
		sum1 = sum1 + a[i * size +  i];
	}
	for (i = size - 1, j = 0; j < size ; j++, i--)
	{
		sum2 = sum2 + a[j * size +  i];
	}
	printf("%d, %d\n", sum1, sum2);
}
