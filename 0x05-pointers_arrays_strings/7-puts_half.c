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
l = l - 1;

if (l % 2 == 0)
{
r = l / 2;
}
else if (l % 2 != 0)
{
	r = (l - 1) / 2;
}

for (i = r; i <= l ; i++)
{
	_putchar(str[i]);
	}
_putchar('\n');
}

