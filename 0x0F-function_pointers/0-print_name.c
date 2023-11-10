#include "function_pointers.h"

/**
 * print_name - function to print a name
 * @name: the name
 * @f: function name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
