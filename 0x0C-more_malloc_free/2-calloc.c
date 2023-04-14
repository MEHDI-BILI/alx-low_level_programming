#include "main.h"

/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: memory
 * @size: size
 * Return: Null or pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *a;

	if (size == 0 || nmemb == 0)
		return (NULL);
	a = malloc(sizeof(int) * nmemb);

	if (a == 0)
		return (NULL);
	return (a);
}
