#include"main.h"

/**
 * _puts - print string character
 *
 * @str: string of character
 *
 * Return: result
 */

void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
