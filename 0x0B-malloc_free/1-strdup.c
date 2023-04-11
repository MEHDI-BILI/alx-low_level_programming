#include "main.h"

/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: pointer to duplicated string, else NULL
 */

char *_strdup(char *str)
{
	int a = 0, size = 0;
	char *b;

	if (str == NULL)
		return (NULL);
	for (; str[size] != '\0'; size++)
		b = malloc(size * sizeof(*str) + 1);

	if (b == 0)
		return (NULL);

	for (; a < size; a++)
		b[a] = str[a];

	return (b);
}
