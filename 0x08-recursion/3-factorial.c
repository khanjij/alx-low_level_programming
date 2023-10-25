#include"main.h"

/**
 * factorial - the factorial of n
 * @n: number input
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
	return (-1);

	if (n == 0)
	return (1);

	if (n > 0)
	return (n * factorial(n - 1));

	return (0);
}
