#include"main.h"

/**
 * print_rev - print string of character in reverse
 *
 * @s: the string character to reverse
 *
 * Return: result
 */

void print_rev(char *s)
{
int len = 0;

while (*s != '\0')
{
len++;
s++;
}
	s--;
	len--;
while (len >= 0)
{
_putchar(*s);
	len--;
	s--;
}
_putchar('\n');
}
