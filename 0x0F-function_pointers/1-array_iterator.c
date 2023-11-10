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

if (array && action)
{
for (size_t n = 0; n < size; n++)
{
action(array[n]);
}
}
}
