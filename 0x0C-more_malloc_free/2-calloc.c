#include "main.h"

/**
 * *_memset - memory set
 * @s: pointer
 * @b: char b
 * @n: unsigned int
 * Return: s pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
		*s++ = b;
	return (p);
}

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
	_memset(a, 0, sizeof(int) * nmemb);

	return (a);
}
