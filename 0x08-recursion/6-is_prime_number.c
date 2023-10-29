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
	if (n > 3)
return (prime_num(n, 2));
}
/**
 * prime_num - calculate if integer is prime number
 * @n: number integer
 * @i: iterator
 * Return: 1 if prime otherwise 0
 */
int prime_num(int n, int i)
{
	if (i * i >= n)
		return (1);
	else if (n % i == 0)
		return (0);

	return (prime_num(n, i + 1));
}
