#include "function_pointers.h"

/**
  * int_index - function
  * @array: array of element
  * @size: size
  * @cmp: pointer
  *
  * Return: int otherwise -1
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int n;

if (array && cmp)
{
	for (n = 0; n < size ; n++)
	{
		if (cmp(array[n]))
		return (n);
	}
}
return (-1);
}
