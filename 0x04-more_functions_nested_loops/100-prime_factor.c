#include <stdio.h>

/**
 * largest_prime_factor - Finds the largest prime factor of a given number
 *
 * @n: The number to find the largest prime factor of
 *
 * Main - Entry point of number
 *
 * Return: The largest prime factor (0)
 */

long largest_prime_factor(long n)
{
long factor = 2;

while (n > 1)
{
if (n % factor == 0)
{
n /= factor;
}
else
{
factor++;
}
}

return (factor);
}

/**
 * Main - Entry point number
 *
 * Description: largest factor of number
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
long number = 612852475143;

printf("%ld\n", largest_prime_factor(number));

return (0);
}
