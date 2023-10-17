#include"main.h"
/**
 * puts_half - print the half ot character of string
 *
 * @str: string character
 *
 * Return: result
 */
void puts_half(char *str)
{
	int i, l = 0;

while (*str != '\0')
{
l++;
}

for (i = l - (l / 2); i <= l ; i++)
{
	_putchar(str[i]);
	}
_putchar('\n');
}

