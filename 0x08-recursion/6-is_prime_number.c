#include"main.h"
/**
 *is_prime_number - print f int if primenumber or not
 * @n: input integer
 * Return: 1 if the input integer is a prime number otherwise return 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	return (0);
	if (n <= 3)
	return (1);
for (int i = 2; i * i <= n; i++)
{
	if (n % 2 == 0)
		return (0);
		else
		return (1);
}
}
