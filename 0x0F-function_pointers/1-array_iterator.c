#include "function_pointers.h"
#include<stdio.h>

/**
 * array_iterator - function given as parameter on array element
 * @array: array to execute function
 * @size: the size of array
 * @action: pointer to function you need to use
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t n;

	if (array == NULL || action == NULL)
	{
		return;
	}

for (n = 0; n < size ; n++)
{
action(array[n]);
}
}
