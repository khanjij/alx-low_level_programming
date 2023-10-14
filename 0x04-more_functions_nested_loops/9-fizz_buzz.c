#include"main.h"
#include<stdio.h>

/**
 * main - Entry point print numbers 1-100 followed by line
 *	mult 3 fizz and mult 5 buzz
 *
 * Description: print num 1 to 100
 *	mult 3 fizz mult 5 buzz
 *	mult 3 and 5 fizzbuzz
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
{
	if ((n % 3 == 0) && !(n % 5 == 0))
		printf("Fizz");
	else if (!(n % 3 == 0) && (n % 5 == 0))
	printf("Buzz");
	else if ((n % 3 == 0) && (n % 5 == 0)
		printf("FizzBuzz");
		else
	printf("%d", n);

	if (n != 100)
	printf(" ");
	else
	printf("\n");
}
return (0);
}
