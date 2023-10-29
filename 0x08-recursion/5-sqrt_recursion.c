#include"main.h"
/**
 * _sqrt_recursion - function that returns square of num
 * @n: the input number
 * Return: return square otherwise -1
 */
int _sqrt_recursion(int n)
{
if (n < 0)
	return (-1);
return (the_sqrt(n, 1));
}

/**
 * the_sqrt - function calculate square
 * @n: number
 * @i: square
 * Return: result
 */
int the_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);

	if (i * i == 0)
		return (i);

if (i * i < n)
return (the_sqrt(n, i + 1));

return (0);
}
