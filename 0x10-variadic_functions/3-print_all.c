#include"variadic_function.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - function print all
 * @format: pointer format
 * Return: args
 */

void print_all(const char * const format, ...) {
	va_list args;
	char *separator = "";
	unsigned int i = 0;
	char current_char;
	int current_int;
	float current_float;
	char *current_str;

	va_start(args, format);

	while (format && format[i] != '\0')
	{
		if (format[i] == 'c')
		{
			current_char = va_arg(args, int);
			printf("%s%c", separator, current_char);
		}
		else if (format[i] == 'i')
		{
			current_int = va_arg(args, int);
			printf("%s%d", separator, current_int);
		}
		else if (format[i] == 'f')
		{
			current_float = va_arg(args, double);
			printf("%s%f", separator, current_float);
		}
		else if (format[i] == 's')
		{
			current_str = va_arg(args, char *);
			if (current_str == NULL)
			{
			printf("%s(nil)", separator);
			}
			else
			{
			printf("%s%s", separator, current_str);
			}
		}

		separator = ", ";
		i++;
	}

	printf("\n");

	va_end(args);
}
