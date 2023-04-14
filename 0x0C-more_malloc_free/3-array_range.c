#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: min integer
 * @max: max integer
 * Return: array
 */

int *array_range(int min, int max)
{
	int lenght, a;
	int *p;

	if (min > max)
		return (NULL);
	lenght = max - min + 1;
	p = malloc(sizeof(int) * lenght);

	if (!p)
		return (NULL);

	for (a = 0; a < lenght; a++)
		p[a] = min++;

	return (p);
}
