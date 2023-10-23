#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: String to be checked
 * @accept: Bytes that will determine the length
 *
 * Return: Length of the bytes given
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	int j;

	while (s[c] != '\0')
	{
		j = 0;
		while (accept[j] != s[c])
		{
			if (accept[j] == '\0')
			{
				return (c);
			}
			j++;
		}

		c++;
	}
	return (c);
}
