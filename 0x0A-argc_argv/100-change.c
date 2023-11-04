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

if (argc < 2
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

int quarters = cents / 25;
cents %= 25;

int dimes = cents / 10;
cents %= 10;

int nickels = cents / 5;
cents %= 5;

int twos = cents / 2;
cents %= 2;

int ones = cents;

printf("%d quarters, %d dimes, %d nickels\n", quarters, dimes, nickels);
printf("%d twos, %d ones\n", twos, ones);
return (0);
}
