#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: int array
 * @size: array size
 * @cmp: compare funct
 * Return: index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a = 0;

	if (array && size && cmp)
		while (a < size)
		{
			if (cmp(array[a]))
				return (a);
			a++;
		}
	return (-1);
}
