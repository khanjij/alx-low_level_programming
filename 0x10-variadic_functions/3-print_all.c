#include"variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - function print all
 * @format: pointer format
 * Return: args
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *seperator = "";

	va_list args;

	va_start(args, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", seperator, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", seperator, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", seperator, va_arg(args, double));
					break;
				case 's':
					str = va_arg(args, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", seperator, str);
					break;
				default:
					i++;
					continue;
			}
			seperator = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(args);
}
