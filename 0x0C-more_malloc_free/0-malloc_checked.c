#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @b: insigned integer
 * Return: 0 or a = malloc b
 */

void *malloc_checked(unsigned int b)
{
	int *a = malloc(b);

	if (a == 0)
		exit(98);
	return (a);
}
