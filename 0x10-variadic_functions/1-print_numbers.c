#include "variadic_functions.h"
#include<stdarg.h>
#include<stdio.h>
/**
 * print_numbers - prints numbers given as parameters
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n ; i++)
	{
		printf("%d", va_arg(list, int));
		 if (i < n - 1 && separator != NULL)
		 {
		printf("%s", separator);
		}
	}

	va_end(args);

	printf("\n");
}
