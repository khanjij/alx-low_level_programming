#include"main.h"
#include<ctype.h>

/**
 *_islower - function to check lowercase
 *
 *@c: charachter to check
 *
 *Return: 1 if 'c' is lowercase
 *	otherwise return always 0
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
