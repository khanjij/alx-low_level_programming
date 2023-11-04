#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the minimun of coins change for money
 * @argc: argument count
 * @argv: argument vecror money
 * Return: 1 print Error if not exact 1
 *	0 if negative number
 *	otherwise return min num
 */

int main(int argc, char *argv[])
{
	int cents

if (argc != 2)
{
printf("Error\n");
return (1);
}

cents = atoi(argv[1]);

if (cents < 0)
{
printf("0\n");
return (0);
}

if (cents / 25 != 0)
int q = cents / 25;
cents %= 25;

if (cents / 10 != 0)
int d = cents / 10;
cents %= 10;

if (cents / 5 != 0)
int n = cents / 5;
cents %= 5;

if (cent / 2 != 0)
int t = cents / 2;
cents %= 2;

if (cents / 1 != 0)
int o = cents;

int sum = q + d + t + o;
printf("%d\n", sum);
return (0);
}
