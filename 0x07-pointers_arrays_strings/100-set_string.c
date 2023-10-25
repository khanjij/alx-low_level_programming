#include"main.h"

/**
 * set_string - set value of pointer to char
 * @s: pointer to pointer
 * @to: char
 * Return: pointer to char
 */
void set_string(char **s, char *to)
{
	int l1 = 0;
	int l2 = 0;
	int i, j;

	while (**s != '\0')
		l1++;
	while (*to != '\0')
		l2++;
	l2 = l2 - 1;
	l1 = l1 - 1;
	if (l2 < l1)
	{
		for (j = 0 ; j <= l2 ; j++)
		{
			**s = to[j];
			s++;
		}
		while (j <= l1)
			**s = '\0';
		j++;
		s++;
	}
	if (l2 >= l1)
	{
		for (i = 0 ; i <= l2 ; i++)
		{
			**s = to[i];
			s++;
		}
	}
}
