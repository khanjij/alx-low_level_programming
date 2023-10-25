#include"main.h"
/**
 * _puts_recursion - print a string
 * @s: string char
 * Return: string character
 */
void _puts_recursion(char *s)
{
_putchar(*s);
s++;
if (*s == '\0')
_putchar('\n');

	if (*s != '\0')
	{
	_puts_recursion(s);
	}
}
