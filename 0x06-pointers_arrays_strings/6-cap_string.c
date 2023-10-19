#include <stdio.h>
#include"main.h"
/**
 * cap_string - Capitalizes all words of a string
 * @str: The input string
 *
 * Return: Pointer to the resulting string
 */
char *cap_string(char *str)
{
int capitalize = 1;

while (*str != '\0')
{
if (*str == ' ' || *str == '\t' || *str == '\n' || *str == ',' || *str == ';')
{
capitalize = 1;
}
if (*str == '?' || *str == '"' || *str == '(' || *str == ')')
{
capitalize = 1;
}
if (*str == '.' || *str == '!' || *str == '{' || *str == '}')
{
capitalize = 1;
}
else if (capitalize != 0 && *str >= 97 && *str <= 122)
{
*str = *str - 32;
capitalize = 0;
}
str++;
}
return (str);
}
