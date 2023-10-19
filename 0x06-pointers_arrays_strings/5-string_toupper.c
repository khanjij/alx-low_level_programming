#include"main.h"
#include<stdio.h>

/**
 *string_toupper - function replace lowercase by uppercase
 *
 * @str: string to return
 *
 *Return: string character
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] -  32;
		}
	}
return (str);
}
